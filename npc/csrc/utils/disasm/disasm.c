// /***************************************************************************************
// * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
// *
// * NEMU is licensed under Mulan PSL v2.
// * You can use this software according to the terms and conditions of the Mulan PSL v2.
// * You may obtain a copy of Mulan PSL v2 at:
// *          http://license.coscl.org.cn/MulanPSL2
// *
// * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
// * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
// * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
// *
// * See the Mulan PSL v2 for more details.
// ***************************************************************************************/

// #if defined(__GNUC__) && !defined(__clang__)
// #pragma GCC diagnostic push
// #pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
// #endif
// #include "common/init.h"
// #include "llvm/MC/MCAsmInfo.h"
// #include "llvm/MC/MCContext.h"
// #include "llvm/MC/MCDisassembler/MCDisassembler.h"
// #include "llvm/MC/MCInstPrinter.h"
// #if LLVM_VERSION_MAJOR >= 14
// #include "llvm/MC/TargetRegistry.h"
// #if LLVM_VERSION_MAJOR >= 15
// #include "llvm/MC/MCSubtargetInfo.h"
// #endif
// #else
// #include "llvm/Support/TargetRegistry.h"
// #endif
// #include "llvm/Support/TargetSelect.h"

// #if defined(__GNUC__) && !defined(__clang__)
// #pragma GCC diagnostic pop
// #endif

// #if LLVM_VERSION_MAJOR < 11
// #error Please use LLVM with major version >= 11
// #endif

// using namespace llvm;

// static llvm::MCDisassembler *gDisassembler = nullptr;
// static llvm::MCSubtargetInfo *gSTI = nullptr;
// static llvm::MCInstPrinter *gIP = nullptr;

// extern "C" void init_disasm(const char *triple) {
//   llvm::InitializeAllTargetInfos();
//   llvm::InitializeAllTargetMCs();
//   llvm::InitializeAllAsmParsers();
//   llvm::InitializeAllDisassemblers();

//   std::string errstr;
//   std::string gTriple(triple);

//   llvm::MCInstrInfo *gMII = nullptr;
//   llvm::MCRegisterInfo *gMRI = nullptr;
//   auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
//   if (!target) {
//     llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";
//     assert(0);
//   }

//   MCTargetOptions MCOptions;
//   gSTI = target->createMCSubtargetInfo(gTriple, "", "");
//   std::string isa = target->getName();
//   if (isa == "riscv32" || isa == "riscv64") {
//     gSTI->ApplyFeatureFlag("+m");
//     gSTI->ApplyFeatureFlag("+a");
//     gSTI->ApplyFeatureFlag("+c");
//     gSTI->ApplyFeatureFlag("+f");
//     gSTI->ApplyFeatureFlag("+d");
//   }
//   gMII = target->createMCInstrInfo();
//   gMRI = target->createMCRegInfo(gTriple);
//   auto AsmInfo = target->createMCAsmInfo(*gMRI, gTriple, MCOptions);
// #if LLVM_VERSION_MAJOR >= 13
//    auto llvmTripleTwine = Twine(triple);
//    auto llvmtriple = llvm::Triple(llvmTripleTwine);
//    auto Ctx = new llvm::MCContext(llvmtriple,AsmInfo, gMRI, nullptr);
// #else
//    auto Ctx = new llvm::MCContext(AsmInfo, gMRI, nullptr);
// #endif
//   gDisassembler = target->createMCDisassembler(*gSTI, *Ctx);
//   gIP = target->createMCInstPrinter(llvm::Triple(gTriple),
//       AsmInfo->getAssemblerDialect(), *AsmInfo, *gMII, *gMRI);
//   gIP->setPrintImmHex(true);
//   gIP->setPrintBranchImmAsAddress(true);
//   if (isa == "riscv32" || isa == "riscv64")
//     gIP->applyTargetSpecificCLOption("no-aliases");
// }

// extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
//   MCInst inst;
//   llvm::ArrayRef<uint8_t> arr(code, nbyte);
//   uint64_t dummy_size = 0;
//   gDisassembler->getInstruction(inst, dummy_size, arr, pc, llvm::nulls());

//   std::string s;
//   raw_string_ostream os(s);
//   gIP->printInst(&inst, pc, "", *gSTI, os);

//   int skip = s.find_first_not_of('\t');
//   const char *p = s.c_str() + skip;
//   assert((int)s.length() - skip < size);
//   strcpy(str, p);
// }


























/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <dlfcn.h>
#include <capstone/capstone.h>
#include <common/common.h>


#define str_temp(x) #x
#define str(x) str_temp(x)

// strlen() for string constant
#define STRLEN(CONST_STR) (sizeof(CONST_STR) - 1)

// calculate the length of an array
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

// macro concatenation
#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)
#define concat3(x, y, z) concat(concat(x, y), z)
#define concat4(x, y, z, w) concat3(concat(x, y), z, w)
#define concat5(x, y, z, v, w) concat4(concat(x, y), z, v, w)

// macro testing
// See https://stackoverflow.com/questions/26099745/test-if-preprocessor-symbol-is-defined-inside-macro
#define CHOOSE2nd(a, b, ...) b
#define MUX_WITH_COMMA(contain_comma, a, b) CHOOSE2nd(contain_comma a, b)
#define MUX_MACRO_PROPERTY(p, macro, a, b) MUX_WITH_COMMA(concat(p, macro), a, b)
// define placeholders for some property
#define __P_DEF_0  X,
#define __P_DEF_1  X,
#define __P_ONE_1  X,
#define __P_ZERO_0 X,
// define some selection functions based on the properties of BOOLEAN macro
#define MUXDEF(macro, X, Y)  MUX_MACRO_PROPERTY(__P_DEF_, macro, X, Y)


static size_t (*cs_disasm_dl)(csh handle, const uint8_t *code,
    size_t code_size, uint64_t address, size_t count, cs_insn **insn);
static void (*cs_free_dl)(cs_insn *insn, size_t count);

static csh handle;

extern "C" void init_disasm() {
  void *dl_handle;
  // dl_handle = dlopen("tools/capstone/repo/libcapstone.so.5", RTLD_LAZY);
  // dl_handle = dlopen("/home/tianyi/workspace/capstone/libcapstone.so.6", RTLD_LAZY);
  dl_handle = dlopen("/home/tianyi/ysyx/ysyx-workbench/nemu/tools/capstone/repo/libcapstone.so.5", RTLD_LAZY);
  assert(dl_handle);

  cs_err (*cs_open_dl)(cs_arch arch, cs_mode mode, csh *handle) = NULL;
  cs_open_dl = dlsym(dl_handle, "cs_open");
  assert(cs_open_dl);

  cs_disasm_dl = dlsym(dl_handle, "cs_disasm");
  assert(cs_disasm_dl);

  cs_free_dl = dlsym(dl_handle, "cs_free");
  assert(cs_free_dl);

  cs_arch arch = CS_ARCH_RISCV;
                  
  cs_mode mode = CS_MODE_RISCV32;
	int ret = cs_open_dl(arch, mode, &handle);
  assert(ret == CS_ERR_OK);

#ifdef CONFIG_ISA_x86
  cs_err (*cs_option_dl)(csh handle, cs_opt_type type, size_t value) = NULL;
  cs_option_dl = dlsym(dl_handle, "cs_option");
  assert(cs_option_dl);

  ret = cs_option_dl(handle, CS_OPT_SYNTAX, CS_OPT_SYNTAX_ATT);
  assert(ret == CS_ERR_OK);
#endif
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
	cs_insn *insn;
	size_t count = cs_disasm_dl(handle, code, nbyte, pc, 0, &insn);
  assert(count == 1);
  int ret = snprintf(str, size, "%s", insn->mnemonic);
  if (insn->op_str[0] != '\0') {
    snprintf(str + ret, size - ret, "\t%s", insn->op_str);
  }
  cs_free_dl(insn, count);
}

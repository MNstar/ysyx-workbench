// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"io_bundleAluOPData_oprand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_bundleAluOPData_oprand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_bundleAluOPData_option",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"io_resultAlu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"io_dataRead1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_dataRead2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_bg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"io_bundleReg_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"io_bundleReg_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"io_bundleReg_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"io_bundleMemDataControl_ctrlLoad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"io_bundleMemDataControl_ctrlStore",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"io_bundleMemDataControl_memSize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"io_bundleRegDataControl_ctrlJump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_bundleRegDataControl_ctrlRegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_bundleAluOPData_oprand1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_bundleAluOPData_oprand2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_bundleAluOPData_option",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"ctrlsignals_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"ctrlsignals_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"ctrlsignals_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"ctrlsignals_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"ctrlsignals_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"ctrlsignals_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+23,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("dpi_box", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"io_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_bundleMemDataControl_ctrlLoad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"io_bundleMemDataControl_ctrlStore",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"io_bundleMemDataControl_memSize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dpi_box", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"ctrlStore",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"ctrlLoad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memInst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pcReg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_ctrlJump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"io_addrTarget",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_bg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"io_addrOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"regPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("registers", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_bundleRegDataControl_ctrlJump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_bundleRegDataControl_ctrlRegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"io_bundleReg_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"io_bundleReg_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"io_bundleReg_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_resultAlu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_memRdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"io_memCtrlLoad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_dataRead1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_dataRead2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"regs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"regs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"regs_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"regs_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"regs_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"regs_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"regs_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"regs_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"regs_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"regs_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"regs_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"regs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"regs_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"regs_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"regs_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"regs_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"regs_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_const_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1),32);
    bufp->fullIData(oldp+2,(vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2),32);
    bufp->fullCData(oldp+3,(vlSelf->Top__DOT___decoder_io_bundleAluOPData_option),4);
    bufp->fullIData(oldp+4,(vlSelf->Top__DOT___alu_io_resultAlu),32);
    bufp->fullIData(oldp+5,(vlSelf->Top__DOT___memInst_inst),32);
    bufp->fullIData(oldp+6,(vlSelf->Top__DOT___registers_io_dataRead1),32);
    bufp->fullIData(oldp+7,(vlSelf->Top__DOT___registers_io_dataRead2),32);
    bufp->fullCData(oldp+8,(vlSelf->Top__DOT___decoder_io_bg),2);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+12,(vlSelf->Top__DOT___decoder_io_bundleMemDataControl_ctrlLoad));
    bufp->fullBit(oldp+13,(((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_8)) 
                            & (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_1))));
    bufp->fullIData(oldp+14,(vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize),32);
    bufp->fullBit(oldp+15,(vlSelf->Top__DOT___decoder_io_bundleRegDataControl_ctrlJump));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_7) 
                            | ((0x100073U != vlSelf->Top__DOT___memInst_inst) 
                               & ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_2) 
                                  | ((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_1)) 
                                     & (IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184)))))));
    bufp->fullCData(oldp+17,(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0),3);
    bufp->fullCData(oldp+18,(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_1),2);
    bufp->fullCData(oldp+19,(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_2),2);
    bufp->fullCData(oldp+20,(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_3),2);
    bufp->fullCData(oldp+21,(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_9),2);
    bufp->fullCData(oldp+22,(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_10),2);
    bufp->fullQData(oldp+23,(vlSelf->Top__DOT__decoder__DOT__imm),33);
    bufp->fullCData(oldp+25,(((1ULL == vlSelf->Top__DOT__decoder__DOT__imm) 
                              & (2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_2)))),2);
    bufp->fullIData(oldp+26,(vlSelf->Top__DOT__mem__DOT___dpi_box_rdata),32);
    bufp->fullIData(oldp+27,(vlSelf->Top__DOT__pcReg__DOT__regPC),32);
    bufp->fullIData(oldp+28,(vlSelf->Top__DOT__registers__DOT__regs_0),32);
    bufp->fullIData(oldp+29,(vlSelf->Top__DOT__registers__DOT__regs_1),32);
    bufp->fullIData(oldp+30,(vlSelf->Top__DOT__registers__DOT__regs_2),32);
    bufp->fullIData(oldp+31,(vlSelf->Top__DOT__registers__DOT__regs_3),32);
    bufp->fullIData(oldp+32,(vlSelf->Top__DOT__registers__DOT__regs_4),32);
    bufp->fullIData(oldp+33,(vlSelf->Top__DOT__registers__DOT__regs_5),32);
    bufp->fullIData(oldp+34,(vlSelf->Top__DOT__registers__DOT__regs_6),32);
    bufp->fullIData(oldp+35,(vlSelf->Top__DOT__registers__DOT__regs_7),32);
    bufp->fullIData(oldp+36,(vlSelf->Top__DOT__registers__DOT__regs_8),32);
    bufp->fullIData(oldp+37,(vlSelf->Top__DOT__registers__DOT__regs_9),32);
    bufp->fullIData(oldp+38,(vlSelf->Top__DOT__registers__DOT__regs_10),32);
    bufp->fullIData(oldp+39,(vlSelf->Top__DOT__registers__DOT__regs_11),32);
    bufp->fullIData(oldp+40,(vlSelf->Top__DOT__registers__DOT__regs_12),32);
    bufp->fullIData(oldp+41,(vlSelf->Top__DOT__registers__DOT__regs_13),32);
    bufp->fullIData(oldp+42,(vlSelf->Top__DOT__registers__DOT__regs_14),32);
    bufp->fullIData(oldp+43,(vlSelf->Top__DOT__registers__DOT__regs_15),32);
    bufp->fullIData(oldp+44,(vlSelf->Top__DOT__registers__DOT__regs_16),32);
    bufp->fullIData(oldp+45,(vlSelf->Top__DOT__registers__DOT__regs_17),32);
    bufp->fullIData(oldp+46,(vlSelf->Top__DOT__registers__DOT__regs_18),32);
    bufp->fullIData(oldp+47,(vlSelf->Top__DOT__registers__DOT__regs_19),32);
    bufp->fullIData(oldp+48,(vlSelf->Top__DOT__registers__DOT__regs_20),32);
    bufp->fullIData(oldp+49,(vlSelf->Top__DOT__registers__DOT__regs_21),32);
    bufp->fullIData(oldp+50,(vlSelf->Top__DOT__registers__DOT__regs_22),32);
    bufp->fullIData(oldp+51,(vlSelf->Top__DOT__registers__DOT__regs_23),32);
    bufp->fullIData(oldp+52,(vlSelf->Top__DOT__registers__DOT__regs_24),32);
    bufp->fullIData(oldp+53,(vlSelf->Top__DOT__registers__DOT__regs_25),32);
    bufp->fullIData(oldp+54,(vlSelf->Top__DOT__registers__DOT__regs_26),32);
    bufp->fullIData(oldp+55,(vlSelf->Top__DOT__registers__DOT__regs_27),32);
    bufp->fullIData(oldp+56,(vlSelf->Top__DOT__registers__DOT__regs_28),32);
    bufp->fullIData(oldp+57,(vlSelf->Top__DOT__registers__DOT__regs_29),32);
    bufp->fullIData(oldp+58,(vlSelf->Top__DOT__registers__DOT__regs_30),32);
    bufp->fullIData(oldp+59,(vlSelf->Top__DOT__registers__DOT__regs_31),32);
    bufp->fullBit(oldp+60,(vlSelf->clock));
    bufp->fullBit(oldp+61,(vlSelf->reset));
    bufp->fullIData(oldp+62,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+63,(vlSelf->io_rdata),32);
}

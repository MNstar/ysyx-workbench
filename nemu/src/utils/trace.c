#include <common.h>
#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <memory/paddr.h>

void itrace(Decode *s, char *p) {
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
    int ilen = s->snpc - s->pc;
    int i;
    uint8_t *inst = (uint8_t *)&s->isa.inst;
#ifdef CONFIG_ISA_x86
    for (i = 0; i < ilen; i ++) {
#else
    for (i = ilen - 1; i >= 0; i --) {
#endif
      p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst, ilen);
}


void mtrace(char *str, uint32_t addr, uint32_t data) {
    if (strcmp(str, "Write") == 0) {
        printf("\033[0m\033[1;34m---Write Data      : Waddr = %08x; Wdata = %08x;---\033[0m\n", addr, data);
    } else if (strcmp(str, "Read") == 0 && addr == cpu.pc) {
        printf("\033[0m\033[1;33m---Read Instruction: Raddr = %08x; Rdata = %08x;---\033[0m\n", addr, data);
    } else {
        printf("\033[0m\033[1;35m---Read Data       : Raddr = %08x; Rdata = %08x;---\033[0m\n", addr, data);
    }

}

void ftrace() {

}

void iringbuf() {

}



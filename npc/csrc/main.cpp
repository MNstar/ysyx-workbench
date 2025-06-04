#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <stdio.h>

// #include "Vaddi___024unit.h"
#include <assert.h>
#include "common/common.h"
#include "common/cpu.h"
#include "common/memory.h"
#include "common/reg.h"
#include "common/init.h"



int main(int argc, char** argv, char** env) {
    printf("Welcome to %s-NPC!\n", ANSI_FMT("riscv32", ANSI_FG_YELLOW ANSI_BG_GREEN));
    printf("For help, type \"help\"\n");
    init_npc(argc, argv);
    init_fir();
    init_disasm("riscv32-pc-linux-gnu");
    sdb_mainloop();
}



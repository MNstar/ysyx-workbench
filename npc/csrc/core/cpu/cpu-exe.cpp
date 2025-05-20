#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <verilated.h>   //Verilator库的头文件
#include <verilated_vcd_c.h>  //VCD波形输出头文件
#include "VTop.h"
#include <VTop___024root.h>
#include <assert.h>
#include "common/cpu.h"
#include "common/memory.h"
#include <locale.h>
#include "common/init.h"
#include "common/common.h"

#define MAX_INST_TO_PRINT 10
static bool g_print_step = false;

VTop *dut = new VTop;
VerilatedVcdC *m_trace;
VerilatedContext* contextp;

char logbuf[128];

static void single_cycle() {
    dut->clock = 0; 
    dut->eval();
    dut->clock = 1;
    dut->eval();
}

static void reset(int n) {
    dut->reset = 1;
    while (n -- > 0) single_cycle();
    dut->reset = 0;
}

void init_fir() {
    Verilated::traceEverOn(true);
    contextp = new VerilatedContext;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("./waveform.vcd");
    reset(10);
}

void exec_once() {
    char *p = logbuf;
    dut->clock = 0;
    dut->eval();

    contextp->timeInc(1);
    m_trace->dump(contextp->time());
    dut->clock = 1;
    p += snprintf(p, sizeof(logbuf), "0x%08x" ":", dut->io_pc);
    uint32_t inst_data = pmem_read(dut->io_pc, 4);
    uint8_t *inst = (uint8_t *)&inst_data;
    for(int i = 3; i >= 0; i--) {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    memset(p, ' ', 1);
    p += 1;
    disassemble(p, logbuf+sizeof(logbuf)-p, dut->io_pc, inst, 4);
    dut->eval();
    // if(g_print_step) printf("%s\n", logbuf);
    if(g_print_step) puts(logbuf);
    contextp->timeInc(1);
    m_trace->dump(contextp->time());
}

void execute(uint64_t n) {
    for (;n > 0; n--) {
        exec_once();
        if(npc_state != NEMU_RUNNING) break;
    }
}


void cpu_exec(int n) {
    g_print_step = (n < MAX_INST_TO_PRINT);
    if(npc_state == NEMU_EXIT) {
        printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
        return;
    } else {
        execute(n);  
        if(npc_state == NEMU_EXIT) {
            printf("\033[;36mHIT GOOD TRAP!\033[0m\n");
            //break;
        }
    }
    //execute(n);
}





#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>   //Verilator库的头文件
#include <verilated_vcd_c.h>  //VCD波形输出头文件
#include "VTop.h"
#include <VTop___024root.h>

extern VTop *dut;
extern VerilatedVcdC *m_trace;
extern VerilatedContext* contextp;

// ANSI颜色定义
#define ANSI_NONE       "\33[0m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

// 内存定义
#define MEM_START  0x80000000
#define MEM_END    0x87ffffff
#define MEM_SIZE   (MEM_END + 1 - MEM_START)
#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

// 状态定义
enum {NEMU_RUNNING, NEMU_EXIT};



#endif 
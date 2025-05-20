#ifndef __CPU_H__
#define __CPU_H__

#include "common.h"

// CPU执行相关函数
void cpu_exec(uint64_t n);
void init_fir();

// 调试相关函数
void sdb_mainloop();

// 外部变量
extern int npc_state;
extern "C" void npc_trap();

#endif 
#ifndef __INIT_H__
#define __INIT_H__

#include "common.h"

// 初始化函数
void init_npc(int argc, char *argv[]);
extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#endif 
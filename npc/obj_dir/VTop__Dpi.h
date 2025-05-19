// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/Top.sv:548:32
    extern void npc_trap();
    // DPI import at build/Top.sv:568:31
    extern int pmem_read(int addr, int len);
    // DPI import at build/Top.sv:569:32
    extern void pmem_write(int addr, int len, int redata);

#ifdef __cplusplus
}
#endif

#endif  // guard

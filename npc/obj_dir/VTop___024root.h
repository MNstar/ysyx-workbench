// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*1:0*/ Top__DOT___decoder_io_bg;
        CData/*0:0*/ Top__DOT___decoder_io_bundleMemDataControl_ctrlLoad;
        CData/*0:0*/ Top__DOT___decoder_io_bundleRegDataControl_ctrlJump;
        CData/*3:0*/ Top__DOT___decoder_io_bundleAluOPData_option;
        CData/*0:0*/ Top__DOT__decoder__DOT___ctrlsignals_T_17;
        CData/*0:0*/ Top__DOT__decoder__DOT___ctrlsignals_T_184;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_0;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_1;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_2;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_3;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_4;
        CData/*2:0*/ Top__DOT__decoder__DOT__ctrlsignals_0;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_5;
        CData/*1:0*/ Top__DOT__decoder__DOT__ctrlsignals_1;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_7;
        CData/*1:0*/ Top__DOT__decoder__DOT__ctrlsignals_2;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_8;
        CData/*1:0*/ Top__DOT__decoder__DOT__ctrlsignals_3;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_9;
        CData/*0:0*/ Top__DOT__decoder__DOT___GEN_10;
        CData/*1:0*/ Top__DOT__decoder__DOT__ctrlsignals_9;
        CData/*1:0*/ Top__DOT__decoder__DOT__ctrlsignals_10;
        CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_h56f4da47__0;
        CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_he3a9266f__0;
        CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_hb138e90e__0;
        CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_h564ccae5__0;
        CData/*0:0*/ Top__DOT__decoder__DOT____VdfgTmp_h43af6520__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ Top__DOT__decoder__DOT___GEN;
        VL_OUT(io_pc,31,0);
        VL_OUT(io_rdata,31,0);
        IData/*31:0*/ Top__DOT___memInst_inst;
        IData/*31:0*/ Top__DOT___alu_io_resultAlu;
        IData/*31:0*/ Top__DOT___registers_io_dataRead1;
        IData/*31:0*/ Top__DOT___registers_io_dataRead2;
        IData/*31:0*/ Top__DOT___decoder_io_bundleMemDataControl_memSize;
        IData/*31:0*/ Top__DOT___decoder_io_bundleAluOPData_oprand1;
        IData/*31:0*/ Top__DOT___decoder_io_bundleAluOPData_oprand2;
        IData/*31:0*/ Top__DOT__pcReg__DOT__regPC;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_0;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_1;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_2;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_3;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_4;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_5;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_6;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_7;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_8;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_9;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_10;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_11;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_12;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_13;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_14;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_15;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_16;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_17;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_18;
    };
    struct {
        IData/*31:0*/ Top__DOT__registers__DOT__regs_19;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_20;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_21;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_22;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_23;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_24;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_25;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_26;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_27;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_28;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_29;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_30;
        IData/*31:0*/ Top__DOT__registers__DOT__regs_31;
        VlWide<32>/*1023:0*/ Top__DOT__registers__DOT___GEN;
        IData/*31:0*/ Top__DOT__registers__DOT___regs_T_6;
        IData/*31:0*/ Top__DOT__mem__DOT___dpi_box_rdata;
        IData/*31:0*/ __Vfunc_Top__DOT__memInst__DOT__pmem_read__3__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ Top__DOT__decoder__DOT__imm;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

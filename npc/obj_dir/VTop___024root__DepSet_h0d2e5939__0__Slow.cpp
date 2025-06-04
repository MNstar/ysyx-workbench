// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/tianyi/ysyx/ysyx-workbench/npc/build/Top.sv", 587, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VTop___024root____Vdpiimwrap_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->Top__DOT__registers__DOT___GEN[0U] = vlSelf->Top__DOT__registers__DOT__regs_0;
    vlSelf->Top__DOT__registers__DOT___GEN[1U] = vlSelf->Top__DOT__registers__DOT__regs_1;
    vlSelf->Top__DOT__registers__DOT___GEN[2U] = vlSelf->Top__DOT__registers__DOT__regs_2;
    vlSelf->Top__DOT__registers__DOT___GEN[3U] = vlSelf->Top__DOT__registers__DOT__regs_3;
    vlSelf->Top__DOT__registers__DOT___GEN[4U] = vlSelf->Top__DOT__registers__DOT__regs_4;
    vlSelf->Top__DOT__registers__DOT___GEN[5U] = vlSelf->Top__DOT__registers__DOT__regs_5;
    vlSelf->Top__DOT__registers__DOT___GEN[6U] = vlSelf->Top__DOT__registers__DOT__regs_6;
    vlSelf->Top__DOT__registers__DOT___GEN[7U] = vlSelf->Top__DOT__registers__DOT__regs_7;
    vlSelf->Top__DOT__registers__DOT___GEN[8U] = vlSelf->Top__DOT__registers__DOT__regs_8;
    vlSelf->Top__DOT__registers__DOT___GEN[9U] = vlSelf->Top__DOT__registers__DOT__regs_9;
    vlSelf->Top__DOT__registers__DOT___GEN[0xaU] = vlSelf->Top__DOT__registers__DOT__regs_10;
    vlSelf->Top__DOT__registers__DOT___GEN[0xbU] = vlSelf->Top__DOT__registers__DOT__regs_11;
    vlSelf->Top__DOT__registers__DOT___GEN[0xcU] = vlSelf->Top__DOT__registers__DOT__regs_12;
    vlSelf->Top__DOT__registers__DOT___GEN[0xdU] = vlSelf->Top__DOT__registers__DOT__regs_13;
    vlSelf->Top__DOT__registers__DOT___GEN[0xeU] = vlSelf->Top__DOT__registers__DOT__regs_14;
    vlSelf->Top__DOT__registers__DOT___GEN[0xfU] = vlSelf->Top__DOT__registers__DOT__regs_15;
    vlSelf->Top__DOT__registers__DOT___GEN[0x10U] = vlSelf->Top__DOT__registers__DOT__regs_16;
    vlSelf->Top__DOT__registers__DOT___GEN[0x11U] = vlSelf->Top__DOT__registers__DOT__regs_17;
    vlSelf->Top__DOT__registers__DOT___GEN[0x12U] = vlSelf->Top__DOT__registers__DOT__regs_18;
    vlSelf->Top__DOT__registers__DOT___GEN[0x13U] = vlSelf->Top__DOT__registers__DOT__regs_19;
    vlSelf->Top__DOT__registers__DOT___GEN[0x14U] = vlSelf->Top__DOT__registers__DOT__regs_20;
    vlSelf->Top__DOT__registers__DOT___GEN[0x15U] = vlSelf->Top__DOT__registers__DOT__regs_21;
    vlSelf->Top__DOT__registers__DOT___GEN[0x16U] = vlSelf->Top__DOT__registers__DOT__regs_22;
    vlSelf->Top__DOT__registers__DOT___GEN[0x17U] = vlSelf->Top__DOT__registers__DOT__regs_23;
    vlSelf->Top__DOT__registers__DOT___GEN[0x18U] = vlSelf->Top__DOT__registers__DOT__regs_24;
    vlSelf->Top__DOT__registers__DOT___GEN[0x19U] = vlSelf->Top__DOT__registers__DOT__regs_25;
    vlSelf->Top__DOT__registers__DOT___GEN[0x1aU] = vlSelf->Top__DOT__registers__DOT__regs_26;
    vlSelf->Top__DOT__registers__DOT___GEN[0x1bU] = vlSelf->Top__DOT__registers__DOT__regs_27;
    vlSelf->Top__DOT__registers__DOT___GEN[0x1cU] = vlSelf->Top__DOT__registers__DOT__regs_28;
    vlSelf->Top__DOT__registers__DOT___GEN[0x1dU] = vlSelf->Top__DOT__registers__DOT__regs_29;
    vlSelf->Top__DOT__registers__DOT___GEN[0x1eU] = (IData)(
                                                            (((QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_31)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_30))));
    vlSelf->Top__DOT__registers__DOT___GEN[0x1fU] = (IData)(
                                                            ((((QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_31)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_30))) 
                                                             >> 0x20U));
    vlSelf->io_pc = vlSelf->Top__DOT__pcReg__DOT__regPC;
    if (vlSelf->reset) {
        vlSelf->Top__DOT___memInst_inst = 0U;
    } else {
        VTop___024root____Vdpiimwrap_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read_TOP(vlSelf->io_pc, 4U, vlSelf->__Vfunc_Top__DOT__memInst__DOT__pmem_read__3__Vfuncout);
        vlSelf->Top__DOT___memInst_inst = vlSelf->__Vfunc_Top__DOT__memInst__DOT__pmem_read__3__Vfuncout;
    }
    vlSelf->Top__DOT___registers_io_dataRead1 = ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT___memInst_inst 
                                                      >> 0xfU)))
                                                  ? 0U
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (vlSelf->Top__DOT___memInst_inst 
                                                                         >> 0xfU)), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->Top__DOT__registers__DOT___GEN[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,10,32, 
                                                                       (0x1fU 
                                                                        & (vlSelf->Top__DOT___memInst_inst 
                                                                           >> 0xfU)), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x1fU 
                                                                       & (vlSelf->Top__DOT___memInst_inst 
                                                                          >> 0xfU)), 5U))))) 
                                                  | (vlSelf->Top__DOT__registers__DOT___GEN[
                                                     (0x1fU 
                                                      & (VL_SHIFTL_III(10,10,32, 
                                                                       (0x1fU 
                                                                        & (vlSelf->Top__DOT___memInst_inst 
                                                                           >> 0xfU)), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x1fU 
                                                                       & (vlSelf->Top__DOT___memInst_inst 
                                                                          >> 0xfU)), 5U)))));
    vlSelf->Top__DOT___registers_io_dataRead2 = ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT___memInst_inst 
                                                      >> 0x14U)))
                                                  ? 0U
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (vlSelf->Top__DOT___memInst_inst 
                                                                         >> 0x14U)), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->Top__DOT__registers__DOT___GEN[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,10,32, 
                                                                       (0x1fU 
                                                                        & (vlSelf->Top__DOT___memInst_inst 
                                                                           >> 0x14U)), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x1fU 
                                                                       & (vlSelf->Top__DOT___memInst_inst 
                                                                          >> 0x14U)), 5U))))) 
                                                  | (vlSelf->Top__DOT__registers__DOT___GEN[
                                                     (0x1fU 
                                                      & (VL_SHIFTL_III(10,10,32, 
                                                                       (0x1fU 
                                                                        & (vlSelf->Top__DOT___memInst_inst 
                                                                           >> 0x14U)), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x1fU 
                                                                       & (vlSelf->Top__DOT___memInst_inst 
                                                                          >> 0x14U)), 5U)))));
    vlSelf->Top__DOT__decoder__DOT___GEN_4 = ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->Top__DOT___memInst_inst)) 
                                              | (0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT___memInst_inst)));
    vlSelf->Top__DOT__decoder__DOT___GEN = ((0x380U 
                                             & (vlSelf->Top__DOT___memInst_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Top__DOT___memInst_inst));
    vlSelf->Top__DOT__decoder__DOT___GEN_1 = ((0x123U 
                                               == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                              | ((0x23U 
                                                  == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                 | (0xa3U 
                                                    == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))));
    vlSelf->Top__DOT__decoder__DOT___GEN_0 = ((0x63U 
                                               == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                              | (0xe3U 
                                                 == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)));
    vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184 
        = (0x8033U == ((0x1fc00U & (vlSelf->Top__DOT___memInst_inst 
                                    >> 0xfU)) | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)));
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h56f4da47__0 
        = ((0x103U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
           | ((0x83U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
              | (0x203U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))));
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h564ccae5__0 
        = ((0x13U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
           | ((0x6fU == (0x7fU & vlSelf->Top__DOT___memInst_inst)) 
              | (0x67U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))));
    vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_17 
        = (0x93U == ((0xfc00U & (vlSelf->Top__DOT___memInst_inst 
                                 >> 0x10U)) | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)));
    vlSelf->Top__DOT__decoder__DOT___GEN_6 = ((IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h56f4da47__0) 
                                              | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_1));
    vlSelf->Top__DOT__decoder__DOT___GEN_7 = ((IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h564ccae5__0) 
                                              | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_4));
    vlSelf->Top__DOT__decoder__DOT___GEN_5 = ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->Top__DOT___memInst_inst)) 
                                              | ((0x100073U 
                                                  == vlSelf->Top__DOT___memInst_inst) 
                                                 | ((0x1bU 
                                                     == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                    | ((0x193U 
                                                        == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                       | ((IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_17) 
                                                          | ((0x393U 
                                                              == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                             | ((0x103U 
                                                                 == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                                | ((0x83U 
                                                                    == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                                   | ((0x203U 
                                                                       == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                                      | ((0x123U 
                                                                          == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                                         | ((0x23U 
                                                                             == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                                            | ((0xa3U 
                                                                                == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                                                               | (IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184)))))))))))));
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h43af6520__0 
        = ((0x193U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
           | ((IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_17) 
              | (0x393U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))));
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_he3a9266f__0 
        = ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_7) 
           | ((0x100073U == vlSelf->Top__DOT___memInst_inst) 
              | (0x1bU == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))));
    vlSelf->Top__DOT__decoder__DOT___GEN_9 = ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->Top__DOT___memInst_inst)) 
                                              | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_5));
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_hb138e90e__0 
        = ((0x1bU == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
           | (IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h43af6520__0));
    vlSelf->Top__DOT___decoder_io_bundleAluOPData_option 
        = ((IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_he3a9266f__0)
            ? 1U : ((0x193U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                     ? 3U : ((IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_17)
                              ? 4U : ((0x393U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                                       ? 5U : ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_6)
                                                ? 1U
                                                : ((IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184)
                                                    ? 2U
                                                    : (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_0)))))));
    vlSelf->Top__DOT__decoder__DOT___GEN_10 = ((IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_he3a9266f__0) 
                                               | (IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h43af6520__0));
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_1 = 
        ((0x13U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
          ? 2U : ((0x6fU == (0x7fU & vlSelf->Top__DOT___memInst_inst))
                   ? 1U : ((0x67U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                            ? 2U : ((0x17U == (0x7fU 
                                               & vlSelf->Top__DOT___memInst_inst))
                                     ? 1U : ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_5)
                                              ? 2U : (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_0))))));
    vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1 
        = ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_1))
            ? vlSelf->Top__DOT__pcReg__DOT__regPC : 
           ((2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_1))
             ? vlSelf->Top__DOT___registers_io_dataRead1
             : 0U));
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_10 
        = (((IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h564ccae5__0) 
            | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_9))
            ? 0U : ((0x63U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                     ? 1U : ((0xe3U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                             << 1U)));
    vlSelf->Top__DOT___decoder_io_bundleRegDataControl_ctrlJump 
        = ((0x13U != (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
           & ((0x6fU == (0x7fU & vlSelf->Top__DOT___memInst_inst)) 
              | ((0x67U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                 | ((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_9)) 
                    & (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_0)))));
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_2 = 
        ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_7)
          ? 1U : ((0x100073U == vlSelf->Top__DOT___memInst_inst)
                   ? 2U : (((IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_hb138e90e__0) 
                            | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_6))
                            ? 1U : ((IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184)
                                     ? 2U : (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_0)))));
    vlSelf->Top__DOT__decoder__DOT___GEN_2 = ((IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_hb138e90e__0) 
                                              | (IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h56f4da47__0));
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_9 = 
        ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_10)
          ? 0U : ((0x103U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                   ? 3U : ((0x83U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                            ? 2U : (0x203U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)))));
    vlSelf->Top__DOT___decoder_io_bundleMemDataControl_ctrlLoad 
        = ((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_10)) 
           & (IData)(vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h56f4da47__0));
    vlSelf->Top__DOT___decoder_io_bg = ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_10))
                                         ? (1U | ((vlSelf->Top__DOT___registers_io_dataRead1 
                                                   == vlSelf->Top__DOT___registers_io_dataRead2) 
                                                  << 1U))
                                         : ((2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_10))
                                             ? (1U 
                                                | ((vlSelf->Top__DOT___registers_io_dataRead1 
                                                    != vlSelf->Top__DOT___registers_io_dataRead2) 
                                                   << 1U))
                                             : 0U));
    vlSelf->Top__DOT__decoder__DOT___GEN_3 = ((0x100073U 
                                               == vlSelf->Top__DOT___memInst_inst) 
                                              | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_2));
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0 = 
        ((0x13U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
          ? 1U : ((0x6fU == (0x7fU & vlSelf->Top__DOT___memInst_inst))
                   ? 4U : ((0x67U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                            ? 1U : ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_4)
                                     ? 3U : ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_3)
                                              ? 1U : 
                                             ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_1)
                                               ? 2U
                                               : ((1U 
                                                   & ((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_0)) 
                                                      | (IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184)))
                                                   ? 0U
                                                   : 5U)))))));
    vlSelf->Top__DOT__decoder__DOT___GEN_8 = ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_7) 
                                              | (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_3));
    vlSelf->Top__DOT__decoder__DOT__imm = ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0))
                                            ? (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & (- (IData)(
                                                                              (vlSelf->Top__DOT___memInst_inst 
                                                                               >> 0x1fU)))))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->Top__DOT___memInst_inst 
                                                                  >> 0x14U))))
                                            : ((2U 
                                                == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0xfffffU 
                                                                     & (- (IData)(
                                                                                (vlSelf->Top__DOT___memInst_inst 
                                                                                >> 0x1fU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->Top__DOT___memInst_inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->Top__DOT___memInst_inst 
                                                                            >> 7U))))))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0))
                                                    ? (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->Top__DOT___memInst_inst)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (0x1fffU 
                                                                       & (- (IData)(
                                                                                (vlSelf->Top__DOT___memInst_inst 
                                                                                >> 0x1fU)))))) 
                                                      << 0x14U) 
                                                     | (QData)((IData)(
                                                                       ((0xff000U 
                                                                         & vlSelf->Top__DOT___memInst_inst) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->Top__DOT___memInst_inst 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->Top__DOT___memInst_inst 
                                                                                >> 0x14U)))))))
                                                     : (QData)((IData)(
                                                                       ((5U 
                                                                         == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (vlSelf->Top__DOT___memInst_inst 
                                                                                >> 0x1fU))) 
                                                                          << 0xcU) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->Top__DOT___memInst_inst 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->Top__DOT___memInst_inst 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->Top__DOT___memInst_inst 
                                                                                >> 7U)))))
                                                                         : 0U)))))));
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_3 = 
        ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_8)
          ? 0U : ((0x123U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                   ? 3U : ((0x23U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))
                            ? 1U : ((0xa3U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN)) 
                                    << 1U))));
    vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2 
        = ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_2))
            ? (IData)(vlSelf->Top__DOT__decoder__DOT__imm)
            : ((2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_2))
                ? vlSelf->Top__DOT___registers_io_dataRead2
                : 0U));
    vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize 
        = ((((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_8)) 
             & (0x123U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))) 
            | ((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_10)) 
               & (0x103U == (IData)(vlSelf->Top__DOT__decoder__DOT___GEN))))
            ? 4U : (((2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_3)) 
                     | (2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_9)))
                     ? 2U : ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_3)) 
                             | (1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_9)))));
    vlSelf->Top__DOT___alu_io_resultAlu = ((1U == (IData)(vlSelf->Top__DOT___decoder_io_bundleAluOPData_option))
                                            ? (vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1 
                                               + vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2)
                                            : ((2U 
                                                == (IData)(vlSelf->Top__DOT___decoder_io_bundleAluOPData_option))
                                                ? (vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1 
                                                   - vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->Top__DOT___decoder_io_bundleAluOPData_option))
                                                    ? 
                                                   (vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1 
                                                    < vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Top__DOT___decoder_io_bundleAluOPData_option))
                                                     ? 
                                                    VL_SHIFTL_III(32,32,6, vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1, 
                                                                  (0x3fU 
                                                                   & vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->Top__DOT___decoder_io_bundleAluOPData_option))
                                                      ? 
                                                     (vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1 
                                                      & vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2)
                                                      : 0U)))));
    if (vlSelf->Top__DOT___decoder_io_bundleMemDataControl_ctrlLoad) {
        vlSelf->io_rdata = ((1U == vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize)
                             ? (((- (IData)((1U & (vlSelf->Top__DOT__mem__DOT___dpi_box_rdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->Top__DOT__mem__DOT___dpi_box_rdata))
                             : ((2U == vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize)
                                 ? (((- (IData)((1U 
                                                 & (vlSelf->Top__DOT__mem__DOT___dpi_box_rdata 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->Top__DOT__mem__DOT___dpi_box_rdata))
                                 : ((4U == vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize)
                                     ? vlSelf->Top__DOT__mem__DOT___dpi_box_rdata
                                     : 0U)));
        vlSelf->Top__DOT__registers__DOT___regs_T_6 
            = vlSelf->io_rdata;
    } else {
        vlSelf->io_rdata = 0U;
        vlSelf->Top__DOT__registers__DOT___regs_T_6 
            = ((((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_7) 
                 | ((0x100073U != vlSelf->Top__DOT___memInst_inst) 
                    & ((IData)(vlSelf->Top__DOT__decoder__DOT___GEN_2) 
                       | ((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_1)) 
                          & (IData)(vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184))))) 
                & (0U != (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                   >> 7U)))) ? ((IData)(vlSelf->Top__DOT___decoder_io_bundleRegDataControl_ctrlJump)
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->Top__DOT__pcReg__DOT__regPC)
                                                 : vlSelf->Top__DOT___alu_io_resultAlu)
                : 0U);
    }
}

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);

VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_rdata = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___memInst_inst = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___alu_io_resultAlu = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___registers_io_dataRead1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___registers_io_dataRead2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___decoder_io_bg = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT___decoder_io_bundleMemDataControl_ctrlLoad = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___decoder_io_bundleRegDataControl_ctrlJump = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___decoder_io_bundleAluOPData_oprand2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___decoder_io_bundleAluOPData_option = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__pcReg__DOT__regPC = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__decoder__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_17 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___ctrlsignals_T_184 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_0 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_1 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__decoder__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_2 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__decoder__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_3 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__decoder__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_9 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__decoder__DOT__ctrlsignals_10 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__decoder__DOT__imm = VL_RAND_RESET_Q(33);
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h56f4da47__0 = 0;
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_he3a9266f__0 = 0;
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_hb138e90e__0 = 0;
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h564ccae5__0 = 0;
    vlSelf->Top__DOT__decoder__DOT____VdfgTmp_h43af6520__0 = 0;
    vlSelf->Top__DOT__registers__DOT__regs_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_3 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_4 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_5 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_6 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_7 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_8 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_9 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_10 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_11 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_12 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_13 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_14 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_15 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_16 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_17 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_18 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_19 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_20 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_21 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_22 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_23 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_24 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_25 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_26 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_27 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_28 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_29 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_30 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__registers__DOT__regs_31 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->Top__DOT__registers__DOT___GEN);
    vlSelf->Top__DOT__registers__DOT___regs_T_6 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__mem__DOT___dpi_box_rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_Top__DOT__memInst__DOT__pmem_read__3__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

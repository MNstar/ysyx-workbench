// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

void VTop___024root____Vdpiimwrap_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    // Body
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

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
}

void VTop___024root____Vdpiimwrap_Top__DOT__decoder__DOT__dpi_box__DOT__npc_trap_TOP();
void VTop___024root____Vdpiimwrap_Top__DOT__mem__DOT__dpi_box__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ redata);

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read__1__Vfuncout;
    __Vfunc_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read__1__Vfuncout = 0;
    // Body
    if (((1ULL == vlSelf->Top__DOT__decoder__DOT__imm) 
         & (2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ctrlsignals_2)))) {
        VTop___024root____Vdpiimwrap_Top__DOT__decoder__DOT__dpi_box__DOT__npc_trap_TOP();
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"len = %10#\nrdata = %x\npaddr = %x\nctrlLoad = %x\nctrlStore = %x\n",
                   32,vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize,
                   32,vlSelf->Top__DOT__mem__DOT___dpi_box_rdata,
                   32,vlSelf->Top__DOT___alu_io_resultAlu,
                   1,(IData)(vlSelf->Top__DOT___decoder_io_bundleMemDataControl_ctrlLoad),
                   1,((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_8)) 
                      & (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_1)));
    }
    if (VL_UNLIKELY(vlSelf->Top__DOT___decoder_io_bundleMemDataControl_ctrlLoad)) {
        VL_WRITEF("ve_paddr: %x\n\nve_len  : %x\n\n",
                  32,vlSelf->Top__DOT___alu_io_resultAlu,
                  32,vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize);
        VTop___024root____Vdpiimwrap_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read_TOP(vlSelf->Top__DOT___alu_io_resultAlu, vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize, __Vfunc_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read__1__Vfuncout);
        vlSelf->Top__DOT__mem__DOT___dpi_box_rdata 
            = __Vfunc_Top__DOT__mem__DOT__dpi_box__DOT__pmem_read__1__Vfuncout;
        VL_WRITEF("ve_rdata: %x\n\n",32,vlSelf->Top__DOT__mem__DOT___dpi_box_rdata);
    }
    if (((~ (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_8)) 
         & (IData)(vlSelf->Top__DOT__decoder__DOT___GEN_1))) {
        VTop___024root____Vdpiimwrap_Top__DOT__mem__DOT__dpi_box__DOT__pmem_write_TOP(vlSelf->Top__DOT___alu_io_resultAlu, vlSelf->Top__DOT___decoder_io_bundleMemDataControl_memSize, vlSelf->Top__DOT___registers_io_dataRead2);
    }
    if (vlSelf->reset) {
        vlSelf->Top__DOT__pcReg__DOT__regPC = 0x80000000U;
        vlSelf->io_pc = vlSelf->Top__DOT__pcReg__DOT__regPC;
        vlSelf->Top__DOT__registers__DOT__regs_27 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_26 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_25 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_24 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_23 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_22 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_21 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_20 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_19 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_18 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_17 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_16 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_15 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_14 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_13 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_12 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_8 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_0 = 0U;
        vlSelf->Top__DOT__registers__DOT___GEN[0U] 
            = vlSelf->Top__DOT__registers__DOT__regs_0;
        vlSelf->Top__DOT__registers__DOT__regs_2 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_4 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_1 = 0U;
        vlSelf->Top__DOT__registers__DOT___GEN[1U] 
            = vlSelf->Top__DOT__registers__DOT__regs_1;
        vlSelf->Top__DOT__registers__DOT___GEN[2U] 
            = vlSelf->Top__DOT__registers__DOT__regs_2;
        vlSelf->Top__DOT__registers__DOT__regs_5 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_6 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_3 = 0U;
        vlSelf->Top__DOT__registers__DOT___GEN[3U] 
            = vlSelf->Top__DOT__registers__DOT__regs_3;
        vlSelf->Top__DOT__registers__DOT___GEN[4U] 
            = vlSelf->Top__DOT__registers__DOT__regs_4;
        vlSelf->Top__DOT__registers__DOT___GEN[5U] 
            = vlSelf->Top__DOT__registers__DOT__regs_5;
        vlSelf->Top__DOT__registers__DOT___GEN[6U] 
            = vlSelf->Top__DOT__registers__DOT__regs_6;
        vlSelf->Top__DOT__registers__DOT__regs_9 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_10 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_7 = 0U;
        vlSelf->Top__DOT__registers__DOT___GEN[7U] 
            = vlSelf->Top__DOT__registers__DOT__regs_7;
        vlSelf->Top__DOT__registers__DOT___GEN[8U] 
            = vlSelf->Top__DOT__registers__DOT__regs_8;
        vlSelf->Top__DOT__registers__DOT___GEN[9U] 
            = vlSelf->Top__DOT__registers__DOT__regs_9;
        vlSelf->Top__DOT__registers__DOT___GEN[0xaU] 
            = vlSelf->Top__DOT__registers__DOT__regs_10;
        vlSelf->Top__DOT__registers__DOT__regs_11 = 0U;
        vlSelf->Top__DOT__registers__DOT___GEN[0xbU] 
            = vlSelf->Top__DOT__registers__DOT__regs_11;
        vlSelf->Top__DOT__registers__DOT___GEN[0xcU] 
            = vlSelf->Top__DOT__registers__DOT__regs_12;
        vlSelf->Top__DOT__registers__DOT___GEN[0xdU] 
            = vlSelf->Top__DOT__registers__DOT__regs_13;
        vlSelf->Top__DOT__registers__DOT___GEN[0xeU] 
            = vlSelf->Top__DOT__registers__DOT__regs_14;
        vlSelf->Top__DOT__registers__DOT___GEN[0xfU] 
            = vlSelf->Top__DOT__registers__DOT__regs_15;
        vlSelf->Top__DOT__registers__DOT___GEN[0x10U] 
            = vlSelf->Top__DOT__registers__DOT__regs_16;
        vlSelf->Top__DOT__registers__DOT___GEN[0x11U] 
            = vlSelf->Top__DOT__registers__DOT__regs_17;
        vlSelf->Top__DOT__registers__DOT___GEN[0x12U] 
            = vlSelf->Top__DOT__registers__DOT__regs_18;
        vlSelf->Top__DOT__registers__DOT___GEN[0x13U] 
            = vlSelf->Top__DOT__registers__DOT__regs_19;
        vlSelf->Top__DOT__registers__DOT___GEN[0x14U] 
            = vlSelf->Top__DOT__registers__DOT__regs_20;
        vlSelf->Top__DOT__registers__DOT___GEN[0x15U] 
            = vlSelf->Top__DOT__registers__DOT__regs_21;
        vlSelf->Top__DOT__registers__DOT___GEN[0x16U] 
            = vlSelf->Top__DOT__registers__DOT__regs_22;
        vlSelf->Top__DOT__registers__DOT___GEN[0x17U] 
            = vlSelf->Top__DOT__registers__DOT__regs_23;
        vlSelf->Top__DOT__registers__DOT___GEN[0x18U] 
            = vlSelf->Top__DOT__registers__DOT__regs_24;
        vlSelf->Top__DOT__registers__DOT___GEN[0x19U] 
            = vlSelf->Top__DOT__registers__DOT__regs_25;
        vlSelf->Top__DOT__registers__DOT___GEN[0x1aU] 
            = vlSelf->Top__DOT__registers__DOT__regs_26;
        vlSelf->Top__DOT__registers__DOT___GEN[0x1bU] 
            = vlSelf->Top__DOT__registers__DOT__regs_27;
        vlSelf->Top__DOT__registers__DOT__regs_28 = 0U;
        vlSelf->Top__DOT__registers__DOT___GEN[0x1cU] 
            = vlSelf->Top__DOT__registers__DOT__regs_28;
        vlSelf->Top__DOT__registers__DOT__regs_29 = 0U;
        vlSelf->Top__DOT__registers__DOT___GEN[0x1dU] 
            = vlSelf->Top__DOT__registers__DOT__regs_29;
        vlSelf->Top__DOT__registers__DOT__regs_30 = 0U;
        vlSelf->Top__DOT__registers__DOT__regs_31 = 0U;
    } else {
        vlSelf->Top__DOT__pcReg__DOT__regPC = (((IData)(vlSelf->Top__DOT___decoder_io_bundleRegDataControl_ctrlJump) 
                                                & (IData)(
                                                          (1U 
                                                           != (IData)(vlSelf->Top__DOT___decoder_io_bg))))
                                                ? vlSelf->Top__DOT___alu_io_resultAlu
                                                : ((IData)(4U) 
                                                   + vlSelf->Top__DOT__pcReg__DOT__regPC));
        vlSelf->io_pc = vlSelf->Top__DOT__pcReg__DOT__regPC;
        if ((0x1bU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_27 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x1aU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_26 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x19U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_25 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x18U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_24 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x17U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_23 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x16U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_22 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x15U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_21 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x14U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_20 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x13U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_19 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x12U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_18 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x11U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_17 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x10U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_16 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0xfU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                               >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_15 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0xeU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                               >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_14 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0xdU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                               >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_13 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0xcU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                               >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_12 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((8U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_8 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_0 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        vlSelf->Top__DOT__registers__DOT___GEN[0U] 
            = vlSelf->Top__DOT__registers__DOT__regs_0;
        if ((2U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_2 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((4U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_4 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((1U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_1 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        vlSelf->Top__DOT__registers__DOT___GEN[1U] 
            = vlSelf->Top__DOT__registers__DOT__regs_1;
        vlSelf->Top__DOT__registers__DOT___GEN[2U] 
            = vlSelf->Top__DOT__registers__DOT__regs_2;
        if ((5U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_5 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((6U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_6 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((3U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_3 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        vlSelf->Top__DOT__registers__DOT___GEN[3U] 
            = vlSelf->Top__DOT__registers__DOT__regs_3;
        vlSelf->Top__DOT__registers__DOT___GEN[4U] 
            = vlSelf->Top__DOT__registers__DOT__regs_4;
        vlSelf->Top__DOT__registers__DOT___GEN[5U] 
            = vlSelf->Top__DOT__registers__DOT__regs_5;
        vlSelf->Top__DOT__registers__DOT___GEN[6U] 
            = vlSelf->Top__DOT__registers__DOT__regs_6;
        if ((9U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_9 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0xaU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                               >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_10 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((7U == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                             >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_7 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        vlSelf->Top__DOT__registers__DOT___GEN[7U] 
            = vlSelf->Top__DOT__registers__DOT__regs_7;
        vlSelf->Top__DOT__registers__DOT___GEN[8U] 
            = vlSelf->Top__DOT__registers__DOT__regs_8;
        vlSelf->Top__DOT__registers__DOT___GEN[9U] 
            = vlSelf->Top__DOT__registers__DOT__regs_9;
        vlSelf->Top__DOT__registers__DOT___GEN[0xaU] 
            = vlSelf->Top__DOT__registers__DOT__regs_10;
        if ((0xbU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                               >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_11 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        vlSelf->Top__DOT__registers__DOT___GEN[0xbU] 
            = vlSelf->Top__DOT__registers__DOT__regs_11;
        vlSelf->Top__DOT__registers__DOT___GEN[0xcU] 
            = vlSelf->Top__DOT__registers__DOT__regs_12;
        vlSelf->Top__DOT__registers__DOT___GEN[0xdU] 
            = vlSelf->Top__DOT__registers__DOT__regs_13;
        vlSelf->Top__DOT__registers__DOT___GEN[0xeU] 
            = vlSelf->Top__DOT__registers__DOT__regs_14;
        vlSelf->Top__DOT__registers__DOT___GEN[0xfU] 
            = vlSelf->Top__DOT__registers__DOT__regs_15;
        vlSelf->Top__DOT__registers__DOT___GEN[0x10U] 
            = vlSelf->Top__DOT__registers__DOT__regs_16;
        vlSelf->Top__DOT__registers__DOT___GEN[0x11U] 
            = vlSelf->Top__DOT__registers__DOT__regs_17;
        vlSelf->Top__DOT__registers__DOT___GEN[0x12U] 
            = vlSelf->Top__DOT__registers__DOT__regs_18;
        vlSelf->Top__DOT__registers__DOT___GEN[0x13U] 
            = vlSelf->Top__DOT__registers__DOT__regs_19;
        vlSelf->Top__DOT__registers__DOT___GEN[0x14U] 
            = vlSelf->Top__DOT__registers__DOT__regs_20;
        vlSelf->Top__DOT__registers__DOT___GEN[0x15U] 
            = vlSelf->Top__DOT__registers__DOT__regs_21;
        vlSelf->Top__DOT__registers__DOT___GEN[0x16U] 
            = vlSelf->Top__DOT__registers__DOT__regs_22;
        vlSelf->Top__DOT__registers__DOT___GEN[0x17U] 
            = vlSelf->Top__DOT__registers__DOT__regs_23;
        vlSelf->Top__DOT__registers__DOT___GEN[0x18U] 
            = vlSelf->Top__DOT__registers__DOT__regs_24;
        vlSelf->Top__DOT__registers__DOT___GEN[0x19U] 
            = vlSelf->Top__DOT__registers__DOT__regs_25;
        vlSelf->Top__DOT__registers__DOT___GEN[0x1aU] 
            = vlSelf->Top__DOT__registers__DOT__regs_26;
        vlSelf->Top__DOT__registers__DOT___GEN[0x1bU] 
            = vlSelf->Top__DOT__registers__DOT__regs_27;
        if ((0x1cU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_28 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        vlSelf->Top__DOT__registers__DOT___GEN[0x1cU] 
            = vlSelf->Top__DOT__registers__DOT__regs_28;
        if ((0x1dU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_29 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        vlSelf->Top__DOT__registers__DOT___GEN[0x1dU] 
            = vlSelf->Top__DOT__registers__DOT__regs_29;
        if ((0x1eU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_30 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
        if ((0x1fU == (0x1fU & (vlSelf->Top__DOT___memInst_inst 
                                >> 7U)))) {
            vlSelf->Top__DOT__registers__DOT__regs_31 
                = vlSelf->Top__DOT__registers__DOT___regs_T_6;
        }
    }
    vlSelf->Top__DOT__registers__DOT___GEN[0x1eU] = (IData)(
                                                            (((QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_31)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_30))));
    vlSelf->Top__DOT__registers__DOT___GEN[0x1fU] = (IData)(
                                                            ((((QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_31)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->Top__DOT__registers__DOT__regs_30))) 
                                                             >> 0x20U));
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

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/tianyi/ysyx/ysyx-workbench/npc/build/Top.sv", 587, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/tianyi/ysyx/ysyx-workbench/npc/build/Top.sv", 587, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/tianyi/ysyx/ysyx-workbench/npc/build/Top.sv", 587, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

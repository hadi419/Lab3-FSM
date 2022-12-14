// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfullF1Light__Syms.h"


void VfullF1Light___024root__trace_chg_sub_0(VfullF1Light___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VfullF1Light___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_chg_top_0\n"); );
    // Init
    VfullF1Light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullF1Light___024root*>(voidSelf);
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VfullF1Light___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VfullF1Light___024root__trace_chg_sub_0(VfullF1Light___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((0U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                              & ((1U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                                 & (2U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)))));
        bufp->chgCData(oldp+1,(vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg),7);
        bufp->chgCData(oldp+2,(vlSelf->fullF1Light__DOT__myDelay__DOT__count),7);
        bufp->chgIData(oldp+3,(vlSelf->fullF1Light__DOT__myDelay__DOT__current_state),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+4,((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)));
        bufp->chgBit(oldp+5,((8U != vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)));
        bufp->chgBit(oldp+6,(vlSelf->fullF1Light__DOT__tick));
        bufp->chgCData(oldp+7,(vlSelf->fullF1Light__DOT__myClktick__DOT__count),6);
        bufp->chgIData(oldp+8,(vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state),32);
        bufp->chgIData(oldp+9,((((((((((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state) 
                                       | (1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                      | (2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                     | (3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                    | (4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                   | (5U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                  | (6U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                 | (7U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state))
                                 ? ((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                     ? 1U : ((1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                              ? 2U : 
                                             ((2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                      ? 7U
                                                      : 8U)))))))
                                 : 0U)),32);
    }
    bufp->chgBit(oldp+10,(vlSelf->clk));
    bufp->chgBit(oldp+11,(vlSelf->rst));
    bufp->chgBit(oldp+12,(vlSelf->trigger));
    bufp->chgCData(oldp+13,(vlSelf->data_out),8);
    bufp->chgBit(oldp+14,(((8U != vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                            ? (IData)(vlSelf->fullF1Light__DOT__tick)
                            : ((0U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                               & ((1U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                                  & (2U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state))))));
    bufp->chgIData(oldp+15,(((0U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                              ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                  ? 1U : vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                              : ((1U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->fullF1Light__DOT__myDelay__DOT__count))
                                      ? 2U : vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                  : ((2U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                      ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                          ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                              ? vlSelf->fullF1Light__DOT__myDelay__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
}

void VfullF1Light___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_cleanup\n"); );
    // Init
    VfullF1Light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullF1Light___024root*>(voidSelf);
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

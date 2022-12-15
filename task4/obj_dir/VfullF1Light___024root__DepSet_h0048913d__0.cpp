// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfullF1Light.h for the primary calling header

#include "verilated.h"

#include "VfullF1Light___024root.h"

VL_INLINE_OPT void VfullF1Light___024root___sequent__TOP__0(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__fullF1Light__DOT__my_lfsr__DOT__sreg 
        = vlSelf->fullF1Light__DOT__my_lfsr__DOT__sreg;
    vlSelf->__Vdly__fullF1Light__DOT__my_lfsr__DOT__sreg 
        = ((0x7eU & ((IData)(vlSelf->fullF1Light__DOT__my_lfsr__DOT__sreg) 
                     << 1U)) | (1U & VL_REDXOR_8((0x44U 
                                                  & (IData)(vlSelf->fullF1Light__DOT__my_lfsr__DOT__sreg)))));
}

VL_INLINE_OPT void VfullF1Light___024root___sequent__TOP__1(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___sequent__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vdly__fullF1Light__DOT__myClktick__DOT__count;
    // Body
    __Vdly__fullF1Light__DOT__myClktick__DOT__count 
        = vlSelf->fullF1Light__DOT__myClktick__DOT__count;
    vlSelf->fullF1Light__DOT__my_delay__DOT__count 
        = (0x7fU & ((((IData)(vlSelf->rst) | (8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                     | (0U == (IData)(vlSelf->fullF1Light__DOT__my_delay__DOT__count)))
                     ? ((IData)(vlSelf->fullF1Light__DOT__my_lfsr__DOT__sreg) 
                        - (IData)(1U)) : ((IData)(vlSelf->fullF1Light__DOT__my_delay__DOT__count) 
                                          - (IData)(1U))));
    if (vlSelf->rst) {
        vlSelf->fullF1Light__DOT__my_delay__DOT__current_state = 0U;
        vlSelf->fullF1Light__DOT__tick = 0U;
        __Vdly__fullF1Light__DOT__myClktick__DOT__count = 0x35U;
        vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state = 0U;
    } else {
        vlSelf->fullF1Light__DOT__my_delay__DOT__current_state 
            = vlSelf->fullF1Light__DOT__my_delay__DOT__next_state;
        if ((8U != vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            if ((0U == (IData)(vlSelf->fullF1Light__DOT__myClktick__DOT__count))) {
                vlSelf->fullF1Light__DOT__tick = 1U;
                __Vdly__fullF1Light__DOT__myClktick__DOT__count = 0x35U;
            } else {
                __Vdly__fullF1Light__DOT__myClktick__DOT__count 
                    = (0x3fU & ((IData)(vlSelf->fullF1Light__DOT__myClktick__DOT__count) 
                                - (IData)(1U)));
                vlSelf->fullF1Light__DOT__tick = 0U;
            }
        }
        if (vlSelf->fullF1Light__DOT__en) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state 
                = vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state;
        }
    }
    vlSelf->fullF1Light__DOT__myClktick__DOT__count 
        = __Vdly__fullF1Light__DOT__myClktick__DOT__count;
    vlSelf->data_out = (((((((((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state) 
                               | (1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                              | (2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                             | (3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                            | (4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                           | (5U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                          | (6U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                         | (7U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state))
                         ? ((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                             ? 0U : ((1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                      ? 1U : ((2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                         : ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                             ? 0xffU : 0U));
    vlSelf->fullF1Light__DOT__en = ((8U != vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                     ? (IData)(vlSelf->fullF1Light__DOT__tick)
                                     : ((0U != vlSelf->fullF1Light__DOT__my_delay__DOT__current_state) 
                                        & ((1U != vlSelf->fullF1Light__DOT__my_delay__DOT__current_state) 
                                           & (2U == vlSelf->fullF1Light__DOT__my_delay__DOT__current_state))));
    vlSelf->fullF1Light__DOT__my_delay__DOT__next_state 
        = ((0U == vlSelf->fullF1Light__DOT__my_delay__DOT__current_state)
            ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                ? 1U : vlSelf->fullF1Light__DOT__my_delay__DOT__current_state)
            : ((1U == vlSelf->fullF1Light__DOT__my_delay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->fullF1Light__DOT__my_delay__DOT__count))
                    ? 2U : vlSelf->fullF1Light__DOT__my_delay__DOT__current_state)
                : ((2U == vlSelf->fullF1Light__DOT__my_delay__DOT__current_state)
                    ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                        ? 3U : 0U) : ((3U == vlSelf->fullF1Light__DOT__my_delay__DOT__current_state)
                                       ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                           ? vlSelf->fullF1Light__DOT__my_delay__DOT__current_state
                                           : 0U) : 0U))));
}

VL_INLINE_OPT void VfullF1Light___024root___sequent__TOP__2(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->fullF1Light__DOT__my_lfsr__DOT__sreg = vlSelf->__Vdly__fullF1Light__DOT__my_lfsr__DOT__sreg;
}

VL_INLINE_OPT void VfullF1Light___024root___combo__TOP__0(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___combo__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state) 
               | (1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
              | (2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
             | (3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
            | (4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
           | (5U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
          | (6U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
         | (7U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state))) {
        if ((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            if (vlSelf->trigger) {
                vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 1U;
            }
        } else {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state 
                = ((1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                    ? 2U : ((2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                             ? 3U : ((3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                      ? 4U : ((4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                               ? 5U
                                               : ((5U 
                                                   == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                   ? 6U
                                                   : 
                                                  ((6U 
                                                    == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                    ? 7U
                                                    : 8U))))));
        }
    } else {
        vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 9U;
    }
}

void VfullF1Light___024root___eval(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VfullF1Light___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VfullF1Light___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VfullF1Light___024root___sequent__TOP__2(vlSelf);
    }
    VfullF1Light___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void VfullF1Light___024root___eval_debug_assertions(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG

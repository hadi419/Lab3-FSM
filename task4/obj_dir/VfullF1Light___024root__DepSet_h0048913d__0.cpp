// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfullF1Light.h for the primary calling header

#include "verilated.h"

#include "VfullF1Light___024root.h"

VL_INLINE_OPT void VfullF1Light___024root___sequent__TOP__0(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__fullF1Light__DOT__myLfsr__DOT__sreg;
    // Body
    __Vdly__fullF1Light__DOT__myLfsr__DOT__sreg = vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg;
    __Vdly__fullF1Light__DOT__myLfsr__DOT__sreg = (
                                                   (0x7eU 
                                                    & ((IData)(vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_8(
                                                                    (0x44U 
                                                                     & (IData)(vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg)))));
    vlSelf->fullF1Light__DOT__myDelay__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->fullF1Light__DOT__myDelay__DOT__next_state);
    vlSelf->fullF1Light__DOT__myDelay__DOT__count = 
        (0x7fU & ((((IData)(vlSelf->rst) | (8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                   | (0U == (IData)(vlSelf->fullF1Light__DOT__myDelay__DOT__count)))
                   ? ((IData)(vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg) 
                      - (IData)(1U)) : ((IData)(vlSelf->fullF1Light__DOT__myDelay__DOT__count) 
                                        - (IData)(1U))));
    vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg = __Vdly__fullF1Light__DOT__myLfsr__DOT__sreg;
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
    if (vlSelf->rst) {
        vlSelf->fullF1Light__DOT__tick = 0U;
        __Vdly__fullF1Light__DOT__myClktick__DOT__count = 0x35U;
        vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state = 0U;
    } else {
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
        if (vlSelf->fullF1Light__DOT__mux_out) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state 
                = vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state;
        }
    }
    vlSelf->fullF1Light__DOT__myClktick__DOT__count 
        = __Vdly__fullF1Light__DOT__myClktick__DOT__count;
    if (((((((((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state) 
               | (1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
              | (2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
             | (3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
            | (4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
           | (5U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
          | (6U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
         | (7U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state))) {
        if ((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                             ? 0xffU : 0U);
    }
    vlSelf->fullF1Light__DOT__mux_out = ((8U != vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                          ? (IData)(vlSelf->fullF1Light__DOT__tick)
                                          : ((0U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                                             & ((1U 
                                                 != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                                                & (2U 
                                                   == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state))));
    vlSelf->fullF1Light__DOT__myDelay__DOT__next_state 
        = ((0U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
            ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                ? 1U : vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
            : ((1U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->fullF1Light__DOT__myDelay__DOT__count))
                    ? 2U : vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                : ((2U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                    ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                        ? 3U : 0U) : ((3U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                       ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                           ? vlSelf->fullF1Light__DOT__myDelay__DOT__current_state
                                           : 0U) : 0U))));
}

void VfullF1Light___024root___eval(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VfullF1Light___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VfullF1Light___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
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

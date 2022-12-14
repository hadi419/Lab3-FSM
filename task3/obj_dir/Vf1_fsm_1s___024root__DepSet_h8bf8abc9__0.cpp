// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm_1s.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm_1s___024root.h"

VL_INLINE_OPT void Vf1_fsm_1s___024root___sequent__TOP__0(Vf1_fsm_1s___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__f1_fsm_1s__DOT__myClktick__DOT__count;
    // Body
    __Vdly__f1_fsm_1s__DOT__myClktick__DOT__count = vlSelf->f1_fsm_1s__DOT__myClktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state = 0U;
        vlSelf->f1_fsm_1s__DOT__tick = 0U;
        __Vdly__f1_fsm_1s__DOT__myClktick__DOT__count = 0x35U;
    } else {
        if (vlSelf->f1_fsm_1s__DOT__tick) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state 
                = vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state;
        }
        if ((0U == (IData)(vlSelf->f1_fsm_1s__DOT__myClktick__DOT__count))) {
            vlSelf->f1_fsm_1s__DOT__tick = 1U;
            __Vdly__f1_fsm_1s__DOT__myClktick__DOT__count = 0x35U;
        } else {
            __Vdly__f1_fsm_1s__DOT__myClktick__DOT__count 
                = (0x3fU & ((IData)(vlSelf->f1_fsm_1s__DOT__myClktick__DOT__count) 
                            - (IData)(1U)));
            vlSelf->f1_fsm_1s__DOT__tick = 0U;
        }
    }
    if (((((((((0U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state) 
               | (1U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
              | (2U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
             | (3U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
            | (4U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
           | (5U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
          | (6U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
         | (7U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state))) {
        if ((0U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                             ? 0xffU : 0U);
    }
    vlSelf->f1_fsm_1s__DOT__myClktick__DOT__count = __Vdly__f1_fsm_1s__DOT__myClktick__DOT__count;
}

void Vf1_fsm_1s___024root___eval(Vf1_fsm_1s___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm_1s___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm_1s___024root___eval_debug_assertions(Vf1_fsm_1s___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

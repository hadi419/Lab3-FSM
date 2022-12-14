// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfullF1Light.h for the primary calling header

#include "verilated.h"

#include "VfullF1Light___024root.h"

VL_ATTR_COLD void VfullF1Light___024root___initial__TOP__0(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg = 1U;
    vlSelf->fullF1Light__DOT__myDelay__DOT__count = 0U;
}

VL_ATTR_COLD void VfullF1Light___024root___settle__TOP__0(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___settle__TOP__0\n"); );
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

VL_ATTR_COLD void VfullF1Light___024root___eval_initial(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    VfullF1Light___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VfullF1Light___024root___eval_settle(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___eval_settle\n"); );
    // Body
    VfullF1Light___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VfullF1Light___024root___final(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___final\n"); );
}

VL_ATTR_COLD void VfullF1Light___024root___ctor_var_reset(VfullF1Light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->fullF1Light__DOT__mux_out = VL_RAND_RESET_I(1);
    vlSelf->fullF1Light__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state = 0;
    vlSelf->fullF1Light__DOT__myF1_fsm__DOT__next_state = 0;
    vlSelf->fullF1Light__DOT__myClktick__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->fullF1Light__DOT__myDelay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->fullF1Light__DOT__myDelay__DOT__current_state = 0;
    vlSelf->fullF1Light__DOT__myDelay__DOT__next_state = 0;
    vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

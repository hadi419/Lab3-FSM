// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_fsm_1s.h for the primary calling header

#ifndef VERILATED_VF1_FSM_1S___024ROOT_H_
#define VERILATED_VF1_FSM_1S___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_fsm_1s__Syms;

class Vf1_fsm_1s___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ f1_fsm_1s__DOT__tick;
    CData/*5:0*/ f1_fsm_1s__DOT__myClktick__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ f1_fsm_1s__DOT__myF1_fsm__DOT__current_state;
    IData/*31:0*/ f1_fsm_1s__DOT__myF1_fsm__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_fsm_1s__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_fsm_1s___024root(Vf1_fsm_1s__Syms* symsp, const char* name);
    ~Vf1_fsm_1s___024root();
    VL_UNCOPYABLE(Vf1_fsm_1s___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

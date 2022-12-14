// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VfullF1Light.h for the primary calling header

#ifndef VERILATED_VFULLF1LIGHT___024ROOT_H_
#define VERILATED_VFULLF1LIGHT___024ROOT_H_  // guard

#include "verilated.h"

class VfullF1Light__Syms;

class VfullF1Light___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ fullF1Light__DOT__mux_out;
    CData/*0:0*/ fullF1Light__DOT__tick;
    CData/*5:0*/ fullF1Light__DOT__myClktick__DOT__count;
    CData/*6:0*/ fullF1Light__DOT__myDelay__DOT__count;
    CData/*6:0*/ fullF1Light__DOT__myLfsr__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ fullF1Light__DOT__myF1_fsm__DOT__current_state;
    IData/*31:0*/ fullF1Light__DOT__myF1_fsm__DOT__next_state;
    IData/*31:0*/ fullF1Light__DOT__myDelay__DOT__current_state;
    IData/*31:0*/ fullF1Light__DOT__myDelay__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VfullF1Light__Syms* const vlSymsp;

    // CONSTRUCTORS
    VfullF1Light___024root(VfullF1Light__Syms* symsp, const char* name);
    ~VfullF1Light___024root();
    VL_UNCOPYABLE(VfullF1Light___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

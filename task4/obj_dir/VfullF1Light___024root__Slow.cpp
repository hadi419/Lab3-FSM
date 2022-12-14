// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfullF1Light.h for the primary calling header

#include "verilated.h"

#include "VfullF1Light__Syms.h"
#include "VfullF1Light___024root.h"

void VfullF1Light___024root___ctor_var_reset(VfullF1Light___024root* vlSelf);

VfullF1Light___024root::VfullF1Light___024root(VfullF1Light__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VfullF1Light___024root___ctor_var_reset(this);
}

void VfullF1Light___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VfullF1Light___024root::~VfullF1Light___024root() {
}

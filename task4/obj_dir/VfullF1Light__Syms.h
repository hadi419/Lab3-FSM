// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFULLF1LIGHT__SYMS_H_
#define VERILATED_VFULLF1LIGHT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VfullF1Light.h"

// INCLUDE MODULE CLASSES
#include "VfullF1Light___024root.h"

// SYMS CLASS (contains all model state)
class VfullF1Light__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VfullF1Light* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VfullF1Light___024root         TOP;

    // CONSTRUCTORS
    VfullF1Light__Syms(VerilatedContext* contextp, const char* namep, VfullF1Light* modelp);
    ~VfullF1Light__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

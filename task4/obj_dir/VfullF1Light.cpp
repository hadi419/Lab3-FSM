// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VfullF1Light.h"
#include "VfullF1Light__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VfullF1Light::VfullF1Light(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VfullF1Light__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , trigger{vlSymsp->TOP.trigger}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VfullF1Light::VfullF1Light(const char* _vcname__)
    : VfullF1Light(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VfullF1Light::~VfullF1Light() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VfullF1Light___024root___eval_initial(VfullF1Light___024root* vlSelf);
void VfullF1Light___024root___eval_settle(VfullF1Light___024root* vlSelf);
void VfullF1Light___024root___eval(VfullF1Light___024root* vlSelf);
#ifdef VL_DEBUG
void VfullF1Light___024root___eval_debug_assertions(VfullF1Light___024root* vlSelf);
#endif  // VL_DEBUG
void VfullF1Light___024root___final(VfullF1Light___024root* vlSelf);

static void _eval_initial_loop(VfullF1Light__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VfullF1Light___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VfullF1Light___024root___eval_settle(&(vlSymsp->TOP));
        VfullF1Light___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VfullF1Light::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VfullF1Light::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VfullF1Light___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VfullF1Light___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VfullF1Light::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VfullF1Light::final() {
    VfullF1Light___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VfullF1Light::hierName() const { return vlSymsp->name(); }
const char* VfullF1Light::modelName() const { return "VfullF1Light"; }
unsigned VfullF1Light::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VfullF1Light::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VfullF1Light___024root__trace_init_top(VfullF1Light___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VfullF1Light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullF1Light___024root*>(voidSelf);
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VfullF1Light___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VfullF1Light___024root__trace_register(VfullF1Light___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VfullF1Light::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VfullF1Light___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
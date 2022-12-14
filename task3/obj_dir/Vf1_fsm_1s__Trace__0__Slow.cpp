// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm_1s__Syms.h"


VL_ATTR_COLD void Vf1_fsm_1s___024root__trace_init_sub__TOP__0(Vf1_fsm_1s___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_fsm_1s ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->pushNamePrefix("myClktick ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+9,"en", false,-1);
    tracep->declBus(c+10,"N", false,-1, 5,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+2,"count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myF1_fsm ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->declBus(c+3,"current_state", false,-1, 31,0);
    tracep->declBus(c+4,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_fsm_1s___024root__trace_init_top(Vf1_fsm_1s___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root__trace_init_top\n"); );
    // Body
    Vf1_fsm_1s___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_fsm_1s___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm_1s___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm_1s___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_fsm_1s___024root__trace_register(Vf1_fsm_1s___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_fsm_1s___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_fsm_1s___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_fsm_1s___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_fsm_1s___024root__trace_full_sub_0(Vf1_fsm_1s___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_fsm_1s___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root__trace_full_top_0\n"); );
    // Init
    Vf1_fsm_1s___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm_1s___024root*>(voidSelf);
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_fsm_1s___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_fsm_1s___024root__trace_full_sub_0(Vf1_fsm_1s___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm_1s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm_1s___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->f1_fsm_1s__DOT__tick));
    bufp->fullCData(oldp+2,(vlSelf->f1_fsm_1s__DOT__myClktick__DOT__count),6);
    bufp->fullIData(oldp+3,(vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+4,((((((((((0U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state) 
                                    | (1U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
                                   | (2U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
                                  | (3U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
                                 | (4U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
                                | (5U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
                               | (6U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)) 
                              | (7U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state))
                              ? ((0U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                                  ? 1U : ((1U == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                                                       ? 6U
                                                       : 
                                                      ((6U 
                                                        == vlSelf->f1_fsm_1s__DOT__myF1_fsm__DOT__current_state)
                                                        ? 7U
                                                        : 8U)))))))
                              : 0U)),32);
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->rst));
    bufp->fullCData(oldp+7,(vlSelf->data_out),8);
    bufp->fullIData(oldp+8,(6U),32);
    bufp->fullBit(oldp+9,(1U));
    bufp->fullCData(oldp+10,(0x35U),6);
}

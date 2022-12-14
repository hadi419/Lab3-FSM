// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfullF1Light__Syms.h"


VL_ATTR_COLD void VfullF1Light___024root__trace_init_sub__TOP__0(VfullF1Light___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("fullF1Light ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->declBit(c+5,"cmd_delay", false,-1);
    tracep->declBit(c+6,"cmd_seq", false,-1);
    tracep->declBit(c+15,"mux_out", false,-1);
    tracep->declBit(c+7,"tick", false,-1);
    tracep->declBit(c+1,"time_out", false,-1);
    tracep->declBus(c+2,"K", false,-1, 6,0);
    tracep->pushNamePrefix("myClktick ");
    tracep->declBus(c+17,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+18,"N", false,-1, 5,0);
    tracep->declBit(c+7,"tick", false,-1);
    tracep->declBus(c+8,"count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myDelay ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+5,"trigger", false,-1);
    tracep->declBus(c+2,"K", false,-1, 6,0);
    tracep->declBit(c+1,"time_out", false,-1);
    tracep->declBus(c+3,"count", false,-1, 6,0);
    tracep->declBus(c+4,"current_state", false,-1, 31,0);
    tracep->declBus(c+16,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myF1_fsm ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+15,"en", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBit(c+6,"cmd_seq", false,-1);
    tracep->declBit(c+5,"cmd_delay", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+10,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myLfsr ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBus(c+2,"K", false,-1, 6,0);
    tracep->declBus(c+2,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VfullF1Light___024root__trace_init_top(VfullF1Light___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_init_top\n"); );
    // Body
    VfullF1Light___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VfullF1Light___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfullF1Light___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfullF1Light___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VfullF1Light___024root__trace_register(VfullF1Light___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VfullF1Light___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VfullF1Light___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VfullF1Light___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VfullF1Light___024root__trace_full_sub_0(VfullF1Light___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VfullF1Light___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_full_top_0\n"); );
    // Init
    VfullF1Light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullF1Light___024root*>(voidSelf);
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VfullF1Light___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VfullF1Light___024root__trace_full_sub_0(VfullF1Light___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VfullF1Light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullF1Light___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((0U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                           & ((1U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                              & (2U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)))));
    bufp->fullCData(oldp+2,(vlSelf->fullF1Light__DOT__myLfsr__DOT__sreg),7);
    bufp->fullCData(oldp+3,(vlSelf->fullF1Light__DOT__myDelay__DOT__count),7);
    bufp->fullIData(oldp+4,(vlSelf->fullF1Light__DOT__myDelay__DOT__current_state),32);
    bufp->fullBit(oldp+5,((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)));
    bufp->fullBit(oldp+6,((8U != vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)));
    bufp->fullBit(oldp+7,(vlSelf->fullF1Light__DOT__tick));
    bufp->fullCData(oldp+8,(vlSelf->fullF1Light__DOT__myClktick__DOT__count),6);
    bufp->fullIData(oldp+9,(vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+10,((((((((((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state) 
                                     | (1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                    | (2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                   | (3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                  | (4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                 | (5U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                                | (6U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)) 
                               | (7U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state))
                               ? ((0U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                   ? 1U : ((1U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                            ? 2U : 
                                           ((2U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                             ? 3U : 
                                            ((3U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                              ? 4U : 
                                             ((4U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                               ? 5U
                                               : ((5U 
                                                   == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                   ? 6U
                                                   : 
                                                  ((6U 
                                                    == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                                    ? 7U
                                                    : 8U)))))))
                               : 0U)),32);
    bufp->fullBit(oldp+11,(vlSelf->clk));
    bufp->fullBit(oldp+12,(vlSelf->rst));
    bufp->fullBit(oldp+13,(vlSelf->trigger));
    bufp->fullCData(oldp+14,(vlSelf->data_out),8);
    bufp->fullBit(oldp+15,(((8U != vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                             ? (IData)(vlSelf->fullF1Light__DOT__tick)
                             : ((0U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                                & ((1U != vlSelf->fullF1Light__DOT__myDelay__DOT__current_state) 
                                   & (2U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state))))));
    bufp->fullIData(oldp+16,(((0U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                               ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                   ? 1U : vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                               : ((1U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->fullF1Light__DOT__myDelay__DOT__count))
                                       ? 2U : vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                   : ((2U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                       ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->fullF1Light__DOT__myDelay__DOT__current_state)
                                           ? ((8U == vlSelf->fullF1Light__DOT__myF1_fsm__DOT__current_state)
                                               ? vlSelf->fullF1Light__DOT__myDelay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullIData(oldp+17,(6U),32);
    bufp->fullCData(oldp+18,(0x35U),6);
    bufp->fullIData(oldp+19,(7U),32);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((~ (IData)(vlSelf->r_rst)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__r_rst__0)) 
                                     | ((IData)(vlSelf->simple_demo_tb__DOT__r_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__r_clk__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->simple_demo_tb__DOT__w_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__w_clk__0))) 
                                     | ((~ (IData)(vlSelf->w_rst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__w_rst__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__r_rst__0 = vlSelf->r_rst;
    vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__r_clk__0 
        = vlSelf->simple_demo_tb__DOT__r_clk;
    vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__w_clk__0 
        = vlSelf->simple_demo_tb__DOT__w_clk;
    vlSelf->__Vtrigprevexpr___TOP__w_rst__0 = vlSelf->w_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

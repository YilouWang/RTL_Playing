// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->simple_demo_tb__DOT__w_clk = 0U;
    vlSelf->simple_demo_tb__DOT__r_clk = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/yilou/Desktop/yilou_github/RTL_Playing/Asyn_Fifo/py_tb/../DUT/simple_demo_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge r_rst or posedge simple_demo_tb.r_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge simple_demo_tb.w_clk or negedge w_rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge r_rst or posedge simple_demo_tb.r_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge simple_demo_tb.w_clk or negedge w_rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->w_rst = VL_RAND_RESET_I(1);
    vlSelf->w_en = VL_RAND_RESET_I(1);
    vlSelf->r_rst = VL_RAND_RESET_I(1);
    vlSelf->r_en = VL_RAND_RESET_I(1);
    vlSelf->w_data = VL_RAND_RESET_I(8);
    vlSelf->r_data = VL_RAND_RESET_I(8);
    vlSelf->w_full = VL_RAND_RESET_I(1);
    vlSelf->r_empty = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__w_rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__r_rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__r_en = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__w_data = VL_RAND_RESET_I(8);
    vlSelf->simple_demo_tb__DOT__r_data = VL_RAND_RESET_I(8);
    vlSelf->simple_demo_tb__DOT__w_full = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__r_empty = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__w_clk = 0;
    vlSelf->simple_demo_tb__DOT__r_clk = 0;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_data = VL_RAND_RESET_I(8);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_en = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_data = VL_RAND_RESET_I(8);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr = VL_RAND_RESET_I(4);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr = VL_RAND_RESET_I(4);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__i_ptr = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__i_ptr = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr = VL_RAND_RESET_I(4);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__w_ptr_gray = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_en = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_clk = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_clk = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_rst = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr = VL_RAND_RESET_I(4);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next = VL_RAND_RESET_I(5);
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data = VL_RAND_RESET_I(8);
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_addr = VL_RAND_RESET_I(4);
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_data = VL_RAND_RESET_I(8);
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_clk = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_full = VL_RAND_RESET_I(1);
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_addr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__r_rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__r_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__w_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__w_rst__0 = VL_RAND_RESET_I(1);
}

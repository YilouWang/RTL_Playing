// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__r_rst__0 = vlSelf->r_rst;
    vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__r_clk__0 
        = vlSelf->simple_demo_tb__DOT__r_clk;
    vlSelf->__Vtrigprevexpr___TOP__simple_demo_tb__DOT__w_clk__0 
        = vlSelf->simple_demo_tb__DOT__w_clk;
    vlSelf->__Vtrigprevexpr___TOP__w_rst__0 = vlSelf->w_rst;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1b58ULL, 
                                           nullptr, 
                                           "/home/yilou/Desktop/yilou_github/RTL_Playing/Asyn_Fifo/py_tb/../DUT/simple_demo_tb.sv", 
                                           19);
        vlSelf->simple_demo_tb__DOT__r_clk = (1U & 
                                              (~ (IData)(vlSelf->simple_demo_tb__DOT__r_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/yilou/Desktop/yilou_github/RTL_Playing/Asyn_Fifo/py_tb/../DUT/simple_demo_tb.sv", 
                                           16);
        vlSelf->simple_demo_tb__DOT__w_clk = (1U & 
                                              (~ (IData)(vlSelf->simple_demo_tb__DOT__w_clk)));
    }
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->w_full = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full;
    vlSelf->simple_demo_tb__DOT__w_full = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full;
    vlSelf->r_empty = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty;
    vlSelf->simple_demo_tb__DOT__r_empty = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray;
    vlSelf->simple_demo_tb__DOT__r_en = vlSelf->r_en;
    vlSelf->simple_demo_tb__DOT__w_data = vlSelf->w_data;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk = vlSelf->simple_demo_tb__DOT__r_clk;
    vlSelf->simple_demo_tb__DOT__w_rst = vlSelf->w_rst;
    vlSelf->simple_demo_tb__DOT__w_en = vlSelf->w_en;
    vlSelf->simple_demo_tb__DOT__r_rst = vlSelf->r_rst;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk = vlSelf->simple_demo_tb__DOT__w_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr 
        = (0xfU & (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr 
        = (0xfU & (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin));
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__i_ptr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__i_ptr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_en = vlSelf->simple_demo_tb__DOT__r_en;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_data = vlSelf->simple_demo_tb__DOT__w_data;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_rst = vlSelf->simple_demo_tb__DOT__w_rst;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_en = vlSelf->simple_demo_tb__DOT__w_en;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_rst = vlSelf->simple_demo_tb__DOT__r_rst;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__w_ptr_gray 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin) 
                    + (1U & ((~ (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty)) 
                             & (IData)(vlSelf->r_en)))));
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next), 1U)));
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp 
        = ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next) 
           == (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin) 
                    + (1U & ((~ (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full)) 
                             & (IData)(vlSelf->w_en)))));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next), 1U)));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next 
        = ((0x18U & ((~ ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o) 
                         >> 3U)) << 3U)) | (7U & (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o)));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp 
        = ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next) 
           == (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next));
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_full 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_en 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_en;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_data 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_data;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__rst 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_rst;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_rst 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_rst;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_en 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_en;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_en 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_en;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__rst 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_rst;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_rst 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_rst;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_addr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_addr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr;
    if (((IData)(vlSelf->w_en) & (~ (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full)))) {
        vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr] 
            = vlSelf->w_data;
    }
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data
        [vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr];
    vlSelf->r_data = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data;
    vlSelf->simple_demo_tb__DOT__r_data = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_data = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk = vlSelf->simple_demo_tb__DOT__r_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk = vlSelf->simple_demo_tb__DOT__w_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_clk 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->r_rst) {
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next;
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp;
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next;
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i;
    } else {
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray = 0U;
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr = 0U;
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin = 0U;
        vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp = 0U;
    }
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty 
        = ((1U & (~ (IData)(vlSelf->r_rst))) || (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp));
    vlSelf->r_empty = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty;
    vlSelf->simple_demo_tb__DOT__r_empty = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr 
        = (0xfU & (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr = vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__i_ptr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_addr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->w_rst) {
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next;
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp;
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next;
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp 
            = vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i;
    } else {
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray = 0U;
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr = 0U;
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin = 0U;
        vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp = 0U;
    }
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full 
        = ((IData)(vlSelf->w_rst) && (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr 
        = (0xfU & (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin));
    vlSelf->w_full = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full;
    vlSelf->simple_demo_tb__DOT__w_full = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__w_ptr_gray 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_full 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_full;
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__i_ptr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i;
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_addr 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin) 
                    + (1U & ((~ (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full)) 
                             & (IData)(vlSelf->w_en)))));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next), 1U)));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next 
        = ((0x18U & ((~ ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o) 
                         >> 3U)) << 3U)) | (7U & (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o)));
    vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp 
        = ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next) 
           == (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next));
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin) 
                    + (1U & ((~ (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty)) 
                             & (IData)(vlSelf->r_en)))));
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next 
        = (0x1fU & ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next) 
                    ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next), 1U)));
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp 
        = ((IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next) 
           == (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o));
    if (((IData)(vlSelf->w_en) & (~ (IData)(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full)))) {
        vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr] 
            = vlSelf->w_data;
    }
    vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data 
        = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data
        [vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr];
    vlSelf->r_data = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data;
    vlSelf->simple_demo_tb__DOT__r_data = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data;
    vlSelf->simple_demo_tb__DOT__dut__DOT__r_data = vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data;
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/yilou/Desktop/yilou_github/RTL_Playing/Asyn_Fifo/py_tb/../DUT/simple_demo_tb.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/yilou/Desktop/yilou_github/RTL_Playing/Asyn_Fifo/py_tb/../DUT/simple_demo_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/yilou/Desktop/yilou_github/RTL_Playing/Asyn_Fifo/py_tb/../DUT/simple_demo_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->w_rst & 0xfeU))) {
        Verilated::overWidthError("w_rst");}
    if (VL_UNLIKELY((vlSelf->w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((vlSelf->r_rst & 0xfeU))) {
        Verilated::overWidthError("r_rst");}
    if (VL_UNLIKELY((vlSelf->r_en & 0xfeU))) {
        Verilated::overWidthError("r_en");}
}
#endif  // VL_DEBUG

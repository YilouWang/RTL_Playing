// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_demo_tb.h for the primary calling header

#include "Vsimple_demo_tb.h"
#include "Vsimple_demo_tb__Syms.h"

//==========

VL_CTOR_IMP(Vsimple_demo_tb) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vsimple_demo_tb__Syms(this, name());
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsimple_demo_tb::__Vconfigure(Vsimple_demo_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vsimple_demo_tb::~Vsimple_demo_tb() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsimple_demo_tb::_settle__TOP__3(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_settle__TOP__3\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->w_en) & (~ (IData)(vlTOPp->w_full)))) {
        vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[(0xfU 
                                                                         & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin))] 
            = vlTOPp->w_data;
    }
    vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next 
        = (0x1fU & ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin) 
                    + (1U & ((~ (IData)(vlTOPp->r_empty)) 
                             & (IData)(vlTOPp->r_en)))));
    vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next 
        = (0x1fU & ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next) 
                    ^ ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next) 
                       >> 1U)));
    vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp 
        = ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next) 
           == (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_o));
    vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next 
        = (0x1fU & ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin) 
                    + (1U & ((~ (IData)(vlTOPp->w_full)) 
                             & (IData)(vlTOPp->w_en)))));
    vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next 
        = (0x1fU & ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next) 
                    ^ ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next) 
                       >> 1U)));
    vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next 
        = ((0x18U & ((~ ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_o) 
                         >> 3U)) << 3U)) | (7U & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_o)));
    vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp 
        = ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next) 
           == (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next));
    vlTOPp->r_data = vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data
        [(0xfU & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin))];
}

void Vsimple_demo_tb::_eval_initial(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_eval_initial\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__r_clk = vlTOPp->r_clk;
    vlTOPp->__Vclklast__TOP__r_rst = vlTOPp->r_rst;
    vlTOPp->__Vclklast__TOP__w_clk = vlTOPp->w_clk;
    vlTOPp->__Vclklast__TOP__w_rst = vlTOPp->w_rst;
}

void Vsimple_demo_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::final\n"); );
    // Variables
    Vsimple_demo_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsimple_demo_tb::_eval_settle(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_eval_settle\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vsimple_demo_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_ctor_var_reset\n"); );
    // Body
    w_clk = VL_RAND_RESET_I(1);
    w_rst = VL_RAND_RESET_I(1);
    w_en = VL_RAND_RESET_I(1);
    r_clk = VL_RAND_RESET_I(1);
    r_rst = VL_RAND_RESET_I(1);
    r_en = VL_RAND_RESET_I(1);
    w_data = VL_RAND_RESET_I(8);
    r_data = VL_RAND_RESET_I(8);
    w_full = VL_RAND_RESET_I(1);
    r_empty = VL_RAND_RESET_I(1);
    simple_demo_tb__DOT__dut__DOT__w_ptr_i = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__r_ptr_i = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__w_ptr_o = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__r_ptr_o = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp = VL_RAND_RESET_I(1);
    simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp = VL_RAND_RESET_I(1);
    simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin = VL_RAND_RESET_I(5);
    simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_demo_tb.h for the primary calling header

#include "Vsimple_demo_tb.h"
#include "Vsimple_demo_tb__Syms.h"

//==========

void Vsimple_demo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimple_demo_tb::eval\n"); );
    Vsimple_demo_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("simple_demo_tb.sv", 4, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsimple_demo_tb::_eval_initial_loop(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("simple_demo_tb.sv", 4, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsimple_demo_tb::_sequent__TOP__1(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_sequent__TOP__1\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->r_empty = (1U & ((~ (IData)(vlTOPp->r_rst)) 
                             | (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp)));
    if (vlTOPp->r_rst) {
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_o 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_i;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_i 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next;
    } else {
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin = 0U;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_o = 0U;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp = 0U;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_i = 0U;
    }
}

VL_INLINE_OPT void Vsimple_demo_tb::_sequent__TOP__2(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_sequent__TOP__2\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->w_rst) {
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_o 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next;
        vlTOPp->w_full = ((IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp) 
                          & 1U);
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_i;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_i 
            = vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next;
    } else {
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_o = 0U;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin = 0U;
        vlTOPp->w_full = 0U;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp = 0U;
        vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_i = 0U;
    }
}

VL_INLINE_OPT void Vsimple_demo_tb::_combo__TOP__4(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_combo__TOP__4\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if (((IData)(vlTOPp->w_en) & (~ (IData)(vlTOPp->w_full)))) {
        vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[(0xfU 
                                                                         & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin))] 
            = vlTOPp->w_data;
    }
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

void Vsimple_demo_tb::_eval(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_eval\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->r_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__r_clk))) 
         | ((~ (IData)(vlTOPp->r_rst)) & (IData)(vlTOPp->__Vclklast__TOP__r_rst)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlTOPp->w_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__w_clk))) 
         | ((~ (IData)(vlTOPp->w_rst)) & (IData)(vlTOPp->__Vclklast__TOP__w_rst)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__r_clk = vlTOPp->r_clk;
    vlTOPp->__Vclklast__TOP__r_rst = vlTOPp->r_rst;
    vlTOPp->__Vclklast__TOP__w_clk = vlTOPp->w_clk;
    vlTOPp->__Vclklast__TOP__w_rst = vlTOPp->w_rst;
}

VL_INLINE_OPT QData Vsimple_demo_tb::_change_request(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_change_request\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsimple_demo_tb::_change_request_1(Vsimple_demo_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_change_request_1\n"); );
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsimple_demo_tb::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_demo_tb::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((w_clk & 0xfeU))) {
        Verilated::overWidthError("w_clk");}
    if (VL_UNLIKELY((w_rst & 0xfeU))) {
        Verilated::overWidthError("w_rst");}
    if (VL_UNLIKELY((w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((r_clk & 0xfeU))) {
        Verilated::overWidthError("r_clk");}
    if (VL_UNLIKELY((r_rst & 0xfeU))) {
        Verilated::overWidthError("r_rst");}
    if (VL_UNLIKELY((r_en & 0xfeU))) {
        Verilated::overWidthError("r_en");}
}
#endif  // VL_DEBUG

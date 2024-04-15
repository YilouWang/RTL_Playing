// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(w_rst,0,0);
        VL_IN8(r_rst,0,0);
        CData/*0:0*/ simple_demo_tb__DOT__w_clk;
        CData/*0:0*/ simple_demo_tb__DOT__r_clk;
        VL_IN8(w_en,0,0);
        VL_IN8(r_en,0,0);
        VL_IN8(w_data,7,0);
        VL_OUT8(r_data,7,0);
        VL_OUT8(w_full,0,0);
        VL_OUT8(r_empty,0,0);
        CData/*0:0*/ simple_demo_tb__DOT__w_rst;
        CData/*0:0*/ simple_demo_tb__DOT__w_en;
        CData/*0:0*/ simple_demo_tb__DOT__r_rst;
        CData/*0:0*/ simple_demo_tb__DOT__r_en;
        CData/*7:0*/ simple_demo_tb__DOT__w_data;
        CData/*7:0*/ simple_demo_tb__DOT__r_data;
        CData/*0:0*/ simple_demo_tb__DOT__w_full;
        CData/*0:0*/ simple_demo_tb__DOT__r_empty;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_full;
        CData/*7:0*/ simple_demo_tb__DOT__dut__DOT__w_data;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_en;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_clk;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_rst;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_en;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_clk;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_rst;
        CData/*7:0*/ simple_demo_tb__DOT__dut__DOT__r_data;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_empty;
        CData/*3:0*/ simple_demo_tb__DOT__dut__DOT__w_addr;
        CData/*3:0*/ simple_demo_tb__DOT__dut__DOT__r_addr;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_ptr_i;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_ptr_i;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_ptr_o;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_ptr_o;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_sync__DOT__i_ptr;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_sync__DOT__clk;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_sync__DOT__rst;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_sync__DOT__i_ptr;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_sync__DOT__clk;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_sync__DOT__rst;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray;
        CData/*3:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__w_ptr_gray;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_en;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_clk;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_rst;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_en;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_clk;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_rst;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full;
        CData/*3:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next;
    };
    struct {
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin;
        CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next;
        CData/*7:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data;
        CData/*3:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_addr;
        CData/*7:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_data;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_en;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_clk;
        CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_full;
        CData/*3:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_addr;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__r_rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__simple_demo_tb__DOT__r_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__simple_demo_tb__DOT__w_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__w_rst__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 16> simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__DATA_SIZE = 8U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__ADDR_SIZE = 4U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__DATA_SIZE = 8U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__ADDR_SIZE = 4U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ADDR_SIZE = 4U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ADDR_SIZE = 4U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__ADDR_SIZE = 4U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__ADDR_SIZE = 4U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__ADDR_SIZE = 4U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__DATA_SIZE = 8U;
    static constexpr IData/*31:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__DEPTH = 0x00000010U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

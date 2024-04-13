// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSIMPLE_DEMO_TB_H_
#define _VSIMPLE_DEMO_TB_H_  // guard

#include "verilated.h"

//==========

class Vsimple_demo_tb__Syms;
class Vsimple_demo_tb_VerilatedVcd;


//----------

VL_MODULE(Vsimple_demo_tb) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(w_clk,0,0);
    VL_IN8(w_rst,0,0);
    VL_IN8(r_clk,0,0);
    VL_IN8(r_rst,0,0);
    VL_IN8(w_en,0,0);
    VL_IN8(r_en,0,0);
    VL_IN8(w_data,7,0);
    VL_OUT8(r_data,7,0);
    VL_OUT8(w_full,0,0);
    VL_OUT8(r_empty,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_ptr_i;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_ptr_i;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_ptr_o;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_ptr_o;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next;
    CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next;
    CData/*0:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin;
    CData/*4:0*/ simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next;
    CData/*7:0*/ simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[16];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__r_clk;
    CData/*0:0*/ __Vclklast__TOP__r_rst;
    CData/*0:0*/ __Vclklast__TOP__w_clk;
    CData/*0:0*/ __Vclklast__TOP__w_rst;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsimple_demo_tb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsimple_demo_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsimple_demo_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vsimple_demo_tb();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vsimple_demo_tb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vsimple_demo_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsimple_demo_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vsimple_demo_tb__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vsimple_demo_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsimple_demo_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsimple_demo_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsimple_demo_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vsimple_demo_tb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vsimple_demo_tb__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vsimple_demo_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

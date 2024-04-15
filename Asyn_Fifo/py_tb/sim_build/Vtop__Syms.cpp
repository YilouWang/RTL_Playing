// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_simple_demo_tb);
    __Vhier.remove(&__Vscope_simple_demo_tb, &__Vscope_simple_demo_tb__dut);
    __Vhier.remove(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__fifo_mem);
    __Vhier.remove(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__r_empty_checker);
    __Vhier.remove(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__r_sync);
    __Vhier.remove(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__w_full_checker);
    __Vhier.remove(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__w_sync);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_simple_demo_tb.configure(this, name(), "simple_demo_tb", "simple_demo_tb", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_simple_demo_tb__dut.configure(this, name(), "simple_demo_tb.dut", "dut", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_simple_demo_tb__dut__fifo_mem.configure(this, name(), "simple_demo_tb.dut.fifo_mem", "fifo_mem", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_simple_demo_tb__dut__r_empty_checker.configure(this, name(), "simple_demo_tb.dut.r_empty_checker", "r_empty_checker", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_simple_demo_tb__dut__r_sync.configure(this, name(), "simple_demo_tb.dut.r_sync", "r_sync", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_simple_demo_tb__dut__w_full_checker.configure(this, name(), "simple_demo_tb.dut.w_full_checker", "w_full_checker", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_simple_demo_tb__dut__w_sync.configure(this, name(), "simple_demo_tb.dut.w_sync", "w_sync", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_simple_demo_tb);
    __Vhier.add(&__Vscope_simple_demo_tb, &__Vscope_simple_demo_tb__dut);
    __Vhier.add(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__fifo_mem);
    __Vhier.add(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__r_empty_checker);
    __Vhier.add(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__r_sync);
    __Vhier.add(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__w_full_checker);
    __Vhier.add(&__Vscope_simple_demo_tb__dut, &__Vscope_simple_demo_tb__dut__w_sync);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"r_data", &(TOP.r_data), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"r_empty", &(TOP.r_empty), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"r_en", &(TOP.r_en), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"r_rst", &(TOP.r_rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"w_data", &(TOP.w_data), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"w_en", &(TOP.w_en), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"w_full", &(TOP.w_full), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"w_rst", &(TOP.w_rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"ADDR_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__ADDR_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"DATA_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__DATA_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"r_clk", &(TOP.simple_demo_tb__DOT__r_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"r_data", &(TOP.simple_demo_tb__DOT__r_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"r_empty", &(TOP.simple_demo_tb__DOT__r_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"r_en", &(TOP.simple_demo_tb__DOT__r_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"r_rst", &(TOP.simple_demo_tb__DOT__r_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"w_clk", &(TOP.simple_demo_tb__DOT__w_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"w_data", &(TOP.simple_demo_tb__DOT__w_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"w_en", &(TOP.simple_demo_tb__DOT__w_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"w_full", &(TOP.simple_demo_tb__DOT__w_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb.varInsert(__Vfinal,"w_rst", &(TOP.simple_demo_tb__DOT__w_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"ADDR_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__ADDR_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"DATA_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__DATA_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_addr", &(TOP.simple_demo_tb__DOT__dut__DOT__r_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_clk", &(TOP.simple_demo_tb__DOT__dut__DOT__r_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_data", &(TOP.simple_demo_tb__DOT__dut__DOT__r_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_empty", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_en", &(TOP.simple_demo_tb__DOT__dut__DOT__r_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_ptr_i", &(TOP.simple_demo_tb__DOT__dut__DOT__r_ptr_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_ptr_o", &(TOP.simple_demo_tb__DOT__dut__DOT__r_ptr_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"r_rst", &(TOP.simple_demo_tb__DOT__dut__DOT__r_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_addr", &(TOP.simple_demo_tb__DOT__dut__DOT__w_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_clk", &(TOP.simple_demo_tb__DOT__dut__DOT__w_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_data", &(TOP.simple_demo_tb__DOT__dut__DOT__w_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_en", &(TOP.simple_demo_tb__DOT__dut__DOT__w_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_full", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_ptr_i", &(TOP.simple_demo_tb__DOT__dut__DOT__w_ptr_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_ptr_o", &(TOP.simple_demo_tb__DOT__dut__DOT__w_ptr_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut.varInsert(__Vfinal,"w_rst", &(TOP.simple_demo_tb__DOT__dut__DOT__w_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"ADDR_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__ADDR_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"DATA_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__DATA_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"fifo_data", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,7,0 ,0,15);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"r_addr", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"r_data", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"w_addr", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"w_clk", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"w_data", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"w_en", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__fifo_mem.varInsert(__Vfinal,"w_full", &(TOP.simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"ADDR_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__ADDR_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_addr", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_clk", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_empty", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_empty_tmp", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_en", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_ptr_bin", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_ptr_bin_next", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_ptr_gray", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_ptr_gray_next", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"r_rst", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__r_empty_checker.varInsert(__Vfinal,"w_ptr_gray", &(TOP.simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__w_ptr_gray), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_sync.varInsert(__Vfinal,"ADDR_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ADDR_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut__r_sync.varInsert(__Vfinal,"clk", &(TOP.simple_demo_tb__DOT__dut__DOT__r_sync__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__r_sync.varInsert(__Vfinal,"i_ptr", &(TOP.simple_demo_tb__DOT__dut__DOT__r_sync__DOT__i_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_sync.varInsert(__Vfinal,"o_ptr", &(TOP.simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_sync.varInsert(__Vfinal,"ptr_temp", &(TOP.simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__r_sync.varInsert(__Vfinal,"rst", &(TOP.simple_demo_tb__DOT__dut__DOT__r_sync__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"ADDR_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__ADDR_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"r_ptr_gray", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"r_ptr_gray_next", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_addr", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_clk", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_en", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_full", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_full_tmp", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_ptr_bin", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_ptr_bin_next", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_ptr_gray", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_ptr_gray_next", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_full_checker.varInsert(__Vfinal,"w_rst", &(TOP.simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__w_sync.varInsert(__Vfinal,"ADDR_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ADDR_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_simple_demo_tb__dut__w_sync.varInsert(__Vfinal,"clk", &(TOP.simple_demo_tb__DOT__dut__DOT__w_sync__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_simple_demo_tb__dut__w_sync.varInsert(__Vfinal,"i_ptr", &(TOP.simple_demo_tb__DOT__dut__DOT__w_sync__DOT__i_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_sync.varInsert(__Vfinal,"o_ptr", &(TOP.simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_sync.varInsert(__Vfinal,"ptr_temp", &(TOP.simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_simple_demo_tb__dut__w_sync.varInsert(__Vfinal,"rst", &(TOP.simple_demo_tb__DOT__dut__DOT__w_sync__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}

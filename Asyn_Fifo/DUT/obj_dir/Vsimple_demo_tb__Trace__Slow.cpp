// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_demo_tb__Syms.h"


//======================

void Vsimple_demo_tb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsimple_demo_tb::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsimple_demo_tb::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsimple_demo_tb::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsimple_demo_tb::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+34,"w_clk", false,-1);
        tracep->declBit(c+35,"w_rst", false,-1);
        tracep->declBit(c+36,"w_en", false,-1);
        tracep->declBit(c+37,"r_clk", false,-1);
        tracep->declBit(c+38,"r_rst", false,-1);
        tracep->declBit(c+39,"r_en", false,-1);
        tracep->declBus(c+40,"w_data", false,-1, 7,0);
        tracep->declBus(c+41,"r_data", false,-1, 7,0);
        tracep->declBit(c+42,"w_full", false,-1);
        tracep->declBit(c+43,"r_empty", false,-1);
        tracep->declBit(c+34,"simple_demo_tb w_clk", false,-1);
        tracep->declBit(c+35,"simple_demo_tb w_rst", false,-1);
        tracep->declBit(c+36,"simple_demo_tb w_en", false,-1);
        tracep->declBit(c+37,"simple_demo_tb r_clk", false,-1);
        tracep->declBit(c+38,"simple_demo_tb r_rst", false,-1);
        tracep->declBit(c+39,"simple_demo_tb r_en", false,-1);
        tracep->declBus(c+40,"simple_demo_tb w_data", false,-1, 7,0);
        tracep->declBus(c+41,"simple_demo_tb r_data", false,-1, 7,0);
        tracep->declBit(c+42,"simple_demo_tb w_full", false,-1);
        tracep->declBit(c+43,"simple_demo_tb r_empty", false,-1);
        tracep->declBus(c+44,"simple_demo_tb DATA_SIZE", false,-1, 31,0);
        tracep->declBus(c+45,"simple_demo_tb ADDR_SIZE", false,-1, 31,0);
        tracep->declBus(c+44,"simple_demo_tb dut DATA_SIZE", false,-1, 31,0);
        tracep->declBus(c+45,"simple_demo_tb dut ADDR_SIZE", false,-1, 31,0);
        tracep->declBus(c+41,"simple_demo_tb dut r_data", false,-1, 7,0);
        tracep->declBit(c+42,"simple_demo_tb dut w_full", false,-1);
        tracep->declBit(c+43,"simple_demo_tb dut r_empty", false,-1);
        tracep->declBus(c+40,"simple_demo_tb dut w_data", false,-1, 7,0);
        tracep->declBit(c+36,"simple_demo_tb dut w_en", false,-1);
        tracep->declBit(c+35,"simple_demo_tb dut w_rst", false,-1);
        tracep->declBit(c+34,"simple_demo_tb dut w_clk", false,-1);
        tracep->declBit(c+39,"simple_demo_tb dut r_en", false,-1);
        tracep->declBit(c+37,"simple_demo_tb dut r_clk", false,-1);
        tracep->declBit(c+38,"simple_demo_tb dut r_rst", false,-1);
        tracep->declBus(c+6,"simple_demo_tb dut w_addr", false,-1, 3,0);
        tracep->declBus(c+1,"simple_demo_tb dut r_addr", false,-1, 3,0);
        tracep->declBus(c+7,"simple_demo_tb dut w_ptr_i", false,-1, 4,0);
        tracep->declBus(c+2,"simple_demo_tb dut r_ptr_i", false,-1, 4,0);
        tracep->declBus(c+8,"simple_demo_tb dut w_ptr_o", false,-1, 4,0);
        tracep->declBus(c+3,"simple_demo_tb dut r_ptr_o", false,-1, 4,0);
        tracep->declBus(c+45,"simple_demo_tb dut r_sync ADDR_SIZE", false,-1, 31,0);
        tracep->declBus(c+2,"simple_demo_tb dut r_sync i_ptr", false,-1, 4,0);
        tracep->declBus(c+3,"simple_demo_tb dut r_sync o_ptr", false,-1, 4,0);
        tracep->declBit(c+37,"simple_demo_tb dut r_sync clk", false,-1);
        tracep->declBit(c+38,"simple_demo_tb dut r_sync rst", false,-1);
        tracep->declBus(c+4,"simple_demo_tb dut r_sync ptr_temp", false,-1, 4,0);
        tracep->declBus(c+45,"simple_demo_tb dut w_sync ADDR_SIZE", false,-1, 31,0);
        tracep->declBus(c+7,"simple_demo_tb dut w_sync i_ptr", false,-1, 4,0);
        tracep->declBus(c+8,"simple_demo_tb dut w_sync o_ptr", false,-1, 4,0);
        tracep->declBit(c+34,"simple_demo_tb dut w_sync clk", false,-1);
        tracep->declBit(c+35,"simple_demo_tb dut w_sync rst", false,-1);
        tracep->declBus(c+9,"simple_demo_tb dut w_sync ptr_temp", false,-1, 4,0);
        tracep->declBus(c+45,"simple_demo_tb dut r_empty_checker ADDR_SIZE", false,-1, 31,0);
        tracep->declBit(c+43,"simple_demo_tb dut r_empty_checker r_empty", false,-1);
        tracep->declBus(c+2,"simple_demo_tb dut r_empty_checker r_ptr_gray", false,-1, 4,0);
        tracep->declBus(c+1,"simple_demo_tb dut r_empty_checker r_addr", false,-1, 3,0);
        tracep->declBus(c+8,"simple_demo_tb dut r_empty_checker w_ptr_gray", false,-1, 4,0);
        tracep->declBit(c+39,"simple_demo_tb dut r_empty_checker r_en", false,-1);
        tracep->declBit(c+37,"simple_demo_tb dut r_empty_checker r_clk", false,-1);
        tracep->declBit(c+38,"simple_demo_tb dut r_empty_checker r_rst", false,-1);
        tracep->declBus(c+11,"simple_demo_tb dut r_empty_checker r_ptr_gray_next", false,-1, 4,0);
        tracep->declBus(c+5,"simple_demo_tb dut r_empty_checker r_ptr_bin", false,-1, 4,0);
        tracep->declBus(c+12,"simple_demo_tb dut r_empty_checker r_ptr_bin_next", false,-1, 4,0);
        tracep->declBit(c+13,"simple_demo_tb dut r_empty_checker r_empty_tmp", false,-1);
        tracep->declBus(c+45,"simple_demo_tb dut w_full_checker ADDR_SIZE", false,-1, 31,0);
        tracep->declBus(c+3,"simple_demo_tb dut w_full_checker r_ptr_gray", false,-1, 4,0);
        tracep->declBit(c+34,"simple_demo_tb dut w_full_checker w_clk", false,-1);
        tracep->declBit(c+35,"simple_demo_tb dut w_full_checker w_rst", false,-1);
        tracep->declBit(c+36,"simple_demo_tb dut w_full_checker w_en", false,-1);
        tracep->declBus(c+6,"simple_demo_tb dut w_full_checker w_addr", false,-1, 3,0);
        tracep->declBit(c+42,"simple_demo_tb dut w_full_checker w_full", false,-1);
        tracep->declBus(c+7,"simple_demo_tb dut w_full_checker w_ptr_gray", false,-1, 4,0);
        tracep->declBus(c+14,"simple_demo_tb dut w_full_checker w_ptr_gray_next", false,-1, 4,0);
        tracep->declBus(c+15,"simple_demo_tb dut w_full_checker r_ptr_gray_next", false,-1, 4,0);
        tracep->declBit(c+16,"simple_demo_tb dut w_full_checker w_full_tmp", false,-1);
        tracep->declBus(c+10,"simple_demo_tb dut w_full_checker w_ptr_bin", false,-1, 4,0);
        tracep->declBus(c+17,"simple_demo_tb dut w_full_checker w_ptr_bin_next", false,-1, 4,0);
        tracep->declBus(c+45,"simple_demo_tb dut fifo_mem ADDR_SIZE", false,-1, 31,0);
        tracep->declBus(c+44,"simple_demo_tb dut fifo_mem DATA_SIZE", false,-1, 31,0);
        tracep->declBus(c+41,"simple_demo_tb dut fifo_mem r_data", false,-1, 7,0);
        tracep->declBus(c+1,"simple_demo_tb dut fifo_mem r_addr", false,-1, 3,0);
        tracep->declBus(c+40,"simple_demo_tb dut fifo_mem w_data", false,-1, 7,0);
        tracep->declBit(c+36,"simple_demo_tb dut fifo_mem w_en", false,-1);
        tracep->declBit(c+34,"simple_demo_tb dut fifo_mem w_clk", false,-1);
        tracep->declBit(c+42,"simple_demo_tb dut fifo_mem w_full", false,-1);
        tracep->declBus(c+6,"simple_demo_tb dut fifo_mem w_addr", false,-1, 3,0);
        tracep->declBus(c+46,"simple_demo_tb dut fifo_mem DEPTH", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+18+i*1,"simple_demo_tb dut fifo_mem fifo_data", true,(i+0), 7,0);}}
    }
}

void Vsimple_demo_tb::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsimple_demo_tb::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsimple_demo_tb::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((0xfU & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin))),4);
        tracep->fullCData(oldp+2,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_i),5);
        tracep->fullCData(oldp+3,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_o),5);
        tracep->fullCData(oldp+4,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp),5);
        tracep->fullCData(oldp+5,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin),5);
        tracep->fullCData(oldp+6,((0xfU & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin))),4);
        tracep->fullCData(oldp+7,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_i),5);
        tracep->fullCData(oldp+8,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_o),5);
        tracep->fullCData(oldp+9,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp),5);
        tracep->fullCData(oldp+10,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin),5);
        tracep->fullCData(oldp+11,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next),5);
        tracep->fullCData(oldp+12,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next),5);
        tracep->fullBit(oldp+13,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp));
        tracep->fullCData(oldp+14,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next),5);
        tracep->fullCData(oldp+15,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next),5);
        tracep->fullBit(oldp+16,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp));
        tracep->fullCData(oldp+17,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next),5);
        tracep->fullCData(oldp+18,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[0]),8);
        tracep->fullCData(oldp+19,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[1]),8);
        tracep->fullCData(oldp+20,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[2]),8);
        tracep->fullCData(oldp+21,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[3]),8);
        tracep->fullCData(oldp+22,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[4]),8);
        tracep->fullCData(oldp+23,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[5]),8);
        tracep->fullCData(oldp+24,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[6]),8);
        tracep->fullCData(oldp+25,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[7]),8);
        tracep->fullCData(oldp+26,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[8]),8);
        tracep->fullCData(oldp+27,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[9]),8);
        tracep->fullCData(oldp+28,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[10]),8);
        tracep->fullCData(oldp+29,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[11]),8);
        tracep->fullCData(oldp+30,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[12]),8);
        tracep->fullCData(oldp+31,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[13]),8);
        tracep->fullCData(oldp+32,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[14]),8);
        tracep->fullCData(oldp+33,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[15]),8);
        tracep->fullBit(oldp+34,(vlTOPp->w_clk));
        tracep->fullBit(oldp+35,(vlTOPp->w_rst));
        tracep->fullBit(oldp+36,(vlTOPp->w_en));
        tracep->fullBit(oldp+37,(vlTOPp->r_clk));
        tracep->fullBit(oldp+38,(vlTOPp->r_rst));
        tracep->fullBit(oldp+39,(vlTOPp->r_en));
        tracep->fullCData(oldp+40,(vlTOPp->w_data),8);
        tracep->fullCData(oldp+41,(vlTOPp->r_data),8);
        tracep->fullBit(oldp+42,(vlTOPp->w_full));
        tracep->fullBit(oldp+43,(vlTOPp->r_empty));
        tracep->fullIData(oldp+44,(8U),32);
        tracep->fullIData(oldp+45,(4U),32);
        tracep->fullIData(oldp+46,(0x10U),32);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_demo_tb__Syms.h"


void Vsimple_demo_tb::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vsimple_demo_tb::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,((0xfU & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin))),4);
            tracep->chgCData(oldp+1,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_i),5);
            tracep->chgCData(oldp+2,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_ptr_o),5);
            tracep->chgCData(oldp+3,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp),5);
            tracep->chgCData(oldp+4,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+5,((0xfU & (IData)(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin))),4);
            tracep->chgCData(oldp+6,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_i),5);
            tracep->chgCData(oldp+7,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_ptr_o),5);
            tracep->chgCData(oldp+8,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp),5);
            tracep->chgCData(oldp+9,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+10,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next),5);
            tracep->chgCData(oldp+11,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next),5);
            tracep->chgBit(oldp+12,(vlTOPp->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp));
            tracep->chgCData(oldp+13,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next),5);
            tracep->chgCData(oldp+14,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next),5);
            tracep->chgBit(oldp+15,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp));
            tracep->chgCData(oldp+16,(vlTOPp->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next),5);
            tracep->chgCData(oldp+17,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[0]),8);
            tracep->chgCData(oldp+18,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[1]),8);
            tracep->chgCData(oldp+19,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[2]),8);
            tracep->chgCData(oldp+20,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[3]),8);
            tracep->chgCData(oldp+21,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[4]),8);
            tracep->chgCData(oldp+22,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[5]),8);
            tracep->chgCData(oldp+23,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[6]),8);
            tracep->chgCData(oldp+24,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[7]),8);
            tracep->chgCData(oldp+25,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[8]),8);
            tracep->chgCData(oldp+26,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[9]),8);
            tracep->chgCData(oldp+27,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[10]),8);
            tracep->chgCData(oldp+28,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[11]),8);
            tracep->chgCData(oldp+29,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[12]),8);
            tracep->chgCData(oldp+30,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[13]),8);
            tracep->chgCData(oldp+31,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[14]),8);
            tracep->chgCData(oldp+32,(vlTOPp->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[15]),8);
        }
        tracep->chgBit(oldp+33,(vlTOPp->w_clk));
        tracep->chgBit(oldp+34,(vlTOPp->w_rst));
        tracep->chgBit(oldp+35,(vlTOPp->w_en));
        tracep->chgBit(oldp+36,(vlTOPp->r_clk));
        tracep->chgBit(oldp+37,(vlTOPp->r_rst));
        tracep->chgBit(oldp+38,(vlTOPp->r_en));
        tracep->chgCData(oldp+39,(vlTOPp->w_data),8);
        tracep->chgCData(oldp+40,(vlTOPp->r_data),8);
        tracep->chgBit(oldp+41,(vlTOPp->w_full));
        tracep->chgBit(oldp+42,(vlTOPp->r_empty));
    }
}

void Vsimple_demo_tb::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vsimple_demo_tb__Syms* __restrict vlSymsp = static_cast<Vsimple_demo_tb__Syms*>(userp);
    Vsimple_demo_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}

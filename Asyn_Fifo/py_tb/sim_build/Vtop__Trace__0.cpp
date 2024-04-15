// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->w_rst));
    bufp->chgBit(oldp+1,(vlSelf->w_en));
    bufp->chgBit(oldp+2,(vlSelf->r_rst));
    bufp->chgBit(oldp+3,(vlSelf->r_en));
    bufp->chgCData(oldp+4,(vlSelf->w_data),8);
    bufp->chgCData(oldp+5,(vlSelf->r_data),8);
    bufp->chgBit(oldp+6,(vlSelf->w_full));
    bufp->chgBit(oldp+7,(vlSelf->r_empty));
    bufp->chgBit(oldp+8,(vlSelf->simple_demo_tb__DOT__w_rst));
    bufp->chgBit(oldp+9,(vlSelf->simple_demo_tb__DOT__w_en));
    bufp->chgBit(oldp+10,(vlSelf->simple_demo_tb__DOT__r_rst));
    bufp->chgBit(oldp+11,(vlSelf->simple_demo_tb__DOT__r_en));
    bufp->chgCData(oldp+12,(vlSelf->simple_demo_tb__DOT__w_data),8);
    bufp->chgCData(oldp+13,(vlSelf->simple_demo_tb__DOT__r_data),8);
    bufp->chgBit(oldp+14,(vlSelf->simple_demo_tb__DOT__w_full));
    bufp->chgBit(oldp+15,(vlSelf->simple_demo_tb__DOT__r_empty));
    bufp->chgBit(oldp+16,(vlSelf->simple_demo_tb__DOT__w_clk));
    bufp->chgBit(oldp+17,(vlSelf->simple_demo_tb__DOT__r_clk));
    bufp->chgCData(oldp+18,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_data),8);
    bufp->chgBit(oldp+19,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full));
    bufp->chgBit(oldp+20,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty));
    bufp->chgCData(oldp+21,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_data),8);
    bufp->chgBit(oldp+22,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_en));
    bufp->chgBit(oldp+23,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_rst));
    bufp->chgBit(oldp+24,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk));
    bufp->chgBit(oldp+25,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_en));
    bufp->chgBit(oldp+26,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk));
    bufp->chgBit(oldp+27,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_rst));
    bufp->chgCData(oldp+28,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr),4);
    bufp->chgCData(oldp+29,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr),4);
    bufp->chgCData(oldp+30,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i),5);
    bufp->chgCData(oldp+31,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i),5);
    bufp->chgCData(oldp+32,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o),5);
    bufp->chgCData(oldp+33,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o),5);
    bufp->chgCData(oldp+34,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data),8);
    bufp->chgCData(oldp+35,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_addr),4);
    bufp->chgCData(oldp+36,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_data),8);
    bufp->chgBit(oldp+37,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_en));
    bufp->chgBit(oldp+38,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_clk));
    bufp->chgBit(oldp+39,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_full));
    bufp->chgCData(oldp+40,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_addr),4);
    bufp->chgCData(oldp+41,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[0]),8);
    bufp->chgCData(oldp+42,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[1]),8);
    bufp->chgCData(oldp+43,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[2]),8);
    bufp->chgCData(oldp+44,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[3]),8);
    bufp->chgCData(oldp+45,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[4]),8);
    bufp->chgCData(oldp+46,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[5]),8);
    bufp->chgCData(oldp+47,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[6]),8);
    bufp->chgCData(oldp+48,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[7]),8);
    bufp->chgCData(oldp+49,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[8]),8);
    bufp->chgCData(oldp+50,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[9]),8);
    bufp->chgCData(oldp+51,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[10]),8);
    bufp->chgCData(oldp+52,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[11]),8);
    bufp->chgCData(oldp+53,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[12]),8);
    bufp->chgCData(oldp+54,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[13]),8);
    bufp->chgCData(oldp+55,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[14]),8);
    bufp->chgCData(oldp+56,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[15]),8);
    bufp->chgBit(oldp+57,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty));
    bufp->chgCData(oldp+58,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray),5);
    bufp->chgCData(oldp+59,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr),4);
    bufp->chgCData(oldp+60,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__w_ptr_gray),5);
    bufp->chgBit(oldp+61,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_en));
    bufp->chgBit(oldp+62,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_clk));
    bufp->chgBit(oldp+63,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_rst));
    bufp->chgCData(oldp+64,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next),5);
    bufp->chgCData(oldp+65,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin),5);
    bufp->chgCData(oldp+66,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next),5);
    bufp->chgBit(oldp+67,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp));
    bufp->chgCData(oldp+68,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__i_ptr),5);
    bufp->chgCData(oldp+69,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr),5);
    bufp->chgBit(oldp+70,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__clk));
    bufp->chgBit(oldp+71,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__rst));
    bufp->chgCData(oldp+72,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp),5);
    bufp->chgCData(oldp+73,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray),5);
    bufp->chgBit(oldp+74,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_clk));
    bufp->chgBit(oldp+75,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_rst));
    bufp->chgBit(oldp+76,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_en));
    bufp->chgCData(oldp+77,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr),4);
    bufp->chgBit(oldp+78,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full));
    bufp->chgCData(oldp+79,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray),5);
    bufp->chgCData(oldp+80,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next),5);
    bufp->chgCData(oldp+81,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next),5);
    bufp->chgBit(oldp+82,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp));
    bufp->chgCData(oldp+83,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin),5);
    bufp->chgCData(oldp+84,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next),5);
    bufp->chgCData(oldp+85,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__i_ptr),5);
    bufp->chgCData(oldp+86,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr),5);
    bufp->chgBit(oldp+87,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__clk));
    bufp->chgBit(oldp+88,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__rst));
    bufp->chgCData(oldp+89,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp),5);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

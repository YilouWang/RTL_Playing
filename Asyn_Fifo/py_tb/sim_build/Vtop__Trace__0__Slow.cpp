// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"w_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"r_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"w_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"r_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("simple_demo_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"w_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"r_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"w_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"r_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"w_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+18,0,"r_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+91,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"ADDR_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"ADDR_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"w_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"r_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"w_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"w_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"r_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"r_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"w_ptr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"r_ptr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+33,0,"w_ptr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"r_ptr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fifo_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"ADDR_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"r_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+38,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"w_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"w_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"w_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+93,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fifo_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+42+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_empty_checker", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"ADDR_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"r_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"r_ptr_gray",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"r_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"w_ptr_gray",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+62,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"r_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"r_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"r_ptr_gray_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"r_ptr_bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"r_ptr_bin_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+68,0,"r_empty_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"ADDR_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"i_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"o_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+71,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"ptr_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("w_full_checker", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"ADDR_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"r_ptr_gray",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+75,0,"w_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"w_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"w_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+79,0,"w_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"w_ptr_gray",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+81,0,"w_ptr_gray_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"r_ptr_gray_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+83,0,"w_full_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"w_ptr_bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+85,0,"w_ptr_bin_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("w_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"ADDR_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"i_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"o_ptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+88,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"ptr_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+91,(8U),32);
    bufp->fullIData(oldp+92,(4U),32);
    bufp->fullIData(oldp+93,(0x10U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->w_rst));
    bufp->fullBit(oldp+2,(vlSelf->w_en));
    bufp->fullBit(oldp+3,(vlSelf->r_rst));
    bufp->fullBit(oldp+4,(vlSelf->r_en));
    bufp->fullCData(oldp+5,(vlSelf->w_data),8);
    bufp->fullCData(oldp+6,(vlSelf->r_data),8);
    bufp->fullBit(oldp+7,(vlSelf->w_full));
    bufp->fullBit(oldp+8,(vlSelf->r_empty));
    bufp->fullBit(oldp+9,(vlSelf->simple_demo_tb__DOT__w_rst));
    bufp->fullBit(oldp+10,(vlSelf->simple_demo_tb__DOT__w_en));
    bufp->fullBit(oldp+11,(vlSelf->simple_demo_tb__DOT__r_rst));
    bufp->fullBit(oldp+12,(vlSelf->simple_demo_tb__DOT__r_en));
    bufp->fullCData(oldp+13,(vlSelf->simple_demo_tb__DOT__w_data),8);
    bufp->fullCData(oldp+14,(vlSelf->simple_demo_tb__DOT__r_data),8);
    bufp->fullBit(oldp+15,(vlSelf->simple_demo_tb__DOT__w_full));
    bufp->fullBit(oldp+16,(vlSelf->simple_demo_tb__DOT__r_empty));
    bufp->fullBit(oldp+17,(vlSelf->simple_demo_tb__DOT__w_clk));
    bufp->fullBit(oldp+18,(vlSelf->simple_demo_tb__DOT__r_clk));
    bufp->fullCData(oldp+19,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_data),8);
    bufp->fullBit(oldp+20,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full));
    bufp->fullBit(oldp+21,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty));
    bufp->fullCData(oldp+22,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_data),8);
    bufp->fullBit(oldp+23,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_en));
    bufp->fullBit(oldp+24,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_rst));
    bufp->fullBit(oldp+25,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_clk));
    bufp->fullBit(oldp+26,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_en));
    bufp->fullBit(oldp+27,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_clk));
    bufp->fullBit(oldp+28,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_rst));
    bufp->fullCData(oldp+29,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_addr),4);
    bufp->fullCData(oldp+30,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_addr),4);
    bufp->fullCData(oldp+31,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_i),5);
    bufp->fullCData(oldp+32,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_i),5);
    bufp->fullCData(oldp+33,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_ptr_o),5);
    bufp->fullCData(oldp+34,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_ptr_o),5);
    bufp->fullCData(oldp+35,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_data),8);
    bufp->fullCData(oldp+36,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__r_addr),4);
    bufp->fullCData(oldp+37,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_data),8);
    bufp->fullBit(oldp+38,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_en));
    bufp->fullBit(oldp+39,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_clk));
    bufp->fullBit(oldp+40,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_full));
    bufp->fullCData(oldp+41,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__w_addr),4);
    bufp->fullCData(oldp+42,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[0]),8);
    bufp->fullCData(oldp+43,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[1]),8);
    bufp->fullCData(oldp+44,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[2]),8);
    bufp->fullCData(oldp+45,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[3]),8);
    bufp->fullCData(oldp+46,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[4]),8);
    bufp->fullCData(oldp+47,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[5]),8);
    bufp->fullCData(oldp+48,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[6]),8);
    bufp->fullCData(oldp+49,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[7]),8);
    bufp->fullCData(oldp+50,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[8]),8);
    bufp->fullCData(oldp+51,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[9]),8);
    bufp->fullCData(oldp+52,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[10]),8);
    bufp->fullCData(oldp+53,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[11]),8);
    bufp->fullCData(oldp+54,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[12]),8);
    bufp->fullCData(oldp+55,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[13]),8);
    bufp->fullCData(oldp+56,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[14]),8);
    bufp->fullCData(oldp+57,(vlSelf->simple_demo_tb__DOT__dut__DOT__fifo_mem__DOT__fifo_data[15]),8);
    bufp->fullBit(oldp+58,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty));
    bufp->fullCData(oldp+59,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray),5);
    bufp->fullCData(oldp+60,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_addr),4);
    bufp->fullCData(oldp+61,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__w_ptr_gray),5);
    bufp->fullBit(oldp+62,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_en));
    bufp->fullBit(oldp+63,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_clk));
    bufp->fullBit(oldp+64,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_rst));
    bufp->fullCData(oldp+65,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_gray_next),5);
    bufp->fullCData(oldp+66,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin),5);
    bufp->fullCData(oldp+67,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_ptr_bin_next),5);
    bufp->fullBit(oldp+68,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_empty_checker__DOT__r_empty_tmp));
    bufp->fullCData(oldp+69,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__i_ptr),5);
    bufp->fullCData(oldp+70,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__o_ptr),5);
    bufp->fullBit(oldp+71,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__clk));
    bufp->fullBit(oldp+72,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__rst));
    bufp->fullCData(oldp+73,(vlSelf->simple_demo_tb__DOT__dut__DOT__r_sync__DOT__ptr_temp),5);
    bufp->fullCData(oldp+74,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray),5);
    bufp->fullBit(oldp+75,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_clk));
    bufp->fullBit(oldp+76,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_rst));
    bufp->fullBit(oldp+77,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_en));
    bufp->fullCData(oldp+78,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_addr),4);
    bufp->fullBit(oldp+79,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full));
    bufp->fullCData(oldp+80,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray),5);
    bufp->fullCData(oldp+81,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_gray_next),5);
    bufp->fullCData(oldp+82,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__r_ptr_gray_next),5);
    bufp->fullBit(oldp+83,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_full_tmp));
    bufp->fullCData(oldp+84,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin),5);
    bufp->fullCData(oldp+85,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_full_checker__DOT__w_ptr_bin_next),5);
    bufp->fullCData(oldp+86,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__i_ptr),5);
    bufp->fullCData(oldp+87,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__o_ptr),5);
    bufp->fullBit(oldp+88,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__clk));
    bufp->fullBit(oldp+89,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__rst));
    bufp->fullCData(oldp+90,(vlSelf->simple_demo_tb__DOT__dut__DOT__w_sync__DOT__ptr_temp),5);
}

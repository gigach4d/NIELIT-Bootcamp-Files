// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasync_fifo_tb__Syms.h"


VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_init_sub__TOP__0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_init_sub__TOP__0\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("async_fifo_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"wr_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rd_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+5,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_init_top(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_init_top\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vasync_fifo_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasync_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_register(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_register\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vasync_fifo_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vasync_fifo_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vasync_fifo_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vasync_fifo_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_const_0_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_const_0\n"); );
    // Init
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasync_fifo_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_const_0_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_const_0_sub_0\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+16,(4U),32);
    bufp->fullIData(oldp+17,(2U),32);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_0_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_full_0\n"); );
    // Init
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasync_fifo_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_0_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_full_0_sub_0\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr),3);
    bufp->fullBit(oldp+6,(vlSelfRef.async_fifo_tb__DOT__wr_clk));
    bufp->fullBit(oldp+7,(vlSelfRef.async_fifo_tb__DOT__rd_clk));
    bufp->fullBit(oldp+8,(vlSelfRef.async_fifo_tb__DOT__rst_n));
    bufp->fullBit(oldp+9,(vlSelfRef.async_fifo_tb__DOT__wr_en));
    bufp->fullCData(oldp+10,(vlSelfRef.async_fifo_tb__DOT__wr_data),8);
    bufp->fullBit(oldp+11,((((1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                                    >> 2U)) != (1U 
                                                & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                                   >> 2U))) 
                            & ((3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)) 
                               == (3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))))));
    bufp->fullBit(oldp+12,(vlSelfRef.async_fifo_tb__DOT__rd_en));
    bufp->fullCData(oldp+13,(vlSelfRef.async_fifo_tb__DOT__rd_data),8);
    bufp->fullBit(oldp+14,(((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                            == (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr))));
    bufp->fullCData(oldp+15,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr),3);
}

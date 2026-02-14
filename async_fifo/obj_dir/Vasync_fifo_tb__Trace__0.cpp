// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasync_fifo_tb__Syms.h"


void Vasync_fifo_tb___024root__trace_chg_0_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vasync_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_chg_0\n"); );
    // Init
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vasync_fifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vasync_fifo_tb___024root__trace_chg_0_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_chg_0_sub_0\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr),3);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.async_fifo_tb__DOT__wr_clk));
    bufp->chgBit(oldp+6,(vlSelfRef.async_fifo_tb__DOT__rd_clk));
    bufp->chgBit(oldp+7,(vlSelfRef.async_fifo_tb__DOT__rst_n));
    bufp->chgBit(oldp+8,(vlSelfRef.async_fifo_tb__DOT__wr_en));
    bufp->chgCData(oldp+9,(vlSelfRef.async_fifo_tb__DOT__wr_data),8);
    bufp->chgBit(oldp+10,((((1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                                   >> 2U)) != (1U & 
                                               ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                                >> 2U))) 
                           & ((3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)) 
                              == (3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))))));
    bufp->chgBit(oldp+11,(vlSelfRef.async_fifo_tb__DOT__rd_en));
    bufp->chgCData(oldp+12,(vlSelfRef.async_fifo_tb__DOT__rd_data),8);
    bufp->chgBit(oldp+13,(((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                           == (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr))));
    bufp->chgCData(oldp+14,(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr),3);
}

void Vasync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_cleanup\n"); );
    // Init
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

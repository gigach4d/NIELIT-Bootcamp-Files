// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb__Syms.h"
#include "Vfifo_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "fifo_tb.v", 
                                         22);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "fifo_tb.v", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_rst = 0U;
    co_await vlSelfRef.__VtrigSched_he0567055__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.wr_clk)", 
                                                         "fifo_tb.v", 
                                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.fifo_tb__DOT__wr_data)));
    co_await vlSelfRef.__VtrigSched_he0567055__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.wr_clk)", 
                                                         "fifo_tb.v", 
                                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.fifo_tb__DOT__wr_data)));
    co_await vlSelfRef.__VtrigSched_he0567055__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.wr_clk)", 
                                                         "fifo_tb.v", 
                                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.fifo_tb__DOT__wr_data)));
    co_await vlSelfRef.__VtrigSched_he0567055__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.wr_clk)", 
                                                         "fifo_tb.v", 
                                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__wr_data = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.fifo_tb__DOT__wr_data)));
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1eULL, nullptr, 
                                         "fifo_tb.v", 
                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9919fab3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.rd_clk)", 
                                                         "fifo_tb.v", 
                                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h9919fab3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.rd_clk)", 
                                                         "fifo_tb.v", 
                                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h9919fab3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.rd_clk)", 
                                                         "fifo_tb.v", 
                                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h9919fab3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.rd_clk)", 
                                                         "fifo_tb.v", 
                                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "fifo_tb.v", 
                                         38);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("fifo_tb.v", 38, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(7ULL, 
                                             nullptr, 
                                             "fifo_tb.v", 
                                             10);
        vlSelfRef.fifo_tb__DOT__rd_clk = (1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__rd_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "fifo_tb.v", 
                                             9);
        vlSelfRef.fifo_tb__DOT__wr_clk = (1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__wr_clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_triggers__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.fifo_tb__DOT__wr_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.fifo_tb__DOT__wr_rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.fifo_tb__DOT__rd_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.fifo_tb__DOT__rd_rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0))));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0 
        = vlSelfRef.fifo_tb__DOT__wr_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0 
        = vlSelfRef.fifo_tb__DOT__wr_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0 
        = vlSelfRef.fifo_tb__DOT__rd_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0 
        = vlSelfRef.fifo_tb__DOT__rd_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

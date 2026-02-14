// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_fifo_tb.h for the primary calling header

#include "Vasync_fifo_tb__pch.h"
#include "Vasync_fifo_tb__Syms.h"
#include "Vasync_fifo_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6669666fU;
    __Vtemp_1[2U] = 0x796e635fU;
    __Vtemp_1[3U] = 0x6173U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "async_fifo_tb.v", 
                                         26);
    vlSelfRef.async_fifo_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h14163872__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.wr_clk)", 
                                                         "async_fifo_tb.v", 
                                                         29);
    if ((1U & (~ (((1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                          >> 2U)) != (1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                            >> 2U))) 
                  & ((3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)) 
                     == (3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))))))) {
        vlSelfRef.async_fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.async_fifo_tb__DOT__wr_data = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.async_fifo_tb__DOT__wr_data)));
    }
    co_await vlSelfRef.__VtrigSched_h14163872__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.wr_clk)", 
                                                         "async_fifo_tb.v", 
                                                         29);
    if ((1U & (~ (((1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                          >> 2U)) != (1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                            >> 2U))) 
                  & ((3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)) 
                     == (3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))))))) {
        vlSelfRef.async_fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.async_fifo_tb__DOT__wr_data = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.async_fifo_tb__DOT__wr_data)));
    }
    co_await vlSelfRef.__VtrigSched_h14163872__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.wr_clk)", 
                                                         "async_fifo_tb.v", 
                                                         29);
    if ((1U & (~ (((1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                          >> 2U)) != (1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                            >> 2U))) 
                  & ((3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)) 
                     == (3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))))))) {
        vlSelfRef.async_fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.async_fifo_tb__DOT__wr_data = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.async_fifo_tb__DOT__wr_data)));
    }
    co_await vlSelfRef.__VtrigSched_h14163872__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.wr_clk)", 
                                                         "async_fifo_tb.v", 
                                                         29);
    if ((1U & (~ (((1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                          >> 2U)) != (1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                            >> 2U))) 
                  & ((3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)) 
                     == (3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))))))) {
        vlSelfRef.async_fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.async_fifo_tb__DOT__wr_data = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.async_fifo_tb__DOT__wr_data)));
    }
    vlSelfRef.async_fifo_tb__DOT__wr_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         38);
    if (((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
         != (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr))) {
        vlSelfRef.async_fifo_tb__DOT__rd_en = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         40);
    vlSelfRef.async_fifo_tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         38);
    if (((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
         != (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr))) {
        vlSelfRef.async_fifo_tb__DOT__rd_en = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         40);
    vlSelfRef.async_fifo_tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         38);
    if (((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
         != (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr))) {
        vlSelfRef.async_fifo_tb__DOT__rd_en = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         40);
    vlSelfRef.async_fifo_tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         38);
    if (((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
         != (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr))) {
        vlSelfRef.async_fifo_tb__DOT__rd_en = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h8a33f492__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge async_fifo_tb.rd_clk)", 
                                                         "async_fifo_tb.v", 
                                                         40);
    vlSelfRef.async_fifo_tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "async_fifo_tb.v", 
                                         43);
    VL_FINISH_MT("async_fifo_tb.v", 43, "");
}

VL_INLINE_OPT VlCoroutine Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1b58ULL, 
                                             nullptr, 
                                             "async_fifo_tb.v", 
                                             20);
        vlSelfRef.async_fifo_tb__DOT__rd_clk = (1U 
                                                & (~ (IData)(vlSelfRef.async_fifo_tb__DOT__rd_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__2(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0xfa0ULL, 
                                             nullptr, 
                                             "async_fifo_tb.v", 
                                             19);
        vlSelfRef.async_fifo_tb__DOT__wr_clk = (1U 
                                                & (~ (IData)(vlSelfRef.async_fifo_tb__DOT__wr_clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__act(Vasync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vasync_fifo_tb___024root___eval_triggers__act(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_triggers__act\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((~ (IData)(vlSelfRef.async_fifo_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.async_fifo_tb__DOT__wr_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.async_fifo_tb__DOT__rd_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_clk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rst_n__0 
        = vlSelfRef.async_fifo_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_clk__0 
        = vlSelfRef.async_fifo_tb__DOT__wr_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_clk__0 
        = vlSelfRef.async_fifo_tb__DOT__rd_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasync_fifo_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

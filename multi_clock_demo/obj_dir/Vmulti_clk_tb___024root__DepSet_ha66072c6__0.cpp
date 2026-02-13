// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "Vmulti_clk_tb__pch.h"
#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__0(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0xfULL, nullptr, 
                                         "multi_clk_tb.v", 
                                         32);
    vlSelfRef.multi_clk_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3cULL, nullptr, 
                                         "multi_clk_tb.v", 
                                         34);
    vlSelfRef.multi_clk_tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3cULL, nullptr, 
                                         "multi_clk_tb.v", 
                                         35);
    vlSelfRef.multi_clk_tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "multi_clk_tb.v", 
                                         36);
    VL_FINISH_MT("multi_clk_tb.v", 36, "");
}

VL_INLINE_OPT VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__1(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "multi_clk_tb.v", 
                                             13);
        vlSelfRef.multi_clk_tb__DOT__clk_slow = (1U 
                                                 & (~ (IData)(vlSelfRef.multi_clk_tb__DOT__clk_slow)));
    }
}

VL_INLINE_OPT VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__2(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "multi_clk_tb.v", 
                                             10);
        vlSelfRef.multi_clk_tb__DOT__clk_fast = (1U 
                                                 & (~ (IData)(vlSelfRef.multi_clk_tb__DOT__clk_fast)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__act(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmulti_clk_tb___024root___eval_triggers__act(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_triggers__act\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.multi_clk_tb__DOT__clk_fast) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.multi_clk_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0 
        = vlSelfRef.multi_clk_tb__DOT__clk_fast;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0 
        = vlSelfRef.multi_clk_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmulti_clk_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x19ULL, nullptr, 
                                         "tb.v", 24);
    vlSelfRef.tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "tb.v", 28);
    vlSelfRef.tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "tb.v", 32);
    vlSelfRef.tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "tb.v", 35);
    VL_FINISH_MT("tb.v", 36, "");
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb.v", 
                                             11);
        vlSelfRef.tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelfRef.tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

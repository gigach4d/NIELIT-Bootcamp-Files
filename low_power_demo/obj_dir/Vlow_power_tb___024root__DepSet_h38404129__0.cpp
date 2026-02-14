// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlow_power_tb.h for the primary calling header

#include "Vlow_power_tb__pch.h"
#include "Vlow_power_tb__Syms.h"
#include "Vlow_power_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__Vtiming__0(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "low_power_tb.v", 
                                         33);
    vlSelfRef.low_power_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "low_power_tb.v", 
                                         35);
    vlSelfRef.low_power_tb__DOT__enable = 1U;
    vlSelfRef.low_power_tb__DOT__power_on = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1eULL, nullptr, 
                                         "low_power_tb.v", 
                                         36);
    vlSelfRef.low_power_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "low_power_tb.v", 
                                         37);
    vlSelfRef.low_power_tb__DOT__power_on = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "low_power_tb.v", 
                                         38);
    vlSelfRef.low_power_tb__DOT__enable = 1U;
    vlSelfRef.low_power_tb__DOT__power_on = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x28ULL, nullptr, 
                                         "low_power_tb.v", 
                                         39);
    VL_FINISH_MT("low_power_tb.v", 39, "");
}

VL_INLINE_OPT VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__Vtiming__1(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "low_power_tb.v", 
                                             8);
        vlSelfRef.low_power_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.low_power_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__act(Vlow_power_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlow_power_tb___024root___eval_triggers__act(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_triggers__act\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.low_power_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.low_power_tb__DOT__reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0 
        = vlSelfRef.low_power_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0 
        = vlSelfRef.low_power_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlow_power_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

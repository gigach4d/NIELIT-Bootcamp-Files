// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlow_power_tb.h for the primary calling header

#include "Vlow_power_tb__pch.h"
#include "Vlow_power_tb___024root.h"

VL_ATTR_COLD void Vlow_power_tb___024root___eval_static__TOP(Vlow_power_tb___024root* vlSelf);

VL_ATTR_COLD void Vlow_power_tb___024root___eval_static(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_static\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlow_power_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0 = 1U;
}

VL_ATTR_COLD void Vlow_power_tb___024root___eval_static__TOP(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_static__TOP\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.low_power_tb__DOT__clk = 0U;
    vlSelfRef.low_power_tb__DOT__reset = 1U;
    vlSelfRef.low_power_tb__DOT__enable = 0U;
    vlSelfRef.low_power_tb__DOT__power_on = 0U;
}

VL_ATTR_COLD void Vlow_power_tb___024root___eval_final(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_final\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlow_power_tb___024root___eval_settle(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_settle\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__act(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___dump_triggers__act\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge low_power_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge low_power_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__nba(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___dump_triggers__nba\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge low_power_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge low_power_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlow_power_tb___024root___ctor_var_reset(Vlow_power_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___ctor_var_reset\n"); );
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->low_power_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2015425254788406402ull);
    vlSelf->low_power_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7696246371149377719ull);
    vlSelf->low_power_tb__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12005435146911094306ull);
    vlSelf->low_power_tb__DOT__power_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11635905849235015569ull);
    vlSelf->low_power_tb__DOT__count_base = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11092967512846196138ull);
    vlSelf->low_power_tb__DOT__count_clk_gate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4137846807396367560ull);
    vlSelf->low_power_tb__DOT__count_pwr_gate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5529773598767329178ull);
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10545542322605813623ull);
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8471508938643434672ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

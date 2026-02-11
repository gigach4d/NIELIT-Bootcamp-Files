// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vup_counter_tb.h for the primary calling header

#include "Vup_counter_tb__pch.h"
#include "Vup_counter_tb___024root.h"

VL_ATTR_COLD void Vup_counter_tb___024root___eval_static(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_static\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__up_counter_tb__DOT__clk__0 
        = vlSelfRef.up_counter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__up_counter_tb__DOT__reset__0 
        = vlSelfRef.up_counter_tb__DOT__reset;
}

VL_ATTR_COLD void Vup_counter_tb___024root___eval_final(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_final\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vup_counter_tb___024root___eval_settle(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_settle\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_counter_tb___024root___dump_triggers__act(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___dump_triggers__act\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge up_counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge up_counter_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge up_counter_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vup_counter_tb___024root___dump_triggers__nba(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___dump_triggers__nba\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge up_counter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge up_counter_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge up_counter_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vup_counter_tb___024root___eval_postponed__TOP(Vup_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vup_counter_tb___024root___eval_postponed(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___eval_postponed\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vup_counter_tb___024root___eval_postponed__TOP(vlSelf);
}

VL_ATTR_COLD void Vup_counter_tb___024root___ctor_var_reset(Vup_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vup_counter_tb___024root___ctor_var_reset\n"); );
    Vup_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->up_counter_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10494013177151694538ull);
    vlSelf->up_counter_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11645254447037190941ull);
    vlSelf->up_counter_tb__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7197934064455880348ull);
    vlSelf->up_counter_tb__DOT____Vstrobe0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10902855183831662932ull);
    vlSelf->__Vtrigprevexpr___TOP__up_counter_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17007712804853227000ull);
    vlSelf->__Vtrigprevexpr___TOP__up_counter_tb__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17507854957044422882ull);
}

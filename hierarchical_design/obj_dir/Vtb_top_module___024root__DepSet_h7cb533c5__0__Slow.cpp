// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_module.h for the primary calling header

#include "Vtb_top_module__pch.h"
#include "Vtb_top_module___024root.h"

VL_ATTR_COLD void Vtb_top_module___024root___eval_static__TOP(Vtb_top_module___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_module___024root___eval_static(Vtb_top_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_static\n"); );
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_module___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_module__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_module__DOT__rst__0 = 1U;
}

VL_ATTR_COLD void Vtb_top_module___024root___eval_static__TOP(Vtb_top_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_static__TOP\n"); );
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_module__DOT__clk = 0U;
    vlSelfRef.tb_top_module__DOT__rst = 1U;
    vlSelfRef.tb_top_module__DOT__en = 0U;
}

VL_ATTR_COLD void Vtb_top_module___024root___eval_final(Vtb_top_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_final\n"); );
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_top_module___024root___eval_settle(Vtb_top_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_settle\n"); );
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_module___024root___dump_triggers__act(Vtb_top_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___dump_triggers__act\n"); );
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top_module.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_top_module.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_module___024root___dump_triggers__nba(Vtb_top_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___dump_triggers__nba\n"); );
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top_module.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_top_module.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_module___024root___ctor_var_reset(Vtb_top_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___ctor_var_reset\n"); );
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_top_module__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9240422724704968016ull);
    vlSelf->tb_top_module__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8725450460983902605ull);
    vlSelf->tb_top_module__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7618510959872789178ull);
    vlSelf->tb_top_module__DOT__dut__DOT__count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7291402246032384634ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14136195987025068422ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8314025242897309660ull);
}

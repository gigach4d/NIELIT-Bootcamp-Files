// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_ff_tb.h for the primary calling header

#include "Vjk_ff_tb__pch.h"
#include "Vjk_ff_tb___024root.h"

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_static(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_static\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__j__0 
        = vlSelfRef.jk_ff_tb__DOT__j;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__k__0 
        = vlSelfRef.jk_ff_tb__DOT__k;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__q__0 
        = vlSelfRef.jk_ff_tb__DOT__q;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__reset__0 
        = vlSelfRef.jk_ff_tb__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0 
        = vlSelfRef.jk_ff_tb__DOT__clk;
}

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_final(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_final\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vjk_ff_tb___024root___eval_settle(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___eval_settle\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__act(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___dump_triggers__act\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( jk_ff_tb.j)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( jk_ff_tb.k)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( jk_ff_tb.q)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( jk_ff_tb.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge jk_ff_tb.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_ff_tb___024root___dump_triggers__nba(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___dump_triggers__nba\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( jk_ff_tb.j)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( jk_ff_tb.k)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( jk_ff_tb.q)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( jk_ff_tb.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge jk_ff_tb.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjk_ff_tb___024root___ctor_var_reset(Vjk_ff_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_ff_tb___024root___ctor_var_reset\n"); );
    Vjk_ff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->jk_ff_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15959077905319071007ull);
    vlSelf->jk_ff_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 638163756239646350ull);
    vlSelf->jk_ff_tb__DOT__j = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13937992974433783104ull);
    vlSelf->jk_ff_tb__DOT__k = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8146948928498813523ull);
    vlSelf->jk_ff_tb__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4045101286254905051ull);
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__j__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5069600941972974814ull);
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__k__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12272613874419573767ull);
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__q__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2405050057530017372ull);
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5086994593643771549ull);
    vlSelf->__Vtrigprevexpr___TOP__jk_ff_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15466212954712458637ull);
    vlSelf->__VactDidInit = 0;
}

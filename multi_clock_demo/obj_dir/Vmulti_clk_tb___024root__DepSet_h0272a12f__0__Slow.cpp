// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "Vmulti_clk_tb__pch.h"
#include "Vmulti_clk_tb___024root.h"

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_static__TOP(Vmulti_clk_tb___024root* vlSelf);

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_static(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_static\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmulti_clk_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0 = 1U;
}

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_static__TOP(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_static__TOP\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.multi_clk_tb__DOT__clk_fast = 0U;
    vlSelfRef.multi_clk_tb__DOT__clk_slow = 0U;
    vlSelfRef.multi_clk_tb__DOT__rst = 1U;
    vlSelfRef.multi_clk_tb__DOT__sel = 0U;
}

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_final(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_final\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__stl(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmulti_clk_tb___024root___eval_phase__stl(Vmulti_clk_tb___024root* vlSelf);

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_settle(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_settle\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmulti_clk_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("multi_clk_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmulti_clk_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__stl(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___dump_triggers__stl\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmulti_clk_tb___024root___act_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf);

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_stl(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_stl\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmulti_clk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_triggers__stl(Vmulti_clk_tb___024root* vlSelf);

VL_ATTR_COLD bool Vmulti_clk_tb___024root___eval_phase__stl(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_phase__stl\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmulti_clk_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmulti_clk_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__act(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___dump_triggers__act\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge multi_clk_tb.clk_fast)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge multi_clk_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__nba(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___dump_triggers__nba\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge multi_clk_tb.clk_fast)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge multi_clk_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmulti_clk_tb___024root___ctor_var_reset(Vmulti_clk_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___ctor_var_reset\n"); );
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->multi_clk_tb__DOT__clk_fast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3426552452642243749ull);
    vlSelf->multi_clk_tb__DOT__clk_slow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7861972713056147097ull);
    vlSelf->multi_clk_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8440926952219044423ull);
    vlSelf->multi_clk_tb__DOT__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16804100091289446964ull);
    vlSelf->multi_clk_tb__DOT__muxed_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15042611211424218984ull);
    vlSelf->multi_clk_tb__DOT__clk_div4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8715879829779336220ull);
    vlSelf->multi_clk_tb__DOT__u_div__DOT__counter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9691647708711616226ull);
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11975187627682447317ull);
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15084001954072192264ull);
}

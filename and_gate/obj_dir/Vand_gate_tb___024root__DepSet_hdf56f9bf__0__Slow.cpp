// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "Vand_gate_tb__pch.h"
#include "Vand_gate_tb___024root.h"

VL_ATTR_COLD void Vand_gate_tb___024root___eval_static(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_static\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__a__0 
        = vlSelfRef.and_gate_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__b__0 
        = vlSelfRef.and_gate_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__and_gate_tb__DOT__out__0 
        = vlSelfRef.and_gate_tb__DOT__out;
}

VL_ATTR_COLD void Vand_gate_tb___024root___eval_final(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_final\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__stl(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vand_gate_tb___024root___eval_phase__stl(Vand_gate_tb___024root* vlSelf);

VL_ATTR_COLD void Vand_gate_tb___024root___eval_settle(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_settle\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vand_gate_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("and_gate_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vand_gate_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__stl(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___dump_triggers__stl\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vand_gate_tb___024root___act_sequent__TOP__0(Vand_gate_tb___024root* vlSelf);

VL_ATTR_COLD void Vand_gate_tb___024root___eval_stl(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_stl\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vand_gate_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vand_gate_tb___024root___eval_triggers__stl(Vand_gate_tb___024root* vlSelf);

VL_ATTR_COLD bool Vand_gate_tb___024root___eval_phase__stl(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_phase__stl\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vand_gate_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vand_gate_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__act(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___dump_triggers__act\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( and_gate_tb.a)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( and_gate_tb.b)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( and_gate_tb.out)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__nba(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___dump_triggers__nba\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( and_gate_tb.a)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( and_gate_tb.b)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( and_gate_tb.out)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vand_gate_tb___024root___ctor_var_reset(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___ctor_var_reset\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->and_gate_tb__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17975213916121486981ull);
    vlSelf->and_gate_tb__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18418375025794043259ull);
    vlSelf->and_gate_tb__DOT__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16196982761972056601ull);
    vlSelf->__Vtrigprevexpr___TOP__and_gate_tb__DOT__a__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11448225334277670622ull);
    vlSelf->__Vtrigprevexpr___TOP__and_gate_tb__DOT__b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4393658762177128948ull);
    vlSelf->__Vtrigprevexpr___TOP__and_gate_tb__DOT__out__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14887572720115311108ull);
    vlSelf->__VactDidInit = 0;
}

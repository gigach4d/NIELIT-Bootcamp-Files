// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vripple_up_counter_tb.h for the primary calling header

#include "Vripple_up_counter_tb__pch.h"
#include "Vripple_up_counter_tb___024root.h"

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_static(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_static\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__q__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__q;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0 
        = vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk;
}

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_final(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_final\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__stl(Vripple_up_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vripple_up_counter_tb___024root___eval_phase__stl(Vripple_up_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_settle(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_settle\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vripple_up_counter_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ripple_up_counter_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vripple_up_counter_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__stl(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___dump_triggers__stl\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vripple_up_counter_tb___024root___stl_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_stl(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_stl\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vripple_up_counter_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vripple_up_counter_tb___024root___stl_sequent__TOP__0(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___stl_sequent__TOP__0\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out0)));
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out1)));
    vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk 
        = (1U & (~ (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out2)));
    vlSelfRef.ripple_up_counter_tb__DOT__q = ((((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out3) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out2) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out1) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ripple_up_counter_tb__DOT__uut__DOT__q_out0)));
}

VL_ATTR_COLD void Vripple_up_counter_tb___024root___eval_triggers__stl(Vripple_up_counter_tb___024root* vlSelf);

VL_ATTR_COLD bool Vripple_up_counter_tb___024root___eval_phase__stl(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___eval_phase__stl\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vripple_up_counter_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vripple_up_counter_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__act(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___dump_triggers__act\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( ripple_up_counter_tb.q)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( ripple_up_counter_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ripple_up_counter_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ripple_up_counter_tb.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff1__clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff2__clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff3__clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vripple_up_counter_tb___024root___dump_triggers__nba(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___dump_triggers__nba\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( ripple_up_counter_tb.q)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( ripple_up_counter_tb.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ripple_up_counter_tb.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ripple_up_counter_tb.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff1__clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff2__clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge ripple_up_counter_tb.uut.__Vcellinp__tff3__clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vripple_up_counter_tb___024root___ctor_var_reset(Vripple_up_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vripple_up_counter_tb___024root___ctor_var_reset\n"); );
    Vripple_up_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->ripple_up_counter_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16259204350404028834ull);
    vlSelf->ripple_up_counter_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14832722303768067484ull);
    vlSelf->ripple_up_counter_tb__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7996782496297400138ull);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16292256564239250909ull);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4239375909884714370ull);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3185431672222775395ull);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT__q_out3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3207647000903847747ull);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9447279745744910044ull);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14912219019358010727ull);
    vlSelf->ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5429982644988165911ull);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__q__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18384603286825204999ull);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6262728977005651096ull);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11525673717656379073ull);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff1__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7392769285438481747ull);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff2__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14693269100995533581ull);
    vlSelf->__Vtrigprevexpr___TOP__ripple_up_counter_tb__DOT__uut__DOT____Vcellinp__tff3__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8732787797075041421ull);
    vlSelf->__VactDidInit = 0;
}

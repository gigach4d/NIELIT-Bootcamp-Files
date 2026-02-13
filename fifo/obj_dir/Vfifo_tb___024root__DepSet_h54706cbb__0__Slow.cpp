// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb___024root.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_static__TOP(Vfifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vfifo_tb___024root____Vm_traceActivitySetAll(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_static(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_static\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_tb___024root___eval_static__TOP(vlSelf);
    Vfifo_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0 = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0 = 1U;
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_static__TOP(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_static__TOP\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_tb__DOT__wr_clk = 0U;
    vlSelfRef.fifo_tb__DOT__rd_clk = 0U;
    vlSelfRef.fifo_tb__DOT__wr_rst = 1U;
    vlSelfRef.fifo_tb__DOT__rd_rst = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    vlSelfRef.fifo_tb__DOT__wr_data = 0U;
    vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr = 0U;
    vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr = 0U;
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_final(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_final\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_settle(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_settle\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vfifo_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fifo_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfifo_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__stl\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vfifo_tb___024root___nba_comb__TOP__0(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_stl(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_stl\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfifo_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_triggers__stl(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__stl\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfifo_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge fifo_tb.wr_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge fifo_tb.wr_rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge fifo_tb.rd_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge fifo_tb.rd_rst)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge fifo_tb.wr_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge fifo_tb.wr_rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge fifo_tb.rd_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge fifo_tb.rd_rst)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo_tb___024root____Vm_traceActivitySetAll(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root____Vm_traceActivitySetAll\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vfifo_tb___024root___ctor_var_reset(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___ctor_var_reset\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->fifo_tb__DOT__wr_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4771028673549879767ull);
    vlSelf->fifo_tb__DOT__rd_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3483699346947932945ull);
    vlSelf->fifo_tb__DOT__wr_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2841403606404994344ull);
    vlSelf->fifo_tb__DOT__rd_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 620014850906825756ull);
    vlSelf->fifo_tb__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1384146367724459340ull);
    vlSelf->fifo_tb__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14368826268811908699ull);
    vlSelf->fifo_tb__DOT__wr_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13380387125480576830ull);
    vlSelf->fifo_tb__DOT__rd_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13661825344459562342ull);
    vlSelf->fifo_tb__DOT__wr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14905705570684692703ull);
    vlSelf->fifo_tb__DOT__rd_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8547144835994895508ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->fifo_tb__DOT__uut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5243618847028397031ull);
    }
    vlSelf->fifo_tb__DOT__uut__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11389546429374980122ull);
    vlSelf->fifo_tb__DOT__uut__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6754339961531117005ull);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11316495014630316789ull);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13410926396515866775ull);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8631858653830309966ull);
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8546682399371968731ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

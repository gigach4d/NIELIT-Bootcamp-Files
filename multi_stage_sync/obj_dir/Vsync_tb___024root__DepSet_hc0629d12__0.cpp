// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_tb.h for the primary calling header

#include "Vsync_tb__pch.h"
#include "Vsync_tb___024root.h"

VlCoroutine Vsync_tb___024root___eval_initial__TOP__Vtiming__0(Vsync_tb___024root* vlSelf);
VlCoroutine Vsync_tb___024root___eval_initial__TOP__Vtiming__1(Vsync_tb___024root* vlSelf);

void Vsync_tb___024root___eval_initial(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_initial\n"); );
    // Body
    Vsync_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsync_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__sync_tb__DOT__clk__0 
        = vlSelf->sync_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vsync_tb___024root___eval_initial__TOP__Vtiming__1(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "sync_tb.v", 
                                           6);
        vlSelf->__Vdlyvval__sync_tb__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->sync_tb__DOT__clk)));
        vlSelf->__Vdlyvset__sync_tb__DOT__clk__v0 = 1U;
    }
}

void Vsync_tb___024root___eval_act(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsync_tb___024root___nba_sequent__TOP__0(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__sync_tb__DOT__clk__v0) {
        vlSelf->sync_tb__DOT__clk = vlSelf->__Vdlyvval__sync_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__sync_tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vsync_tb___024root___nba_sequent__TOP__1(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->sync_tb__DOT__sync_out2 = vlSelf->sync_tb__DOT__u_sync2__DOT__sync_ff1;
    vlSelf->sync_tb__DOT__sync_out3 = vlSelf->sync_tb__DOT__u_sync3__DOT__sync_ff2;
    vlSelf->sync_tb__DOT__u_sync2__DOT__sync_ff1 = vlSelf->sync_tb__DOT__async_in;
    vlSelf->sync_tb__DOT__u_sync3__DOT__sync_ff2 = vlSelf->sync_tb__DOT__u_sync3__DOT__sync_ff1;
    vlSelf->sync_tb__DOT__u_sync3__DOT__sync_ff1 = vlSelf->sync_tb__DOT__async_in;
}

void Vsync_tb___024root___eval_nba(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsync_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsync_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsync_tb___024root___timing_resume(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vsync_tb___024root___eval_triggers__act(Vsync_tb___024root* vlSelf);

bool Vsync_tb___024root___eval_phase__act(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsync_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsync_tb___024root___timing_resume(vlSelf);
        Vsync_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsync_tb___024root___eval_phase__nba(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsync_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__nba(Vsync_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_tb___024root___dump_triggers__act(Vsync_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsync_tb___024root___eval(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsync_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sync_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsync_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sync_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsync_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsync_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsync_tb___024root___eval_debug_assertions(Vsync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

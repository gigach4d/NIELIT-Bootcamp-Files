// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_fifo_tb.h for the primary calling header

#include "Vasync_fifo_tb__pch.h"
#include "Vasync_fifo_tb___024root.h"

VlCoroutine Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vasync_fifo_tb___024root* vlSelf);
VlCoroutine Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vasync_fifo_tb___024root* vlSelf);
VlCoroutine Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__2(Vasync_fifo_tb___024root* vlSelf);

void Vasync_fifo_tb___024root___eval_initial(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_initial\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vasync_fifo_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vasync_fifo_tb___024root___eval_act(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_act\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vasync_fifo_tb___024root___nba_sequent__TOP__0(Vasync_fifo_tb___024root* vlSelf);
void Vasync_fifo_tb___024root___nba_sequent__TOP__1(Vasync_fifo_tb___024root* vlSelf);
void Vasync_fifo_tb___024root___nba_comb__TOP__0(Vasync_fifo_tb___024root* vlSelf);

void Vasync_fifo_tb___024root___eval_nba(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_nba\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasync_fifo_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasync_fifo_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasync_fifo_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vasync_fifo_tb___024root___nba_sequent__TOP__0(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.async_fifo_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.async_fifo_tb__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.async_fifo_tb__DOT__empty)))) {
            vlSelfRef.async_fifo_tb__DOT__rd_data = 
                vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem
                [(3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))];
            vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr)));
        }
    } else {
        vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr = 0U;
        vlSelfRef.async_fifo_tb__DOT__rd_data = 0U;
    }
}

VL_INLINE_OPT void Vasync_fifo_tb___024root___nba_sequent__TOP__1(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___nba_sequent__TOP__1\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__async_fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlyVal__async_fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__async_fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlyDim0__async_fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__async_fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlySet__async_fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__async_fifo_tb__DOT__uut__DOT__mem__v0 = 0U;
    if (vlSelfRef.async_fifo_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.async_fifo_tb__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.async_fifo_tb__DOT__full)))) {
            __VdlyVal__async_fifo_tb__DOT__uut__DOT__mem__v0 
                = vlSelfRef.async_fifo_tb__DOT__wr_data;
            __VdlyDim0__async_fifo_tb__DOT__uut__DOT__mem__v0 
                = (3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr));
            __VdlySet__async_fifo_tb__DOT__uut__DOT__mem__v0 = 1U;
            vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__async_fifo_tb__DOT__uut__DOT__mem__v0) {
        vlSelfRef.async_fifo_tb__DOT__uut__DOT__mem[__VdlyDim0__async_fifo_tb__DOT__uut__DOT__mem__v0] 
            = __VdlyVal__async_fifo_tb__DOT__uut__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vasync_fifo_tb___024root___nba_comb__TOP__0(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___nba_comb__TOP__0\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.async_fifo_tb__DOT__full = (((1U & ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                                                  >> 2U)) 
                                           != (1U & 
                                               ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                                >> 2U))) 
                                          & ((3U & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr)) 
                                             == (3U 
                                                 & (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr))));
    vlSelfRef.async_fifo_tb__DOT__empty = ((IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__rd_ptr) 
                                           == (IData)(vlSelfRef.async_fifo_tb__DOT__uut__DOT__wr_ptr));
}

void Vasync_fifo_tb___024root___timing_resume(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___timing_resume\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h14163872__0.resume(
                                                   "@(posedge async_fifo_tb.wr_clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8a33f492__0.resume(
                                                   "@(posedge async_fifo_tb.rd_clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vasync_fifo_tb___024root___timing_commit(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___timing_commit\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h14163872__0.commit(
                                                   "@(posedge async_fifo_tb.wr_clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8a33f492__0.commit(
                                                   "@(posedge async_fifo_tb.rd_clk)");
    }
}

void Vasync_fifo_tb___024root___eval_triggers__act(Vasync_fifo_tb___024root* vlSelf);

bool Vasync_fifo_tb___024root___eval_phase__act(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_phase__act\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vasync_fifo_tb___024root___eval_triggers__act(vlSelf);
    Vasync_fifo_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vasync_fifo_tb___024root___timing_resume(vlSelf);
        Vasync_fifo_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vasync_fifo_tb___024root___eval_phase__nba(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_phase__nba\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vasync_fifo_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__nba(Vasync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__act(Vasync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vasync_fifo_tb___024root___eval(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vasync_fifo_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("async_fifo_tb.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vasync_fifo_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("async_fifo_tb.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vasync_fifo_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vasync_fifo_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vasync_fifo_tb___024root___eval_debug_assertions(Vasync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_debug_assertions\n"); );
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

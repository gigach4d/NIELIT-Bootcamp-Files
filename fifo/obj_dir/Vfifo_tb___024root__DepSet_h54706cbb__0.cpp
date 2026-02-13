// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb___024root.h"

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vfifo_tb___024root___eval_act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___nba_sequent__TOP__1(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___nba_comb__TOP__0(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0;
    // Body
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr;
    if (vlSelfRef.fifo_tb__DOT__rd_rst) {
        __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0U;
    } else if (((IData)(vlSelfRef.fifo_tb__DOT__rd_en) 
                & (~ (IData)(vlSelfRef.fifo_tb__DOT__rd_empty)))) {
        vlSelfRef.fifo_tb__DOT__rd_data = vlSelfRef.fifo_tb__DOT__uut__DOT__mem
            [vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr];
        __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr)));
    }
    vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr = __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_sequent__TOP__1(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0 = 0U;
    __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr;
    if (vlSelfRef.fifo_tb__DOT__wr_rst) {
        __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = 0U;
    } else if (((IData)(vlSelfRef.fifo_tb__DOT__wr_en) 
                & (~ (IData)(vlSelfRef.fifo_tb__DOT__wr_full)))) {
        __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0 
            = vlSelfRef.fifo_tb__DOT__wr_data;
        __VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0 
            = vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr;
        __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0 = 1U;
        __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr)));
    }
    if (__VdlySet__fifo_tb__DOT__uut__DOT__mem__v0) {
        vlSelfRef.fifo_tb__DOT__uut__DOT__mem[__VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0] 
            = __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0;
    }
    vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr = __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr;
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_comb__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_comb__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_tb__DOT__wr_full = ((7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr))) 
                                       == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr));
    vlSelfRef.fifo_tb__DOT__rd_empty = ((IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr) 
                                        == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr));
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he0567055__0.resume(
                                                   "@(posedge fifo_tb.wr_clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9919fab3__0.resume(
                                                   "@(posedge fifo_tb.rd_clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfifo_tb___024root___timing_commit(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_commit\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he0567055__0.commit(
                                                   "@(posedge fifo_tb.wr_clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9919fab3__0.commit(
                                                   "@(posedge fifo_tb.rd_clk)");
    }
}

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf);

bool Vfifo_tb___024root___eval_phase__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__act(vlSelf);
    Vfifo_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfifo_tb___024root___timing_resume(vlSelf);
        Vfifo_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfifo_tb___024root___eval_phase__nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfifo_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__nba(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vfifo_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fifo_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfifo_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fifo_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfifo_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfifo_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

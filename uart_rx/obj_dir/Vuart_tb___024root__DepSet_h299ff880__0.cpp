// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb___024root.h"

VL_ATTR_COLD void Vuart_tb___024root___eval_initial__TOP(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_initial(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial\n"); );
    // Body
    Vuart_tb___024root___eval_initial__TOP(vlSelf);
    Vuart_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelf->uart_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in;
    __Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in = 0;
    // Body
    co_await vlSelf->__VtrigSched_h24b37a55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tb.clk)", 
                                                       "uart_tb.v", 
                                                       38);
    __Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in = 0xaaU;
    vlSelf->uart_tb__DOT__rx = 0U;
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       17);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "uart_tb.v", 
                                       18);
    vlSelf->uart_tb__DOT__rx = (1U & (IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 1U;
    vlSelf->uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in) 
                                      >> 1U));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 2U;
    vlSelf->uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in) 
                                      >> 2U));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 3U;
    vlSelf->uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in) 
                                      >> 3U));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 4U;
    vlSelf->uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in) 
                                      >> 4U));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 5U;
    vlSelf->uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in) 
                                      >> 5U));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 6U;
    vlSelf->uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in) 
                                      >> 6U));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 7U;
    vlSelf->uart_tb__DOT__rx = (1U & ((IData)(__Vtask_uart_tb__DOT__UART_WRITE_BYTE__0__data_in) 
                                      >> 7U));
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       22);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = 8U;
    vlSelf->uart_tb__DOT__rx = 1U;
    co_await vlSelf->__VdlySched.delay(0xd1f60ULL, 
                                       nullptr, "uart_tb.v", 
                                       25);
    co_await vlSelf->__VtrigSched_h24b37a55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge uart_tb.clk)", 
                                                       "uart_tb.v", 
                                                       40);
    if ((0xaaU == (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_shift_reg))) {
        VL_WRITEF("Test Passed - Correct Byte Received\n");
    } else {
        VL_WRITEF("Test Failed - Incorrect Byte Received\n");
    }
    VL_FINISH_MT("uart_tb.v", 45, "");
}

VL_INLINE_OPT VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x7d0ULL, 
                                           nullptr, 
                                           "uart_tb.v", 
                                           35);
        vlSelf->__Vdlyvval__uart_tb__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->uart_tb__DOT__clk)));
        vlSelf->__Vdlyvset__uart_tb__DOT__clk__v0 = 1U;
    }
}

void Vuart_tb___024root___eval_act(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state;
    __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 0;
    CData/*7:0*/ __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt;
    __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt = 0;
    // Body
    __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt 
        = vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt;
    __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state 
        = vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state;
    if ((4U & (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state))) {
        if ((2U & (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state))) {
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state))) {
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 0U;
        } else {
            vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_valid_reg = 0U;
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state))) {
        if ((1U & (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state))) {
            if ((0xd8U > (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt))) {
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt)));
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 3U;
            } else {
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt = 0U;
                vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_valid_reg = 1U;
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 4U;
            }
        } else if ((0xd8U > (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt))) {
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt)));
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 2U;
        } else {
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt = 0U;
            vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_shift_reg 
                = (((~ ((IData)(1U) << (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt))) 
                    & (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_shift_reg)) 
                   | (0xffU & ((IData)(vlSelf->uart_tb__DOT__rx) 
                               << (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt))));
            if ((7U > (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt))) {
                vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt)));
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 2U;
            } else {
                vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt = 0U;
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state))) {
        if ((0x6cU == (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt))) {
            if (vlSelf->uart_tb__DOT__rx) {
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 0U;
            } else {
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt = 0U;
                __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 2U;
            }
        } else {
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt)));
            __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state = 1U;
        }
    } else {
        __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt = 0U;
        vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt = 0U;
        vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_valid_reg = 0U;
        __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state 
            = ((IData)(vlSelf->uart_tb__DOT__rx) ? 0U
                : 1U);
    }
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state 
        = __Vdly__uart_tb__DOT__UART_RX_INST__DOT__state;
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt 
        = __Vdly__uart_tb__DOT__UART_RX_INST__DOT__baud_cnt;
}

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__1(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__uart_tb__DOT__clk__v0) {
        vlSelf->uart_tb__DOT__clk = vlSelf->__Vdlyvval__uart_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__uart_tb__DOT__clk__v0 = 0U;
    }
}

void Vuart_tb___024root___eval_nba(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vuart_tb___024root___timing_resume(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h24b37a55__0.resume("@(posedge uart_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vuart_tb___024root___timing_commit(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h24b37a55__0.commit("@(posedge uart_tb.clk)");
    }
}

void Vuart_tb___024root___eval_triggers__act(Vuart_tb___024root* vlSelf);

bool Vuart_tb___024root___eval_phase__act(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_tb___024root___eval_triggers__act(vlSelf);
    Vuart_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vuart_tb___024root___timing_resume(vlSelf);
        Vuart_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuart_tb___024root___eval_phase__nba(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuart_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__nba(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tb___024root___eval(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vuart_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("uart_tb.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vuart_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("uart_tb.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vuart_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vuart_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuart_tb___024root___eval_debug_assertions(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

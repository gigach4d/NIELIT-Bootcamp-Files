// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb___024root.h"

VL_ATTR_COLD void Vuart_tb___024root___eval_static__TOP(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb___024root___eval_static(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_static\n"); );
    // Body
    Vuart_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vuart_tb___024root___eval_static__TOP(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->uart_tb__DOT__clk = 0U;
    vlSelf->uart_tb__DOT__rx = 1U;
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt = 0U;
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt = 0U;
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_shift_reg = 0U;
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_valid_reg = 0U;
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state = 0U;
}

VL_ATTR_COLD void Vuart_tb___024root___eval_final(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vuart_tb___024root___eval_settle(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge uart_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__nba(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge uart_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tb___024root___ctor_var_reset(Vuart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->uart_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx = VL_RAND_RESET_I(32);
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_shift_reg = VL_RAND_RESET_I(8);
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__uart_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__uart_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

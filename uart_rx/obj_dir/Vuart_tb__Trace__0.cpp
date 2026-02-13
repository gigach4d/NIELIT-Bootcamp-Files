// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tb__Syms.h"


void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuart_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_shift_reg),8);
        bufp->chgBit(oldp+1,(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__rx_valid_reg));
        bufp->chgCData(oldp+2,(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__baud_cnt),8);
        bufp->chgCData(oldp+3,(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__bit_cnt),3);
        bufp->chgCData(oldp+4,(vlSelf->uart_tb__DOT__UART_RX_INST__DOT__state),3);
    }
    bufp->chgBit(oldp+5,(vlSelf->uart_tb__DOT__clk));
    bufp->chgBit(oldp+6,(vlSelf->uart_tb__DOT__rx));
    bufp->chgIData(oldp+7,(vlSelf->uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx),32);
}

void Vuart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_cleanup\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_tb.h for the primary calling header

#ifndef VERILATED_VUART_TB___024ROOT_H_
#define VERILATED_VUART_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ uart_tb__DOT__clk;
    CData/*0:0*/ uart_tb__DOT__rx;
    CData/*7:0*/ uart_tb__DOT__UART_RX_INST__DOT__baud_cnt;
    CData/*2:0*/ uart_tb__DOT__UART_RX_INST__DOT__bit_cnt;
    CData/*7:0*/ uart_tb__DOT__UART_RX_INST__DOT__rx_shift_reg;
    CData/*0:0*/ uart_tb__DOT__UART_RX_INST__DOT__rx_valid_reg;
    CData/*2:0*/ uart_tb__DOT__UART_RX_INST__DOT__state;
    CData/*0:0*/ __Vdlyvval__uart_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__uart_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ uart_tb__DOT__UART_WRITE_BYTE__Vstatic__bit_idx;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h24b37a55__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_tb___024root(Vuart_tb__Syms* symsp, const char* v__name);
    ~Vuart_tb___024root();
    VL_UNCOPYABLE(Vuart_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

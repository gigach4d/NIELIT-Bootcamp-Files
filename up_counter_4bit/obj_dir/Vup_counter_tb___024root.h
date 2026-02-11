// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vup_counter_tb.h for the primary calling header

#ifndef VERILATED_VUP_COUNTER_TB___024ROOT_H_
#define VERILATED_VUP_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vup_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vup_counter_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ up_counter_tb__DOT__clk;
    CData/*0:0*/ up_counter_tb__DOT__reset;
    CData/*3:0*/ up_counter_tb__DOT__count;
    CData/*0:0*/ up_counter_tb__DOT____Vstrobe0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__up_counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__up_counter_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6984cf97__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vup_counter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vup_counter_tb___024root(Vup_counter_tb__Syms* symsp, const char* v__name);
    ~Vup_counter_tb___024root();
    VL_UNCOPYABLE(Vup_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

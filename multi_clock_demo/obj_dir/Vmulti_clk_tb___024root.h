// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmulti_clk_tb.h for the primary calling header

#ifndef VERILATED_VMULTI_CLK_TB___024ROOT_H_
#define VERILATED_VMULTI_CLK_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmulti_clk_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmulti_clk_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ multi_clk_tb__DOT__clk_fast;
    CData/*0:0*/ multi_clk_tb__DOT__rst;
    CData/*0:0*/ multi_clk_tb__DOT__clk_slow;
    CData/*0:0*/ multi_clk_tb__DOT__sel;
    CData/*0:0*/ multi_clk_tb__DOT__muxed_clk;
    CData/*0:0*/ multi_clk_tb__DOT__clk_div4;
    CData/*1:0*/ multi_clk_tb__DOT__u_div__DOT__counter;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmulti_clk_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmulti_clk_tb___024root(Vmulti_clk_tb__Syms* symsp, const char* v__name);
    ~Vmulti_clk_tb___024root();
    VL_UNCOPYABLE(Vmulti_clk_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

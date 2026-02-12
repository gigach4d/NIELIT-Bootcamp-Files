// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux2x1_tb.h for the primary calling header

#ifndef VERILATED_VMUX2X1_TB___024ROOT_H_
#define VERILATED_VMUX2X1_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmux2x1_tb___024unit;


class Vmux2x1_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux2x1_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmux2x1_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux2x1_tb__DOT__sel;
    CData/*0:0*/ mux2x1_tb__DOT__out;
    CData/*1:0*/ mux2x1_tb__DOT__in;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__mux2x1_tb__DOT__in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux2x1_tb__DOT__out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux2x1_tb__DOT__sel__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux2x1_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux2x1_tb___024root(Vmux2x1_tb__Syms* symsp, const char* v__name);
    ~Vmux2x1_tb___024root();
    VL_UNCOPYABLE(Vmux2x1_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

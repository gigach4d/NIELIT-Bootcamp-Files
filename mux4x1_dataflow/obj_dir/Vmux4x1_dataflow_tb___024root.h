// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux4x1_dataflow_tb.h for the primary calling header

#ifndef VERILATED_VMUX4X1_DATAFLOW_TB___024ROOT_H_
#define VERILATED_VMUX4X1_DATAFLOW_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux4x1_dataflow_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux4x1_dataflow_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ mux4x1_dataflow_tb__DOT__in;
    CData/*1:0*/ mux4x1_dataflow_tb__DOT__sel;
    CData/*0:0*/ mux4x1_dataflow_tb__DOT__out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux4x1_dataflow_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux4x1_dataflow_tb___024root(Vmux4x1_dataflow_tb__Syms* symsp, const char* v__name);
    ~Vmux4x1_dataflow_tb___024root();
    VL_UNCOPYABLE(Vmux4x1_dataflow_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

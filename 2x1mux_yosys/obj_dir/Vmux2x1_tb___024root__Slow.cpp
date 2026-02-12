// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2x1_tb.h for the primary calling header

#include "Vmux2x1_tb__pch.h"
#include "Vmux2x1_tb__Syms.h"
#include "Vmux2x1_tb___024root.h"

void Vmux2x1_tb___024root___ctor_var_reset(Vmux2x1_tb___024root* vlSelf);

Vmux2x1_tb___024root::Vmux2x1_tb___024root(Vmux2x1_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux2x1_tb___024root___ctor_var_reset(this);
}

void Vmux2x1_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmux2x1_tb___024root::~Vmux2x1_tb___024root() {
}

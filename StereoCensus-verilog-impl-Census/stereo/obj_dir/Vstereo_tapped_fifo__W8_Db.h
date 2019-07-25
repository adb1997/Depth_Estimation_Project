// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstereo.h for the primary calling header

#ifndef _Vstereo_tapped_fifo__W8_Db_H_
#define _Vstereo_tapped_fifo__W8_Db_H_

#include "verilated.h"

class Vstereo__Syms;

//----------

VL_MODULE(Vstereo_tapped_fifo__W8_Db) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(inp,7,0);
    VL_OUT8(outp,7,0);
    VL_OUTW(taps,87,0,3);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__regs[11],7,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vcellout__sr0____pinNumber4,7,0);
    VL_SIG8(shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    VL_SIG8(shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber4,7,0);
    
    // INTERNAL VARIABLES
  private:
    Vstereo__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vstereo_tapped_fifo__W8_Db& operator= (const Vstereo_tapped_fifo__W8_Db&);  ///< Copying not allowed
    Vstereo_tapped_fifo__W8_Db(const Vstereo_tapped_fifo__W8_Db&);  ///< Copying not allowed
  public:
    Vstereo_tapped_fifo__W8_Db(const char* name="TOP");
    ~Vstereo_tapped_fifo__W8_Db();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vstereo__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf__34(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf__25(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf__26(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf__27(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf__28(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf__29(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf__30(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf__31(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf__32(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf__33(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__left_buf__DOT__tf__23(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf__44(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf__35(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf__36(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf__37(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf__38(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf__39(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf__40(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf__41(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf__42(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf__43(Vstereo__Syms* __restrict vlSymsp);
    void _sequent__TOP__stereo__DOT__right_buf__DOT__tf__24(Vstereo__Syms* __restrict vlSymsp);
    void _settle__TOP__stereo__DOT__left_buf__DOT__tf__1(Vstereo__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard

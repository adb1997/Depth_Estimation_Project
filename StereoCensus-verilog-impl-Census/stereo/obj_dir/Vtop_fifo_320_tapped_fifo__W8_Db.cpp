// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_fifo_320.h for the primary calling header

#include "Vtop_fifo_320_tapped_fifo__W8_Db.h" // For This
#include "Vtop_fifo_320__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_fifo_320_tapped_fifo__W8_Db) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_fifo_320_tapped_fifo__W8_Db::__Vconfigure(Vtop_fifo_320__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_fifo_320_tapped_fifo__W8_Db::~Vtop_fifo_320_tapped_fifo__W8_Db() {
}

//--------------------
// Internal Methods

void Vtop_fifo_320_tapped_fifo__W8_Db::_settle__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__tf__1(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_settle__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__tf__1\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,95,0,3);
    // Body
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp1[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp1[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp1[0U];
    this->taps[1U] = __Vtemp1[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__tf__23(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__tf__23\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : (IData)(vlTOPp->top_fifo_320__DOT__fifoL__DOT__data0_reg)));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp2[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp2[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp2[0U];
    this->taps[1U] = __Vtemp2[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf__25(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__tf__25\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp3,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__1__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp3[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp3[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp3[0U];
    this->taps[1U] = __Vtemp3[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf__26(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__tf__26\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp4,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__2__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp4[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp4[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp4[0U];
    this->taps[1U] = __Vtemp4[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf__27(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__tf__27\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp5,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__3__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp5[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp5[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp5[0U];
    this->taps[1U] = __Vtemp5[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf__28(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__tf__28\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp6,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__4__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp6[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp6[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp6[0U];
    this->taps[1U] = __Vtemp6[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf__29(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__tf__29\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp7,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__5__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp7[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp7[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp7[0U];
    this->taps[1U] = __Vtemp7[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf__30(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__tf__30\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp8,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__6__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp8[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp8[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp8[0U];
    this->taps[1U] = __Vtemp8[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf__31(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__tf__31\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp9,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__7__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp9[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U]))))))) 
				    << 0x18U)) | ((
						   this->__PVT__regis
						   [8U] 
						   << 0x10U) 
						  | ((this->__PVT__regis
						      [9U] 
						      << 8U) 
						     | this->__PVT__regis
						     [0xaU])));
    __Vtemp9[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							    ((this->__PVT__regis
							      [0U] 
							      << 0x18U) 
							     | ((this->__PVT__regis
								 [1U] 
								 << 0x10U) 
								| ((this->__PVT__regis
								    [2U] 
								    << 8U) 
								   | this->__PVT__regis
								   [3U]))))) 
					    << 0x20U) 
					   | (QData)((IData)(
							     ((this->__PVT__regis
							       [4U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [5U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [6U] 
								     << 8U) 
								    | this->__PVT__regis
								    [7U]))))))) 
				  >> 8U)) | (0xff000000U 
					     & ((IData)(
							((((QData)((IData)(
									   ((this->__PVT__regis
									     [0U] 
									     << 0x18U) 
									    | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
									       | ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((this->__PVT__regis
									      [4U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							 >> 0x20U)) 
						<< 0x18U)));
    this->taps[0U] = __Vtemp9[0U];
    this->taps[1U] = __Vtemp9[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf__32(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__tf__32\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp10,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__8__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp10[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp10[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp10[0U];
    this->taps[1U] = __Vtemp10[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf__33(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__tf__33\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp11,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__9__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp11[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp11[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp11[0U];
    this->taps[1U] = __Vtemp11[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf__34(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__tf__34\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp12,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__left_buf__DOT__lines__BRA__10__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp12[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp12[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp12[0U];
    this->taps[1U] = __Vtemp12[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__tf__24(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__tf__24\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp13,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : (IData)(vlTOPp->top_fifo_320__DOT__fifoR__DOT__data0_reg)));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp13[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp13[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp13[0U];
    this->taps[1U] = __Vtemp13[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf__35(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__tf__35\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp14,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__1__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp14[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp14[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp14[0U];
    this->taps[1U] = __Vtemp14[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf__36(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__tf__36\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp15,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__2__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp15[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp15[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp15[0U];
    this->taps[1U] = __Vtemp15[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf__37(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__tf__37\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp16,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__3__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp16[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp16[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp16[0U];
    this->taps[1U] = __Vtemp16[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf__38(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__tf__38\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp17,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__4__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp17[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp17[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp17[0U];
    this->taps[1U] = __Vtemp17[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf__39(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__tf__39\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp18,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__5__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp18[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp18[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp18[0U];
    this->taps[1U] = __Vtemp18[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf__40(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__tf__40\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp19,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__6__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp19[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp19[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp19[0U];
    this->taps[1U] = __Vtemp19[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf__41(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__tf__41\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp20,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__7__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp20[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp20[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp20[0U];
    this->taps[1U] = __Vtemp20[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf__42(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__tf__42\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp21,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__8__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp21[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp21[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp21[0U];
    this->taps[1U] = __Vtemp21[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf__43(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__tf__43\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp22,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__9__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp22[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp22[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp22[0U];
    this->taps[1U] = __Vtemp22[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

VL_INLINE_OPT void Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf__44(Vtop_fifo_320__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_sequent__TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__tf__44\n"); );
    Vtop_fifo_320* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp23,95,0,3);
    // Body
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->__Vcellout__sr0____pinNumber5 = (0xffU 
					       & ((IData)(vlTOPp->rst)
						   ? 0U
						   : 
						  vlSymsp->TOP__top_fifo_320__DOT__stereo1__DOT__right_buf__DOT__lines__BRA__10__KET____DOT__f.__PVT__regi
						  [0x134U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[0U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[1U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[2U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[3U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[4U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[5U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[6U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[7U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[8U]));
    }
    // ALWAYS at census_fifo_320//dff.v:41
    if (vlTOPp->top_fifo_320__DOT__enable) {
	this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 
	    = (0xffU & ((IData)(vlTOPp->rst) ? 0U : 
			this->__PVT__regis[9U]));
    }
    this->__PVT__regis[0U] = this->__Vcellout__sr0____pinNumber5;
    this->__PVT__regis[1U] = this->shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[2U] = this->shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[3U] = this->shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[4U] = this->shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[5U] = this->shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[6U] = this->shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[7U] = this->shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[8U] = this->shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[9U] = this->shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5;
    this->__PVT__regis[0xaU] = this->shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5;
    __Vtemp23[0U] = ((0xff000000U & ((IData)((((QData)((IData)(
							       ((this->__PVT__regis
								 [0U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [1U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [2U] 
								       << 8U) 
								      | this->__PVT__regis
								      [3U]))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((this->__PVT__regis
								  [4U] 
								  << 0x18U) 
								 | ((this->__PVT__regis
								     [5U] 
								     << 0x10U) 
								    | ((this->__PVT__regis
									[6U] 
									<< 8U) 
								       | this->__PVT__regis
								       [7U]))))))) 
				     << 0x18U)) | (
						   (this->__PVT__regis
						    [8U] 
						    << 0x10U) 
						   | ((this->__PVT__regis
						       [9U] 
						       << 8U) 
						      | this->__PVT__regis
						      [0xaU])));
    __Vtemp23[1U] = ((0xffffffU & ((IData)((((QData)((IData)(
							     ((this->__PVT__regis
							       [0U] 
							       << 0x18U) 
							      | ((this->__PVT__regis
								  [1U] 
								  << 0x10U) 
								 | ((this->__PVT__regis
								     [2U] 
								     << 8U) 
								    | this->__PVT__regis
								    [3U]))))) 
					     << 0x20U) 
					    | (QData)((IData)(
							      ((this->__PVT__regis
								[4U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [5U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [6U] 
								      << 8U) 
								     | this->__PVT__regis
								     [7U]))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((((QData)((IData)(
									    ((this->__PVT__regis
									      [0U] 
									      << 0x18U) 
									     | ((this->__PVT__regis
										[1U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[2U] 
										<< 8U) 
										| this->__PVT__regis
										[3U]))))) 
							    << 0x20U) 
							   | (QData)((IData)(
									     ((this->__PVT__regis
									       [4U] 
									       << 0x18U) 
									      | ((this->__PVT__regis
										[5U] 
										<< 0x10U) 
										| ((this->__PVT__regis
										[6U] 
										<< 8U) 
										| this->__PVT__regis
										[7U])))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    this->taps[0U] = __Vtemp23[0U];
    this->taps[1U] = __Vtemp23[1U];
    this->taps[2U] = (0xffffffU & ((IData)(((((QData)((IData)(
							      ((this->__PVT__regis
								[0U] 
								<< 0x18U) 
							       | ((this->__PVT__regis
								   [1U] 
								   << 0x10U) 
								  | ((this->__PVT__regis
								      [2U] 
								      << 8U) 
								     | this->__PVT__regis
								     [3U]))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((this->__PVT__regis
								 [4U] 
								 << 0x18U) 
								| ((this->__PVT__regis
								    [5U] 
								    << 0x10U) 
								   | ((this->__PVT__regis
								       [6U] 
								       << 8U) 
								      | this->__PVT__regis
								      [7U])))))) 
					    >> 0x20U)) 
				   >> 8U));
}

void Vtop_fifo_320_tapped_fifo__W8_Db::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_fifo_320_tapped_fifo__W8_Db::_ctor_var_reset\n"); );
    // Body
    en = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    inp = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(88,taps);
    outp = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
	    __PVT__regis[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __Vcellout__sr0____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__0__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__1__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__2__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__3__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__4__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__5__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__6__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__7__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__8__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
    shift__BRA__9__KET____DOT____Vcellout__sr____pinNumber5 = VL_RAND_RESET_I(8);
}

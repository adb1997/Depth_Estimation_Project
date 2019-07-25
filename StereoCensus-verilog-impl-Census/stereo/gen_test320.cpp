/*  Test for the basic stereo vision core for 320 x 240 
 *
 *  Run the test with:
 *    Vcensus_basic [left file] [right file]
 *
 *  Where left file and right file are two equal length files containing the
 *  values from the left 'camera' and right 'camera'. The computed disparities
 *  will be written directly to stdout. Redirect as needed.
 *
 *  Recommend the "to_dat.py" and "from_dat.py" scripts in this directory to
 *  transform images to and from this format.
 *
 */

// #define VM_TRACE 1

#include <iostream>
#include <fstream>
#include <cstdlib>

#include "Vtop_fifo_320.h"
#include "verilated.h"

#if VM_TRACE
#include "verilated_vcd_c.h" 
#endif

void usage() {
  std::cout << "Usage: ";
  std::cout << "  Vcensus_basic [left file] [right file]";
}

int main(int argc, char **argv, char **env) {
  Verilated::commandArgs(argc, argv);
  Vtop_fifo_320* dut = new Vtop_fifo_320;
#if VM_TRACE
  // Init VCD trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  dut->trace (tfp, 99);
  // tfp->spTrace()->set_time_resolution ("1 ps");
  tfp->open ("Trace.vcd");
#endif

  int tick = 0;
  int cycle = 0;
  int lval = 0;
  int rval = 0;
  
  //dut->full_nL=0;
  //dut->full_nR=0;
  //dut->out_empty_n=1;

	
  if (argc != 3) {
    usage();
    exit(1);
  }

  std::ifstream left(argv[1], std::ifstream::in);
  std::ifstream right(argv[2], std::ifstream::in);

  int pixelCount = 0;

  while(!Verilated::gotFinish() && left.good() && right.good()) 
  {
    dut->eval();
#if VM_TRACE
    tfp->dump (tick);
#endif

    // if (0 == tick % 2) {
    //     std::cout << "clock [" << tick << "]" << std::endl;
    // }

    // if (tick == 10000) {
    //     break;
    // }
	
#if 1	
    dut->clk = tick%2 == 0;
    if (tick%2) cycle++;
    tick++;
    if (!(tick%2 == 0)) continue;

    // Reset
    if ( cycle <= 1 ) 
    {
      dut->rst = 1;
      continue;
    } 
    else 
    {
      dut->rst = 0;

      //std::cout << "Not Full Left: " << int(dut->full_nL) << std::endl;
      //std::cout << "Not Full Right: " << int(dut->full_nR) << std::endl;


      if (dut->full_nL && dut->full_nR) 
      { 
        dut->enqL=1;
        dut->enqR=1;
        left >> lval;
        dut->din_L = lval;
        right >> rval;
        dut->din_R = rval;
        //std::cout << "sending pixel number [" << pixelCount << "]" << std::endl;
        pixelCount++;
      }

      //std::cout << "Out Empty Not: " << int(dut->out_empty_n) << std::endl;           
      

      if(dut->out_empty_n) 
      {
        dut->out_deq=1;
        std::cout << int(dut->dout) << std::endl;
        //std::cout << "dequeuing from out fifo" << std::endl;
      }
    }
  #endif
  }

#if VM_TRACE
  if (tfp) tfp->close();
#endif
  
  left.close();
  right.close();
  exit(0);
}

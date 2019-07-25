/*  Test for the basic stereo vision core for 640 x 480
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

#include <iostream>
#include <fstream>
#include <cstdlib>

#include "Vstereo.h"
#include "verilated.h"

void usage() {
  std::cout << "Usage: ";
  std::cout << "  Vcensus_basic [left file] [right file]";
}

int main(int argc, char **argv, char **env) {
  Verilated::commandArgs(argc, argv);
  Vstereo* dut = new Vstereo;
  int tick = 0;
  int cycle = 0;
  int lval = 0;
  int rval = 0;

  if (argc != 3) {
    usage();
    exit(1);
  }

  std::ifstream left(argv[1], std::ifstream::in);
  std::ifstream right(argv[2], std::ifstream::in);

  while(!Verilated::gotFinish() && left.good() && right.good()) {
    dut->eval();
    dut->clk = tick%2 == 0;
    if (tick%2) cycle++;
    tick++;
    if (!(tick%2 == 0)) continue;

    // Reset
    if ( cycle <= 1 ) {
      dut->rst = 1;
      continue;
    } else {
      dut->rst = 0;
    }

    left >> lval;
    dut->inp_left = lval;
    right >> rval;
    dut->inp_right = rval;

    std::cout << int(dut->outp) << std::endl;

  }
  left.close();
  right.close();
  exit(0);
}

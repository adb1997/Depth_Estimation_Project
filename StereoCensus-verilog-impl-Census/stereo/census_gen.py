#!/usr/bin/python3
# census_gen.py
#
# From some command-line options generates a stereo vision census verilog
# module.

import getopt
import math
import sys


# The header format string expects:
#   bit_width:     the number of bits in the input stream
#   max_disparity: maximum disparity searching for (used to determine output
#                  width)
#   window_height: the window height
#   window_width: the window width
#   count_width: the width needed for the counter
_HEADER = """
`ifndef STEREO_CENSUS_V_
`define STEREO_CENSUS_V_

`include "line_buffer.v"
`include "census.v"
`include "pop_count_{count_width}.v" // Generated
`include "argmin_{max_disparity}.v" // Generated

module stereo (
    input wire clk,
    input wire rst,

    input wire [{bit_width}-1:0] inp_left,
    input wire [{bit_width}-1:0] inp_right,

    output wire [$clog2({max_disparity})-1:0] outp
  );

  localparam WIDTH = {bit_width};
  localparam WIN_WIDTH = {window_width};
  localparam WIN_HEIGHT = {window_height};
  localparam WIN_SIZE = {window_width}*{window_height};
  localparam DISPARITY = {max_disparity};
"""

# Census is the fragment of the verilog that buffers the input from the cameras,
# and creates the census counts for each window.
# Parameters:
#   line_length: Width of the image.
_CENSUS = """
  wire [(WIDTH*WIN_SIZE-1):0] left_window;
  wire [(WIDTH*WIN_SIZE-1):0] right_window;

  line_buffer#(.WIDTH(WIDTH), .LINE_LENGTH({line_length}),
               .NUM_LINES(WIN_HEIGHT), .WINDOW_WIDTH(WIN_WIDTH))
    left_buf(clk, rst, inp_left, left_window);

  line_buffer#(.WIDTH(WIDTH), .LINE_LENGTH({line_length}),
               .NUM_LINES(WIN_HEIGHT), .WINDOW_WIDTH(WIN_WIDTH))
    right_buf(clk, rst, inp_right, right_window);

  wire [WIN_SIZE-1:0] left_census;
  wire [WIN_SIZE-1:0] right_census;

  census#(.WIDTH(WIDTH), .WINDOW_WIDTH(WIN_WIDTH), .WINDOW_HEIGHT(WIN_HEIGHT))
    lcensus(clk, rst, left_window, left_census);

  census#(.WIDTH(WIDTH), .WINDOW_WIDTH(WIN_WIDTH), .WINDOW_HEIGHT(WIN_HEIGHT))
    rcensus(clk, rst, right_window, right_census);

  wire [(WIN_SIZE*DISPARITY-1):0] left_census_history;
  wire [WIN_SIZE-1:0] unused;

  tapped_fifo#(.WIDTH(WIN_SIZE), .DEPTH(DISPARITY))
    census_samples(clk, rst, left_census, left_census_history, unused);

  // Unpack the values of the census history.
  wire [WIN_SIZE-1:0] left_unpacked[DISPARITY];
  genvar i;
  generate
    for (i = 0; i < DISPARITY; i++) begin : unpack
      assign left_unpacked[i] =
        left_census_history[(WIN_SIZE*(i+1)-1):(WIN_SIZE*i)];
    end
  endgenerate
"""

# Hamming computes MAX_DISPARITY hamming distances.
# Paramters:
#   count_width: Width of the population counter. clog2(WIN_SIZE)
_HAMMING = """
  // Compute the hamming distances.
  wire [{count_width}-1:0] hamming_distance[DISPARITY];
  generate
    for (i = 0; i < DISPARITY; i++) begin: ham
      pop_count_{count_width}#(.WIDTH(WIN_SIZE))
        count(clk, rst, right_census ^ left_unpacked[i], hamming_distance[i]);
    end
  endgenerate

  // Repack the hamming distances to feed them into the argmin.
  wire [({count_width}*DISPARITY-1):0] packed_ham;
  generate
    for (i = 0; i < DISPARITY; i++) begin: pack
      assign packed_ham[({count_width}*(i+1)-1):({count_width}*i)] = 
        hamming_distance[i];
    end
  endgenerate
"""

# Disparity takes the hamming windows, and creates the output.
# Parameters:
#  count_width
#  max_disparity
_DISPARITY = """
  wire [{count_width}-1:0] unused_min;
  argmin_{max_disparity}#(.WIDTH({count_width}))
    amin(clk, rst, packed_ham, unused_min, outp);
"""

# Footer ends the file.
_FOOTER = """
endmodule

`endif // STEREO_CENSUS_V_"""


usage = 'census_gen.py -b 8 -d 100 -h 20 -w 20 -l 450 -- Read the source.'


def clog2(n):
    return int(math.ceil(math.log(n, 2)))


def main(argv):
    try:
        opts, args = getopt.getopt(argv,
                                   "b:d:h:w:l:", ["bit_width=",
                                                  "max_disparty=",
                                                  "window_height=",
                                                  "window_width=",
                                                  "line_length="])
    except getopt.GetoptError:
        print(usage)
        sys.exit(2)
    for opt, arg in opts:
        if opt in ('-b', '--bit_width'):
            bit_width = int(arg)
        elif opt in ('-d', '--max_disparity'):
            max_disparity = int(arg)
        elif opt in ('-h', '--window_height'):
            window_height = int(arg)
        elif opt in ('-w', '--window_width'):
            window_width = int(arg)
        elif opt in ('-l', '--line_length'):
            line_length = int(arg)
        else:
            print(usage)
            sys.exit(2)

    count_width = clog2(window_width * window_height)
    print(_HEADER.format(bit_width=bit_width, max_disparity=max_disparity,
                         window_height=window_height, window_width=window_width,
                         count_width=count_width))
    print(_CENSUS.format(line_length=line_length))
    print(_HAMMING.format(count_width=count_width))
    print(_DISPARITY.format(count_width=count_width,
                            max_disparity=max_disparity))
    print(_FOOTER)

if __name__ == '__main__':
    main(sys.argv[1:])

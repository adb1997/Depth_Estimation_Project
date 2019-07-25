// Stereo Correspondence calculation for 320x240 

`ifndef STEREO_CENSUS_V_
`define STEREO_CENSUS_V_

`include "line_buffer.v"
`include "census.v"
`include "pop_count_7.v" // Generated
`include "argmin_80.v" // Generated

module stereo320 (
	input wire en,
    input wire clk,
    input wire rst,

    input wire [8-1:0] inp_left,
    input wire [8-1:0] inp_right,

    output wire [$clog2(80)-1:0] outp
  );

  localparam WIDTH = 8;
  localparam WIN_WIDTH = 11;
  localparam WIN_HEIGHT = 11;
  localparam WIN_SIZE = 11*11;
  localparam DISPARITY = 80;


  wire [(WIDTH*WIN_SIZE-1):0] left_window;
  wire [(WIDTH*WIN_SIZE-1):0] right_window;

  line_buffer#(.WIDTH(WIDTH), .LINE_LENGTH(320),
               .NUM_LINES(WIN_HEIGHT), .WINDOW_WIDTH(WIN_WIDTH))
    left_buf(en, clk, rst, inp_left, left_window);

  line_buffer#(.WIDTH(WIDTH), .LINE_LENGTH(320),
               .NUM_LINES(WIN_HEIGHT), .WINDOW_WIDTH(WIN_WIDTH))
    right_buf(en, clk, rst, inp_right, right_window);

  wire [WIN_SIZE-1:0] left_census;
  wire [WIN_SIZE-1:0] right_census;

  census#(.WIDTH(WIDTH), .WINDOW_WIDTH(WIN_WIDTH), .WINDOW_HEIGHT(WIN_HEIGHT))
    lcensus(en,clk, rst, left_window, left_census);

  census#(.WIDTH(WIDTH), .WINDOW_WIDTH(WIN_WIDTH), .WINDOW_HEIGHT(WIN_HEIGHT))
    rcensus(en, clk, rst, right_window, right_census);

  wire [(WIN_SIZE*DISPARITY-1):0] left_census_history;
  wire [WIN_SIZE-1:0] unused;

  tapped_fifo#(.WIDTH(WIN_SIZE), .DEPTH(DISPARITY))
    census_samples(en, clk, rst, left_census, left_census_history, unused);

  // Unpack the values of the census history.
  wire [WIN_SIZE-1:0] left_unpacked[DISPARITY-1:0];
  genvar i;
  generate
    for (i = 0; i < DISPARITY; i=i+1) begin : unpack
      assign left_unpacked[i] =
        left_census_history[(WIN_SIZE*(i+1)-1):(WIN_SIZE*i)];
    end
  endgenerate


  // Compute the hamming distances.
  wire [7-1:0] hamming_distance[DISPARITY-1:0];
  generate
    for (i = 0; i < DISPARITY; i=i+1) begin: ham
      pop_count_7#(.WIDTH(WIN_SIZE))
        count(en, clk, rst, right_census ^ left_unpacked[i], hamming_distance[i]);
    end
  endgenerate

  // Repack the hamming distances to feed them into the argmin.
  wire [(7*DISPARITY-1):0] packed_ham;
  generate
    for (i = 0; i < DISPARITY; i=i+1) begin: pack
      assign packed_ham[(7*(i+1)-1):(7*i)] =
        hamming_distance[i];
    end
  endgenerate


  wire [7-1:0] unused_min;
  argmin_80#(.WIDTH(7))
    amin(en, clk, rst, packed_ham, unused_min, outp);


endmodule

`endif // STEREO_CENSUS_V_

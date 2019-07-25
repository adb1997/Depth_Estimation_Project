
`include "census.v"

module census_test(
  input clk,
  input rst,
  input wire  [(32*5*5-1):0] inp,
  output wire [(5*5-1):0] outp
  );

  census#(.WIDTH(32), .WINDOW_WIDTH(5), .WINDOW_HEIGHT(5)) 
    ct(clk, rst, inp, outp);

endmodule

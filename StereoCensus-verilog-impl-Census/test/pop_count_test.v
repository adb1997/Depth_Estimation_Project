
`include "pop_count_7.v"

module pop_count_test(
  input clk,
  input rst,
  input wire  [31:0] inp,
  output wire [4:0] outp
  );

  pop_count_7#(.WIDTH(32)) pc(clk, rst, inp, outp);

endmodule

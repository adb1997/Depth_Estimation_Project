
`include "argmin_10.v"

module argmin_test(
  input clk,
  input rst,
  input wire  [10*32-1:0] inp,
  output wire [31:0] outp,
  output wire [3:0] outp_addr
  );

  argmin_10#(.WIDTH(32)) am(clk, rst, inp, outp, outp_addr);

endmodule

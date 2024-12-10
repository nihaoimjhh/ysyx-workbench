module ysyx_24090003_ITF(
    input [31:0]inst,
    output [2:0]Itype
);
assign Itype = (inst[6:0]==7'b0010011)?3'b001:
                3'b001;//addi



endmodule
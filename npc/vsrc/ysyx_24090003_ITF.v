(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module
module ysyx_24090003_ITF(
    input [6:0]inst,
    output [2:0]Itype
);
assign Itype = (inst[6:0]==7'b0010011)?3'b001:
               (inst[6:0]==7'b1110011)?3'b000:
               3'b000;//addi



endmodule

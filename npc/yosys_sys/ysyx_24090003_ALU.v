
module ysyx_24090003_ALU(
    input [31:0] operand1,
    input [31:0] operand2,
    input [2:0] alu_control,
    output [31:0] result
);
    
    assign result=(alu_control==3'b000)?operand1+operand2:32'b0;
            
endmodule
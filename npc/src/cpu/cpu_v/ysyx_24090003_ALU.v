`include "ysyx_24090003_define.v"
module ysyx_24090003_ALU (
    input      [31:0] i_op1,     
    input      [31:0] i_op2,  
    input      [ 3:0] i_alu_op,  
    output reg [31:0] o_result,  
    output            o_zero    
);
  wire [31:0] w_add_result;
  wire [31:0] w_sub_result;
  wire        w_overflow;  
  wire        w_carry_out; 
  wire [31:0] w_sll_result;
  wire [31:0] w_srl_result;
  wire [31:0] w_sra_result;
  wire        w_slt_result;
  wire        w_sltu_result;
  adder_32bit adder (
      .a(i_op1),
      .b(i_op2),
      .cin(1'b0),
      .sum(w_add_result),
      .cout(w_carry_out)
  );
  wire [31:0] w_op2_not = ~i_op2;
  wire [31:0] w_op2_not_plus_1;
  adder_32bit adder_sub (
      .a   (i_op1),
      .b   (w_op2_not),
      .cin (1'b1),
      .sum (w_sub_result),
      .cout()
  );
  // 有符号和无符号比较
  assign w_slt_result  = (i_op1[31] != i_op2[31]) ? i_op1[31] : w_sub_result[31];
  assign w_sltu_result = (i_op1 < i_op2) ? 1'b1 : 1'b0; 

  // 左移实现 (桶形移位器)
  wire [31:0] w_sll_level1 = i_op2[0] ? {i_op1[30:0], 1'b0} : i_op1;
  wire [31:0] w_sll_level2 = i_op2[1] ? {w_sll_level1[29:0], 2'b00} : w_sll_level1;
  wire [31:0] w_sll_level3 = i_op2[2] ? {w_sll_level2[27:0], 4'b0000} : w_sll_level2;
  wire [31:0] w_sll_level4 = i_op2[3] ? {w_sll_level3[23:0], 8'b00000000} : w_sll_level3;
  wire [31:0] w_sll_level5 = i_op2[4] ? {w_sll_level4[15:0], 16'b0000000000000000} : w_sll_level4;
  assign w_sll_result = w_sll_level5;

  // 逻辑右移实现
  wire [31:0] w_srl_level1 = i_op2[0] ? {1'b0, i_op1[31:1]} : i_op1;
  wire [31:0] w_srl_level2 = i_op2[1] ? {2'b00, w_srl_level1[31:2]} : w_srl_level1;
  wire [31:0] w_srl_level3 = i_op2[2] ? {4'b0000, w_srl_level2[31:4]} : w_srl_level2;
  wire [31:0] w_srl_level4 = i_op2[3] ? {8'b00000000, w_srl_level3[31:8]} : w_srl_level3;
  wire [31:0] w_srl_level5 = i_op2[4] ? {16'b0000000000000000, w_srl_level4[31:16]} : w_srl_level4;
  assign w_srl_result = w_srl_level5;

  // 算术右移实现
  wire w_sign_bit = i_op1[31];
  wire [31:0] w_sra_level1 = i_op2[0] ? {w_sign_bit, i_op1[31:1]} : i_op1;
  wire [31:0] w_sra_level2 = i_op2[1] ? {{2{w_sign_bit}}, w_sra_level1[31:2]} : w_sra_level1;
  wire [31:0] w_sra_level3 = i_op2[2] ? {{4{w_sign_bit}}, w_sra_level2[31:4]} : w_sra_level2;
  wire [31:0] w_sra_level4 = i_op2[3] ? {{8{w_sign_bit}}, w_sra_level3[31:8]} : w_sra_level3;
  wire [31:0] w_sra_level5 = i_op2[4] ? {{16{w_sign_bit}}, w_sra_level4[31:16]} : w_sra_level4;
  assign w_sra_result = w_sra_level5;

  // ALU结果选择
  always @(*) begin
    case (i_alu_op)
      `ALU_ADD:  o_result = w_add_result;
      `ALU_SUB:  o_result = w_sub_result;
      `ALU_AND:  o_result = i_op1 & i_op2;
      `ALU_OR:   o_result = i_op1 | i_op2;
      `ALU_XOR:  o_result = i_op1 ^ i_op2;
      `ALU_SLL:  o_result = w_sll_result;
      `ALU_SRL:  o_result = w_srl_result;
      `ALU_SRA:  o_result = w_sra_result;
      `ALU_SLT:  o_result = {31'b0, w_slt_result};
      `ALU_SLTU: o_result = {31'b0, w_sltu_result};
      `ALU_LUI:  o_result = i_op2;
      default:   o_result = w_add_result;
    endcase
  end
  assign o_zero = (o_result == 32'b0);

endmodule

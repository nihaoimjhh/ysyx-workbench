module adder_32bit (
    input [31:0] a,
    input [31:0] b,
    input cin,
    output [31:0] sum,
    output cout
);
  wire [32:0] carry;
  assign carry[0] = cin;

  // 串联32个全加器
  genvar i;
  generate
    for (i = 0; i < 32; i = i + 1) begin : gen_adders
      full_adder fa (
          .a(a[i]),
          .b(b[i]),
          .cin(carry[i]),
          .sum(sum[i]),
          .cout(carry[i+1])
      );
    end
  endgenerate

  assign cout = carry[32];
endmodule

// 全加器模块 - 使用半加器和与非门实现
module full_adder (
    input  a,
    input  b,
    input  cin,
    output sum,
    output cout
);
  wire sum1, carry1;
  wire sum2, carry2;

  // 第一个半加器处理a和b
  half_adder ha1 (
      .a(a),
      .b(b),
      .sum(sum1),
      .carry(carry1)
  );

  // 第二个半加器处理sum1和cin
  half_adder ha2 (
      .a(sum1),
      .b(cin),
      .sum(sum),
      .carry(carry2)
  );

  // 最终进位 = 第一个半加器的进位 OR 第二个半加器的进位
  // 用与非门实现OR: ~(~x & ~y) = x | y
  wire not_carry1 = ~carry1;
  wire not_carry2 = ~carry2;
  assign cout = ~(not_carry1 & not_carry2);
endmodule

// 32位加法器模块 - 使用全加器实现

module half_adder (
    input  a,
    input  b,
    output sum,
    output carry
);
  // 使用与非门实现异或(XOR)和与(AND)
  wire nand_ab;
  wire nand_a_nand_ab;
  wire nand_b_nand_ab;

  assign nand_ab = ~(a & b);  // NAND(a, b)
  assign nand_a_nand_ab = ~(a & nand_ab);  // NAND(a, NAND(a, b))
  assign nand_b_nand_ab = ~(b & nand_ab);  // NAND(b, NAND(a, b))
  assign sum = ~(nand_a_nand_ab & nand_b_nand_ab);  // NAND(NAND(a, NAND(a,b)), NAND(b, NAND(a,b)))
  assign carry = ~nand_ab;  // NOT(NAND(a, b)) = AND(a, b)
endmodule

module ysyx_24090003_IDU(
    input [31:0] inst,
    input  cpu_clk,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [6:0] opcode,
    output [2:0] funct,
    output [31:0] imm
);
assign rs1 = inst[19:15];
assign rs2 = inst[24:20];
assign rd = inst[11:7];
assign opcode = inst[6:0];
ysyx_24090003_ImmT ysyx_24090003_immT(
    .inst(inst),
    .imm(imm)
);




endmodule
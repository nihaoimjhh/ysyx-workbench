(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module
module ysyx_24090003_cpu(
    input cpu_clk,
    input cpu_rs,
    input [31:0]addr_read_data,
    output [31:0]npc,
    output [31:0]addr_write_data,
    output [31:0]EXaddr,
    output addr_write_enable
    );
wire [31:0] imm;
wire [31:0] inst;
wire [4:0]rs1;
wire [4:0]rs2;
wire [4:0]rd;
wire [6:0]opcode;
wire [2:0]funct;
wire [31:0] reg_write_data;
wire reg_write_enable;
wire npc_write_enable;
wire spc_write_enable;
wire [31:0] reg_read_data1;
wire [31:0] reg_read_data2;
wire [31:0] EXnpc;
wire [31:0] EXspc;
wire [4:0] EXrd;
wire [31:0] pc;
ysyx_24090003_IFU ysyx_24090003_IFU(
    .inst(inst),
    .npc(npc),
    .pc(pc),
    .cpu_clk(cpu_clk),
    .cpu_rs(cpu_rs),
    .addr_read_data(addr_read_data),
    .EXnpc(EXnpc),
    .EXspc(EXspc),
    .npc_write_enable(npc_write_enable),
    .spc_write_enable(spc_write_enable)
);   

ysyx_24090003_IDU ysyx_24090003_IDU(
    .inst(inst),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .opcode(opcode),
    .funct(funct),
    .imm(imm)
);

ysyx_24090003_EXU ysyx_24090003_EXU(
    .cpu_clk(cpu_clk),
    .imm(imm),
    .pc(pc),
    .opcode(opcode),
    .funct(funct),
    .rd(rd),
    .reg_read_data1(reg_read_data1),
    .reg_read_data2(reg_read_data2),
    .EXnpc(EXnpc),
    .EXspc(EXspc),
    .EXaddr(EXaddr),
    .addr_write_data(addr_write_data),
    .reg_write_data(reg_write_data),
    .EXrd(EXrd),
    .reg_write_enable(reg_write_enable),
    .addr_write_enable(addr_write_enable),
    .npc_write_enable(npc_write_enable),
    .spc_write_enable(spc_write_enable)
);

ysyx_24090003_regcontrol ysyx_24090003_regcontrol(
    .cpu_clk(cpu_clk),
    .rs1(rs1),
    .rs2(rs2),
    .EXrd(EXrd),
    .reg_write_enable(reg_write_enable),
    .reg_write_data(reg_write_data),
    .reg_read_data1(reg_read_data1),
    .reg_read_data2(reg_read_data2)
);



endmodule

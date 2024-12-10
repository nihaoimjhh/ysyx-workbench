module ysyx_24090003_cpu(
    input cpu_clk,
    input cpu_rs,
    input [31:0]addr_read_data,
    output [31:0]npc,
    output [31:0]addr_write_data,
    output addr_write_data_enable
    );
wire [31:0] imm;
wire [31:0] pc;
wire [31:0] spc;
wire [31:0] inst;
wire [4:0]rs1;
wire [4:0]rs2;
wire [4:0]rd;
wire [6:0]opcode;
wire [2:0]funct;
wire [31:0] reg_write_data;
wire reg_write_enable;
wire addr_write_enable;
wire [31:0] reg_read_data1;
wire [31:0] reg_read_data2;
wire [31:0] EXnpc;
wire [31:0] EXspc;

ysyx_24090003_IFU ysyx_24090003_InstructionFetchUnit(
    .cpu_clk(cpu_clk),
    .cpu_rs(cpu_rs),
    .addr_read_data(addr_read_data),
    .EXnpc(EXnpc),
    .EXspc(EXspc),
    .inst(inst),
    .npc(npc)
);
ysyx_24090003_IDU ysyx_24090003_instDecode(
    .inst(inst),
    .cpu_clk(cpu_clk),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .opcode(opcode),
    .funct(funct),
    .imm(imm)
);

ysyx_24090003_EXU ysyx_24090003_ExecutionUnit(
    .cpu_clk(cpu_clk),
    .imm(imm),
    .pc(pc),
    .opcode(opcode),
    .funct(funct),
    .rs1(rs1),
    .rs2(rs2),
    .reg_read_data1(reg_read_data1),
    .reg_read_data2(reg_read_data2),
    .rd(rd),
    .EXnpc(EXnpc),
    .EXspc(EXspc),
    .reg_write_data(reg_write_data),
    .addr_write_data(addr_write_data),
    .reg_write_enable(reg_write_enable),
    .addr_write_enable(addr_write_enable)
);

ysyx_24090003_regcontrol ysyx_24090003_regControl(
    .cpu_clk(cpu_clk),
    .cpu_rs(cpu_rs),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .write_enable(reg_write_enable),
    .reg_write_data(reg_write_data),
    .reg_read_data1(reg_read_data1),
    .reg_read_data2(reg_read_data2)
);




endmodule
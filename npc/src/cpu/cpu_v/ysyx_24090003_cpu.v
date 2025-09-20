`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)
module ysyx_24090003_cpu (
    input i_clk,
    input i_rst_n,
    
    // LSU memory interface
    output [31:0] o_lsu_addr,
    output [31:0] o_lsu_wdata,
    output o_lsu_we,
    output o_lsu_en,
    output [3:0] o_lsu_wmask,
    input [31:0] i_lsu_rdata,
    
    // IFU memory interface (SimpleBus)
    output [31:0] o_ifu_raddr,
    output       o_inst_valid,   // Instruction valid signal
    output       o_inst_ready,   // IFU ready signal
    input [31:0] i_ifu_rdata
);
  // IFU related signals
  wire [31:0] w_pc;
  wire [31:0] w_inst;
  wire        w_inst_valid;  // Instruction valid signal
  wire        w_inst_ready;  // IFU ready signal (always high in this simple implementation)
  wire [31:0] w_next_pc;
  wire        w_pc_update_en;

  // IDU related signals
  wire [ 4:0] w_rs1_addr;
  wire [ 4:0] w_rs2_addr;
  wire [ 4:0] w_rd_addr;
  wire [ 6:0] w_opcode;
  wire [ 2:0] w_funct3;
  wire [ 6:0] w_funct7;
  wire [31:0] w_imm;

  wire        w_lsu_we;  
  wire        w_lsu_en; 
  wire [ 3:0] w_lsu_wmask;
  wire [ 3:0] w_lsu_rmask;

  // Other control signals
  wire        w_reg_wen;
  wire        w_mem_to_reg;
  wire        w_jump;

  // Control signals from IDU to EXU
  wire [ 3:0] w_alu_op;
  wire [ 1:0] w_alu_src1_sel;
  wire [ 1:0] w_alu_src2_sel;
  wire        w_branch;
  wire        w_jalr;
  wire        w_ebreak;

  // CSR related signals
  wire        w_ecall;
  wire        w_csr_we;
  wire [11:0] w_csr_addr;
  wire [ 1:0] w_csr_op;
  wire [31:0] w_csr_rdata;
  wire [31:0] w_csr_wdata;
  wire        w_mret;

  // EXU related
  wire [31:0] w_alu_result;
  wire        w_exu_pc_update;

  // LSU related
  wire [31:0] w_lsu_rdata;

  // WBU related
  wire [31:0] w_rs1_data;
  wire [31:0] w_rs2_data;
  wire [31:0] w_rd_wdata;
  wire [31:0] w_mtvec;
  wire [31:0] w_mepc;

  // PC update signal comes directly from EXU
  assign w_pc_update_en = w_exu_pc_update;
  assign o_inst_valid = w_inst_valid;
  assign o_inst_ready = w_inst_ready;
  // Instantiate IFU with SimpleBus interface
  ysyx_24090003_IFU ifu (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      .i_next_pc(w_next_pc),
      .i_pc_update_en(w_pc_update_en),
      .o_inst(w_inst),
      .o_pc(w_pc),
      .o_inst_valid(w_inst_valid),
      .o_inst_ready(w_inst_ready),
      .o_ifu_raddr(o_ifu_raddr),
      .i_ifu_rdata(i_ifu_rdata)
  );

  // Instantiate IDU
  ysyx_24090003_IDU idu (
      .i_inst(w_inst),
      .i_inst_valid(w_inst_valid),
      .i_rst_n(i_rst_n),
      .o_rs1_addr(w_rs1_addr),
      .o_rs2_addr(w_rs2_addr),
      .o_rd_addr(w_rd_addr),
      .o_opcode(w_opcode),
      .o_funct3(w_funct3),
      .o_funct7(w_funct7),
      .o_imm(w_imm),
      .o_lsu_we(w_lsu_we),
      .o_lsu_en(w_lsu_en),
      .o_lsu_wmask(w_lsu_wmask),
      .o_lsu_rmask(w_lsu_rmask),
      .o_reg_wen(w_reg_wen),
      .o_mem_to_reg(w_mem_to_reg),
      .o_jump(w_jump),
      .o_alu_op(w_alu_op),
      .o_alu_src1_sel(w_alu_src1_sel),
      .o_alu_src2_sel(w_alu_src2_sel),
      .o_branch(w_branch),
      .o_jalr(w_jalr),
      .o_ebreak(w_ebreak),
      .o_ecall(w_ecall),
      .o_csr_we(w_csr_we),
      .o_csr_addr(w_csr_addr),
      .o_csr_op(w_csr_op),
      .o_mret(w_mret)
  );

  // Instantiate EXU
  ysyx_24090003_EXU exu (
      .i_pc(w_pc),
      .i_imm(w_imm),
      .i_rs1_data(w_rs1_data),
      .i_rs2_data(w_rs2_data),
      .i_alu_op(w_alu_op),
      .i_alu_src1_sel(w_alu_src1_sel),
      .i_alu_src2_sel(w_alu_src2_sel),
      .i_jump(w_jump),
      .i_jalr(w_jalr),
      .i_ebreak(w_ebreak),
      .i_branch(w_branch),
      .i_funct3(w_funct3),
      .i_funct7(w_funct7),
      .i_ecall(w_ecall),
      .i_csr_rdata(w_csr_rdata),
      .i_mtvec(w_mtvec),
      .i_mret(w_mret),
      .i_mepc(w_mepc),
      .o_alu_result(w_alu_result),
      .o_next_pc(w_next_pc),
      .o_pc_update(w_exu_pc_update),
      .o_csr_wdata(w_csr_wdata)
  );

  // Instantiate LSU
  ysyx_24090003_LSU lsu (
      .i_lsu_addr(w_alu_result),
      .i_lsu_wdata(w_rs2_data),
      .i_lsu_we(w_lsu_we),
      .i_lsu_en(w_lsu_en),
      .i_lsu_wmask(w_lsu_wmask),
      .i_lsu_rmask(w_lsu_rmask),
      .i_lsu_rdata(i_lsu_rdata),
      .o_lsu_addr(o_lsu_addr),
      .o_lsu_wdata(o_lsu_wdata),
      .o_lsu_we(o_lsu_we),
      .o_lsu_en(o_lsu_en),
      .o_lsu_wmask(o_lsu_wmask),
      .o_lsu_rdata(w_lsu_rdata)
  );

  // Instantiate WBU
  ysyx_24090003_WBU wbu (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      .i_rd_addr(w_rd_addr),
      .i_rs1_addr(w_rs1_addr),
      .i_rs2_addr(w_rs2_addr),
      .i_alu_result(w_alu_result),
      .i_mem_rdata(w_lsu_rdata),
      .i_pc(w_pc),
      .i_reg_wen(w_reg_wen),
      .i_mem_to_reg(w_mem_to_reg),
      .i_jump(w_jump),
      .i_next_pc(w_next_pc),
      .i_csr_we(w_csr_we),
      .i_csr_addr(w_csr_addr),
      .i_csr_op(w_csr_op),
      .i_csr_wdata(w_csr_wdata),
      .i_ecall(w_ecall),
      .i_mret(w_mret),
      .o_rs1_data(w_rs1_data),
      .o_rs2_data(w_rs2_data),
      .o_rd_wdata(w_rd_wdata),
      .o_csr_rdata(w_csr_rdata),
      .o_mtvec(w_mtvec),
      .o_mepc(w_mepc)
  );

endmodule
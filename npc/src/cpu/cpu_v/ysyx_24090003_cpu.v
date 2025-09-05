`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)
module ysyx_24090003_cpu (
    input i_clk,
    input i_rst_n,
    output [31:0] o_mem_addr,
    output [31:0] o_mem_wdata,
    output o_mem_we,
    output o_mem_en,
    output [2:0] o_mem_wmask,
    input [31:0] i_mem_rdata
);
  // IFU相关
  wire [31:0] w_pc;
  wire [31:0] w_inst;
  wire [31:0] w_next_pc;
  wire        w_pc_update_en;

  // IDU相关
  wire [ 4:0] w_rs1_addr;
  wire [ 4:0] w_rs2_addr;
  wire [ 4:0] w_rd_addr;
  wire [ 6:0] w_opcode;
  wire [ 2:0] w_funct3;
  wire [ 6:0] w_funct7;
  wire [31:0] w_imm;

  wire        w_mem_we;  
  wire        w_mem_en; 

  // 新增信号 - 内存访问控制
  wire [ 1:0] w_mem_width;  // 内存访问宽度
  wire        w_mem_unsigned;  // 是否为无符号加载

  // 其他控制信号
  wire        w_reg_wen;
  wire        w_mem_to_reg;
  wire        w_jump;

  // 新增控制信号 - IDU到EXU
  wire [ 3:0] w_alu_op;  // ALU操作码（4位，替代原来的alu_op）
  wire [ 1:0] w_alu_src1_sel;  // ALU第一操作数选择
  wire [ 1:0] w_alu_src2_sel;  // ALU第二操作数选择
  wire        w_branch;  // 是否为条件分支指令
  wire        w_jalr;  // 是否为JALR指令
  wire        w_ebreak;  // 是否为EBREAK指令

  // 新增CSR相关信号
  wire        w_ecall;  // 是否为ECALL指令
  wire        w_csr_we;  // CSR写使能
  wire [11:0] w_csr_addr;  // CSR地址
  wire [ 1:0] w_csr_op;  // CSR操作类型(00:无操作, 01:CSRRW, 10:CSRRS)
  wire [31:0] w_csr_rdata;  // CSR读取数据
  wire [31:0] w_csr_wdata;  // CSR写入数据
  wire        w_mret;  // 是否为MRET指令

  // EXU相关
  wire [31:0] w_alu_result;
  wire        w_exu_pc_update;  // 从EXU获取的PC更新信号

  // LSU相关
  wire [31:0] w_mem_rdata;

  // WBU相关
  wire [31:0] w_rs1_data;
  wire [31:0] w_rs2_data;
  wire [31:0] w_rd_wdata;
  wire [31:0] w_mtvec;  // 从RegFile获取的mtvec值
  wire [31:0] w_mepc;  // 从RegFile获取的mepc值

  // PC更新信号现在直接从EXU获取
  assign w_pc_update_en = w_exu_pc_update;
  ysyx_24090003_IFU ifu (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      .i_next_pc(w_next_pc),
      .i_pc_update_en(w_pc_update_en),
      .o_inst(w_inst),
      .o_pc(w_pc)
  );
  ysyx_24090003_IDU idu (
      .i_inst(w_inst),
      .i_rst_n(i_rst_n),
      .o_rs1_addr(w_rs1_addr),
      .o_rs2_addr(w_rs2_addr),
      .o_rd_addr(w_rd_addr),
      .o_opcode(w_opcode),
      .o_funct3(w_funct3),
      .o_funct7(w_funct7),
      .o_imm(w_imm),

      // 修改后的内存控制信号
      .o_mem_we(w_mem_we),
      .o_mem_en(w_mem_en),
      .o_mem_width(w_mem_width),     // 连接内存宽度信号
      .o_mem_unsigned(w_mem_unsigned), // 连接符号扩展信号

      // 其他控制信号
      .o_reg_wen(w_reg_wen),
      .o_mem_to_reg(w_mem_to_reg),
      .o_jump(w_jump),

      // 新增控制信号
      .o_alu_op(w_alu_op),
      .o_alu_src1_sel(w_alu_src1_sel),
      .o_alu_src2_sel(w_alu_src2_sel),
      .o_branch(w_branch),
      .o_jalr(w_jalr),
      .o_ebreak(w_ebreak),

      // 新增CSR相关输出
      .o_ecall(w_ecall),
      .o_csr_we(w_csr_we),
      .o_csr_addr(w_csr_addr),
      .o_csr_op(w_csr_op),
      .o_mret(w_mret)
  );

  // 执行单元 - 添加funct7连接
  ysyx_24090003_EXU exu (
      .i_pc(w_pc),
      .i_imm(w_imm),
      .i_rs1_data(w_rs1_data),
      .i_rs2_data(w_rs2_data),

      // 从IDU接收的控制信号
      .i_alu_op(w_alu_op),
      .i_alu_src1_sel(w_alu_src1_sel),
      .i_alu_src2_sel(w_alu_src2_sel),
      .i_jump(w_jump),
      .i_jalr(w_jalr),
      .i_ebreak(w_ebreak),
      .i_branch(w_branch),     // 连接条件分支信号
      .i_funct3(w_funct3),     // 连接funct3字段用于分支类型判断
      .i_funct7(w_funct7),     // 新增: 连接funct7字段用于R型指令区分

      // 新增CSR相关输入
      .i_ecall(w_ecall),
      .i_csr_rdata(w_csr_rdata),
      .i_mtvec(w_mtvec),
      .i_mret(w_mret),
      .i_mepc(w_mepc),

      // 输出
      .o_alu_result(w_alu_result),
      .o_next_pc(w_next_pc),
      .o_pc_update(w_exu_pc_update),  // 连接PC更新信号

      // 新增CSR相关输出
      .o_csr_wdata(w_csr_wdata)
  );

  // 内存访问单元 - 使用新的接口
  ysyx_24090003_LSU lsu (
      .i_mem_addr(w_alu_result),
      .i_mem_wdata(w_rs2_data),
      .i_mem_we(w_mem_we),
      .i_mem_en(w_mem_en),
      .i_mem_width(w_mem_width),     // 连接内存宽度信号
      .i_mem_unsigned(w_mem_unsigned), // 连接符号扩展信号
      .i_mem_rdata(i_mem_rdata),
      .o_mem_addr(o_mem_addr),
      .o_mem_wdata(o_mem_wdata),
      .o_mem_we(o_mem_we),
      .o_mem_en(o_mem_en),
      .o_mem_wmask(o_mem_wmask),     // 连接写掩码输出
      .o_mem_rdata(w_mem_rdata)
  );

  // 写回单元 - WBU不再控制PC更新
  ysyx_24090003_WBU wbu (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      .i_rd_addr(w_rd_addr),
      .i_rs1_addr(w_rs1_addr),
      .i_rs2_addr(w_rs2_addr),
      .i_alu_result(w_alu_result),
      .i_mem_rdata(w_mem_rdata),
      .i_pc(w_pc),
      .i_reg_wen(w_reg_wen),
      .i_mem_to_reg(w_mem_to_reg),
      .i_jump(w_jump),
      .i_next_pc(w_next_pc),

      // 新增CSR相关输入
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

`include "ysyx_24090003_define.v"
(*dont_touch = "true"*)
module ysyx_24090003_IDU (
  input [31:0] i_inst,
  input        i_inst_valid,  // 指令有效信号
  input        i_rst_n,
    output [4:0] o_rs1_addr,
    output [4:0] o_rs2_addr,
    output [4:0] o_rd_addr,
    output [6:0] o_opcode,
    output [2:0] o_funct3,
    output [6:0] o_funct7,
    output [31:0] o_imm,
    output reg o_mem_we,
    output reg o_mem_en,
    output reg [1:0] o_mem_width,  // 新增：内存访问宽度（00:byte, 01:halfword, 10:word）
    output reg o_mem_unsigned,  // 新增：是否为无符号加载
    output reg o_reg_wen,
    output reg o_mem_to_reg,  // 内存到寄存器信号
    output reg o_jump,  // 跳转信号
    // 新增EXU控制信号
    output reg [3:0] o_alu_op,  // ALU操作码（4位）
    output reg [1:0] o_alu_src1_sel,  // ALU第一操作数选择（00:reg_data1, 01:pc, 10sudo systemctl start gdm.service:0）
    output reg [1:0] o_alu_src2_sel,  // ALU第二操作数选择（00:reg_data2, 01:imm, 10:4）
    output reg o_branch,  // 是否为条件分支指令
    output reg o_jalr,  // 是否为JALR指令
    output reg o_ebreak,  // 是否为EBREAK指令
    // 新增CSR相关输出
    output reg o_ecall,  // 是否为ECALL指令
    output reg o_csr_we,  // CSR写使能
    output [11:0] o_csr_addr,  // CSR地址
    output reg [1:0] o_csr_op,  // CSR操作类型(00:无操作, 01:CSRRW, 10:CSRRS)
    output reg o_mret  // 是否为MRET指令
);
  import "DPI-C" function void inst_not_found(
    input byte flag,
    input byte rst
  );
  assign o_rs1_addr = i_inst[19:15];
  assign o_rs2_addr = i_inst[24:20];
  assign o_rd_addr  = i_inst[11:7];
  assign o_funct3   = i_inst[14:12];
  assign o_funct7   = i_inst[31:25];
  assign o_opcode   = i_inst[6:0];
  assign o_csr_addr = i_inst[31:20];
  wire [31:0] w_imm_i = {{20{i_inst[31]}}, i_inst[31:20]};
  wire [31:0] w_imm_s = {{20{i_inst[31]}}, i_inst[31:25], i_inst[11:7]};
  wire [31:0] w_imm_b = {{20{i_inst[31]}}, i_inst[7], i_inst[30:25], i_inst[11:8], 1'b0};
  wire [31:0] w_imm_u = {i_inst[31:12], 12'b0};
  wire [31:0] w_imm_j = {{12{i_inst[31]}}, i_inst[19:12], i_inst[20], i_inst[30:21], 1'b0};
  reg  [31:0] r_imm_out;
  always @(*) begin
    case (o_opcode)
      7'b1110011: r_imm_out = 32'b1;
      7'b0010011,
      7'b0000011,
      7'b1100111: r_imm_out = w_imm_i;
      7'b0100011: r_imm_out = w_imm_s;
      7'b1100011: r_imm_out = w_imm_b;
      7'b0010111,
      7'b0110111: r_imm_out = w_imm_u;
      7'b1101111: r_imm_out = w_imm_j;
      7'b0110011: r_imm_out = 32'b0;
      default:    r_imm_out = 32'b1;
    endcase
  end
  assign o_imm = r_imm_out;

  // 默认控制信号（安全状态）
  localparam [3:0] DEFAULT_ALU_OP = `ALU_ADD;
  localparam [1:0] DEFAULT_ALU_SRC1_SEL = `SRC_REG;
  localparam [1:0] DEFAULT_ALU_SRC2_SEL = `SRC_IMM;

  // 主要译码逻辑
  always @(*) begin
    if (~i_rst_n || ~i_inst_valid) begin  // 指令复位或无效时保持安全状态
      o_mem_we = 1'b0;
      o_mem_en = 1'b0;
      o_mem_width = 2'b10;
      o_mem_unsigned = 1'b0;
      o_reg_wen = 1'b0;
      o_mem_to_reg = 1'b0;
      o_jump = 1'b0;
      o_branch = 1'b0;
      o_jalr = 1'b0;
      o_ebreak = 1'b0;
      o_ecall = 1'b0;
      o_mret = 1'b0;
      o_csr_we = 1'b0;
      o_csr_op = 2'b00;
      o_alu_op = DEFAULT_ALU_OP;
      o_alu_src1_sel = DEFAULT_ALU_SRC1_SEL;
      o_alu_src2_sel = DEFAULT_ALU_SRC2_SEL;
    end else begin
    case (o_opcode)
      7'b0000011: begin  // 加载指令 (LB/LBU/LH/LHU/LW)
        case (o_funct3)
          3'b000: begin  // LB
            o_mem_we = 1'b0;
            o_mem_en = 1'b1;
            o_mem_width = 2'b00;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b1;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b001: begin  // LH
            o_mem_we = 1'b0;
            o_mem_en = 1'b1;
            o_mem_width = 2'b01;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b1;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b010: begin  // LW
            o_mem_we = 1'b0;
            o_mem_en = 1'b1;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b1;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b100: begin  // LBU
            o_mem_we = 1'b0;
            o_mem_en = 1'b1;
            o_mem_width = 2'b00;
            o_mem_unsigned = 1'b1;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b1;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b101: begin  // LHU
            o_mem_we = 1'b0;
            o_mem_en = 1'b1;
            o_mem_width = 2'b01;
            o_mem_unsigned = 1'b1;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b1;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          default: begin
            o_mem_we = 1'b0;
            o_mem_en = 1'b1;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b1;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
            inst_not_found(8'hff, {8{i_rst_n}});
          end
        endcase
      end

      7'b0010011: begin  // I型算术指令
        case (o_funct3)
          3'b000: begin  // ADDI
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b010: begin  // SLTI
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SLT;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b011: begin  // SLTIU
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SLTU;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b100: begin  // XORI
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_XOR;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b110: begin  // ORI
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_OR;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b111: begin  // ANDI
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_AND;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b001: begin  // SLLI
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SLL;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b101: begin  // SRLI/SRAI
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
            if (i_inst[30] == 1'b0) o_alu_op = `ALU_SRL;  // SRLI
            else o_alu_op = `ALU_SRA;  // SRAI
          end
          default: begin
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
            inst_not_found(8'hff, {8{i_rst_n}});
          end
        endcase
      end

      7'b0010111: begin  // auipc
        o_mem_we = 1'b0;
        o_mem_en = 1'b0;
        o_mem_width = 2'b10;
        o_mem_unsigned = 1'b0;
        o_reg_wen = 1'b1;
        o_mem_to_reg = 1'b0;
        o_jump = 1'b0;
        o_branch = 1'b0;
        o_jalr = 1'b0;
        o_ebreak = 1'b0;
        o_ecall = 1'b0;
        o_csr_we = 1'b0;
        o_csr_op = 2'b00;
        o_mret = 1'b0;
        o_alu_op = `ALU_ADD;
        o_alu_src1_sel = `SRC_PC;
        o_alu_src2_sel = `SRC_IMM;
      end

      7'b1100111: begin  // jalr
        o_mem_we = 1'b0;
        o_mem_en = 1'b0;
        o_mem_width = 2'b10;
        o_mem_unsigned = 1'b0;
        o_reg_wen = 1'b1;
        o_mem_to_reg = 1'b0;
        o_jump = 1'b1;
        o_branch = 1'b0;
        o_jalr = 1'b1;
        o_ebreak = 1'b0;
        o_ecall = 1'b0;
        o_csr_we = 1'b0;
        o_csr_op = 2'b00;
        o_mret = 1'b0;
        o_alu_op = `ALU_ADD;
        o_alu_src1_sel = `SRC_REG;
        o_alu_src2_sel = `SRC_IMM;
      end

      7'b1101111: begin  // jal
        o_mem_we = 1'b0;
        o_mem_en = 1'b0;
        o_mem_width = 2'b10;
        o_mem_unsigned = 1'b0;
        o_reg_wen = 1'b1;
        o_mem_to_reg = 1'b0;
        o_jump = 1'b1;
        o_branch = 1'b0;
        o_jalr = 1'b0;
        o_ebreak = 1'b0;
        o_ecall = 1'b0;
        o_csr_we = 1'b0;
        o_csr_op = 2'b00;
        o_mret = 1'b0;
        o_alu_op = `ALU_ADD;
        o_alu_src1_sel = `SRC_PC;
        o_alu_src2_sel = `SRC_IMM;
      end

      7'b0110111: begin  // lui
        o_mem_we = 1'b0;
        o_mem_en = 1'b0;
        o_mem_width = 2'b10;
        o_mem_unsigned = 1'b0;
        o_reg_wen = 1'b1;
        o_mem_to_reg = 1'b0;
        o_jump = 1'b0;
        o_branch = 1'b0;
        o_jalr = 1'b0;
        o_ebreak = 1'b0;
        o_ecall = 1'b0;
        o_csr_we = 1'b0;
        o_csr_op = 2'b00;
        o_mret = 1'b0;
        o_alu_op = `ALU_LUI;
        o_alu_src1_sel = `SRC_ZERO;
        o_alu_src2_sel = `SRC_IMM;
      end

      7'b0100011: begin  // S型存储指令 (SB/SH/SW)
        case (o_funct3)
          3'b000: begin  // SB
            o_mem_we = 1'b1;
            o_mem_en = 1'b1;
            o_mem_width = 2'b00;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b001: begin  // SH
            o_mem_we = 1'b1;
            o_mem_en = 1'b1;
            o_mem_width = 2'b01;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          3'b010: begin  // SW
            o_mem_we = 1'b1;
            o_mem_en = 1'b1;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
          end
          default: begin
            o_mem_we = 1'b1;
            o_mem_en = 1'b1;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_IMM;
            inst_not_found(8'hff, {8{i_rst_n}});
          end
        endcase
      end

      7'b0110011: begin  // R型算术指令
        case (o_funct3)
          3'b000: begin  // ADD/SUB
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_ADD;
            else if (o_funct7 == `FUNCT7_ALT) o_alu_op = `ALU_SUB;
            else begin
              o_alu_op = `ALU_ADD;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b001: begin  // SLL
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_SLL;
            else begin
              o_alu_op = `ALU_SLL;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b010: begin  // SLT
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_SLT;
            else begin
              o_alu_op = `ALU_SLT;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b011: begin  // SLTU
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_SLTU;
            else begin
              o_alu_op = `ALU_SLTU;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b100: begin  // XOR
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_XOR;
            else begin
              o_alu_op = `ALU_XOR;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b101: begin  // SRL/SRA
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_SRL;
            else if (o_funct7 == `FUNCT7_ALT) o_alu_op = `ALU_SRA;
            else begin
              o_alu_op = `ALU_SRL;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b110: begin  // OR
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_OR;
            else begin
              o_alu_op = `ALU_OR;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b111: begin  // AND
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            if (o_funct7 == `FUNCT7_STD) o_alu_op = `ALU_AND;
            else begin
              o_alu_op = `ALU_AND;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          default: begin
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b1;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            inst_not_found(8'hff, {8{i_rst_n}});
          end
        endcase
      end

      7'b1100011: begin  // 条件分支指令 (B型)
        case (o_funct3)
          3'b000: begin  // BEQ
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b1;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SUB;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          3'b001: begin  // BNE
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b1;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SUB;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          3'b100: begin  // BLT
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b1;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SLT;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          3'b101: begin  // BGE
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b1;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SLT;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          3'b110: begin  // BLTU
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b1;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SLTU;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          3'b111: begin  // BGEU
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b1;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SLTU;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          default: begin
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b1;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_SUB;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            inst_not_found(8'hff, {8{i_rst_n}});
          end
        endcase
      end

      7'b1110011: begin  // 系统指令 (ECALL/EBREAK/CSR指令/MRET)
        case (o_funct3)
          3'b000: begin  // ECALL/EBREAK/MRET
            if (i_inst[31:20] == 12'h000) begin  // ECALL
              o_mem_we = 1'b0;
              o_mem_en = 1'b0;
              o_mem_width = 2'b10;
              o_mem_unsigned = 1'b0;
              o_reg_wen = 1'b0;
              o_mem_to_reg = 1'b0;
              o_jump = 1'b0;
              o_branch = 1'b0;
              o_jalr = 1'b0;
              o_ebreak = 1'b0;
              o_ecall = 1'b1;
              o_csr_we = 1'b0;
              o_csr_op = 2'b00;
              o_mret = 1'b0;
              o_alu_op = `ALU_ADD;
              o_alu_src1_sel = `SRC_REG;
              o_alu_src2_sel = `SRC_REG;
            end else if (i_inst[31:20] == 12'h001) begin  // EBREAK
              o_mem_we = 1'b0;
              o_mem_en = 1'b0;
              o_mem_width = 2'b10;
              o_mem_unsigned = 1'b0;
              o_reg_wen = 1'b0;
              o_mem_to_reg = 1'b0;
              o_jump = 1'b0;
              o_branch = 1'b0;
              o_jalr = 1'b0;
              o_ebreak = 1'b1;
              o_ecall = 1'b0;
              o_csr_we = 1'b0;
              o_csr_op = 2'b00;
              o_mret = 1'b0;
              o_alu_op = `ALU_ADD;
              o_alu_src1_sel = `SRC_REG;
              o_alu_src2_sel = `SRC_REG;
            end else if (i_inst[31:20] == `MRET_INST) begin  // MRET
              o_mem_we = 1'b0;
              o_mem_en = 1'b0;
              o_mem_width = 2'b10;
              o_mem_unsigned = 1'b0;
              o_reg_wen = 1'b0;
              o_mem_to_reg = 1'b0;
              o_jump = 1'b0;
              o_branch = 1'b0;
              o_jalr = 1'b0;
              o_ebreak = 1'b0;
              o_ecall = 1'b0;
              o_csr_we = 1'b0;
              o_csr_op = 2'b00;
              o_mret = 1'b1;
              o_alu_op = `ALU_ADD;
              o_alu_src1_sel = `SRC_REG;
              o_alu_src2_sel = `SRC_REG;
            end else begin  // 未识别的系统指令
              o_mem_we = 1'b0;
              o_mem_en = 1'b0;
              o_mem_width = 2'b10;
              o_mem_unsigned = 1'b0;
              o_reg_wen = 1'b0;
              o_mem_to_reg = 1'b0;
              o_jump = 1'b0;
              o_branch = 1'b0;
              o_jalr = 1'b0;
              o_ebreak = 1'b0;
              o_ecall = 1'b0;
              o_csr_we = 1'b0;
              o_csr_op = 2'b00;
              o_mret = 1'b0;
              o_alu_op = `ALU_ADD;
              o_alu_src1_sel = `SRC_REG;
              o_alu_src2_sel = `SRC_REG;
              inst_not_found(8'hff, {8{i_rst_n}});
            end
          end
          3'b001: begin  // CSRRW
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = (o_rd_addr != 5'b0) ? 1'b1 : 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b1;
            o_csr_op = 2'b01;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          3'b010: begin  // CSRRS
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = (o_rd_addr != 5'b0) ? 1'b1 : 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b0;
            o_ecall = 1'b0;
            o_csr_we = 1'b1;
            o_csr_op = 2'b10;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
          end
          default: begin
            o_mem_we = 1'b0;
            o_mem_en = 1'b0;
            o_mem_width = 2'b10;
            o_mem_unsigned = 1'b0;
            o_reg_wen = 1'b0;
            o_mem_to_reg = 1'b0;
            o_jump = 1'b0;
            o_branch = 1'b0;
            o_jalr = 1'b0;
            o_ebreak = 1'b1;
            o_ecall = 1'b0;
            o_csr_we = 1'b0;
            o_csr_op = 2'b00;
            o_mret = 1'b0;
            o_alu_op = `ALU_ADD;
            o_alu_src1_sel = `SRC_REG;
            o_alu_src2_sel = `SRC_REG;
            inst_not_found(8'hff, {8{i_rst_n}});
          end
        endcase
      end

      default: begin
        o_mem_we = 1'b0;
        o_mem_en = 1'b0;
        o_mem_width = 2'b10;
        o_mem_unsigned = 1'b0;
        o_reg_wen = 1'b0;
        o_mem_to_reg = 1'b0;
        o_jump = 1'b0;
        o_branch = 1'b0;
        o_jalr = 1'b0;
        o_ebreak = 1'b0;
        o_ecall = 1'b0;
        o_csr_we = 1'b0;
        o_csr_op = 2'b00;
        o_mret = 1'b0;
        o_alu_op = `ALU_ADD;
        o_alu_src1_sel = `SRC_REG;
        o_alu_src2_sel = `SRC_IMM;
        inst_not_found(8'hff, {8{i_rst_n}});
      end
      endcase
    end
  end
endmodule
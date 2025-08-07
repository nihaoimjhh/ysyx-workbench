`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)
// Prevent synthesis tool from optimizing the module
module ysyx_24090003_EXU (
    // 数据输入
    input [31:0] i_pc,        // 当前PC
    input [31:0] i_imm,       // 立即数
    input [31:0] i_rs1_data,  // 寄存器数据1
    input [31:0] i_rs2_data,  // 寄存器数据2

    // 从IDU接收的控制信号
    input [3:0] i_alu_op,        // ALU操作码（4位，直接对应ALU操作）
    input [1:0] i_alu_src1_sel,  // ALU第一操作数选择（00:reg_data1, 01:pc, 10:0）
    input [1:0] i_alu_src2_sel,  // ALU第二操作数选择（00:reg_data2, 01:imm, 10:4）
    input       i_jump,          // 无条件跳转信号
    input       i_jalr,          // 是否为JALR指令
    input       i_ebreak,        // ebreak指令标志
    input       i_branch,        // 新增: 条件分支指令标志
    input [2:0] i_funct3,        // 用于区分分支指令类型
    input [6:0] i_funct7,        // 新增: 功能码7，用于R型指令

    // 新增CSR相关输入
    input        i_ecall,      // ECALL指令标志
    input [31:0] i_csr_rdata,  // CSR读取数据
    input [31:0] i_mtvec,      // mtvec寄存器值（用于异常跳转）
    input        i_mret,       // MRET指令标志
    input [31:0] i_mepc,       // mepc寄存器值（用于异常返回）

    // 输出
    output [31:0] o_alu_result,  // ALU运算结果
    output [31:0] o_next_pc,     // 下一PC值
    output        o_pc_update,   // PC更新使能信号

    // 新增CSR相关输出
    output [31:0] o_csr_wdata  // CSR写入数据
);
  // DPIC接口声明
  import "DPI-C" function void finish_simulation();
  import "DPI-C" function void log_exception_trace(
    input int cause,
    input int epc,
    input int target
  );
  import "DPI-C" function void log_exception_return(
    input int cause,
    input int ret_addr
  );


  // ebreak指令处理
  always @(*) begin
    if (i_ebreak) begin
      finish_simulation();
    end
  end

  // 异常追踪处理
  always @(*) begin
    if (i_ecall) begin
      // ECALL异常追踪：记录异常原因(11)、当前PC和跳转目标
      log_exception_trace(32'd11, i_pc, i_mtvec);
    end else if (i_mret) begin
      // MRET返回追踪：记录返回异常原因(11)和返回地址
      log_exception_return(32'd11, i_mepc);
    end
  end

  // 根据控制信号选择ALU输入
  reg [31:0] r_alu_in1, r_alu_in2;

  // ALU第一操作数选择
  always @(*) begin
    case (i_alu_src1_sel)
      `SRC_REG:  r_alu_in1 = i_rs1_data;  // 使用寄存器数据1
      `SRC_PC:   r_alu_in1 = i_pc;  // 使用PC值
      `SRC_ZERO: r_alu_in1 = 32'b0;  // 使用常数0
      default:   r_alu_in1 = i_rs1_data;  // 默认使用寄存器数据1
    endcase
  end

  // ALU第二操作数选择
  always @(*) begin
    case (i_alu_src2_sel)
      `SRC_REG:  r_alu_in2 = i_rs2_data;  // 使用寄存器数据2
      `SRC_IMM:  r_alu_in2 = i_imm;  // 使用立即数
      `SRC_FOUR: r_alu_in2 = `CONSTANT_FOUR;  // 使用常数4
      default:   r_alu_in2 = i_imm;  // 默认使用立即数
    endcase
  end

  // 实例化ALU模块 - 用于指令执行
  wire w_alu_zero;  // ALU零标志输出

  ysyx_24090003_ALU alu_inst (
      .i_op1   (r_alu_in1),
      .i_op2   (r_alu_in2),
      .i_alu_op(i_alu_op),      // 使用IDU提供的控制信号
      .o_result(o_alu_result),
      .o_zero  (w_alu_zero)
  );

  // 条件分支判断逻辑
  reg r_branch_taken;
  always @(*) begin
    if (i_branch) begin
      case (i_funct3)
        `BRANCH_BEQ:  r_branch_taken = w_alu_zero;  // BEQ
        `BRANCH_BNE:  r_branch_taken = ~w_alu_zero;  // BNE
        `BRANCH_BLT:  r_branch_taken = o_alu_result[0];  // BLT (结果最低位为比较结果)
        `BRANCH_BGE:  r_branch_taken = ~o_alu_result[0];  // BGE
        `BRANCH_BLTU: r_branch_taken = o_alu_result[0];  // BLTU
        `BRANCH_BGEU: r_branch_taken = ~o_alu_result[0];  // BGEU
        default:      r_branch_taken = 1'b0;
      endcase
    end else begin
      r_branch_taken = 1'b0;
    end
  end

  // PC更新使能信号 - 无条件跳转、条件分支成功、ECALL异常或MRET返回时更新PC
  assign o_pc_update = i_jump || (i_branch && r_branch_taken) || i_ecall || i_mret;

  // CSR写入数据输出 - 直接输出rs1数据用于CSR写入
  assign o_csr_wdata = i_rs1_data;

  // PC计算逻辑 - 使用另一个ALU实例处理所有PC相关的加法
  reg [31:0] r_pc_alu_in1, r_pc_alu_in2;
  wire [31:0] w_pc_alu_result;

  // 选择PC ALU的输入
  always @(*) begin
    if (i_ecall) begin
      // ECALL异常: 跳转到mtvec地址
      r_pc_alu_in1 = i_mtvec;
      r_pc_alu_in2 = 32'h0;
    end else if (i_mret) begin
      // MRET返回: 跳转到mepc地址
      r_pc_alu_in1 = i_mepc;
      r_pc_alu_in2 = 32'h0;
    end else if (i_jump) begin
      if (i_jalr) begin
        // JALR: PC = (rs1 + imm) & ~1
        r_pc_alu_in1 = i_rs1_data;
        r_pc_alu_in2 = i_imm;
      end else begin
        // JAL: PC = pc + imm
        r_pc_alu_in1 = i_pc;
        r_pc_alu_in2 = i_imm;
      end
    end else if (i_branch && r_branch_taken) begin
      // 条件分支跳转: PC = pc + imm
      r_pc_alu_in1 = i_pc;
      r_pc_alu_in2 = i_imm;
    end else begin
      // 非跳转指令，输入设为0(实际不使用)
      r_pc_alu_in1 = 32'h0;
      r_pc_alu_in2 = 32'h0;
    end
  end
  // 实例化ALU模块 - 专门用于PC计算
  ysyx_24090003_ALU pc_alu_inst (
      .i_op1   (r_pc_alu_in1),
      .i_op2   (r_pc_alu_in2),
      .i_alu_op(`ALU_ADD),         // 固定为加法操作
      .o_result(w_pc_alu_result),
      .o_zero  ()                  // 不关注零标志
  );

  // JALR指令需要特殊处理（将结果的最低位清零）
  // ECALL异常和MRET返回直接使用地址，不需要掩码处理
  reg [31:0] r_next_pc_pre;
  always @(*) begin
    if (i_ecall || i_mret) begin
      r_next_pc_pre = w_pc_alu_result;  // ECALL/MRET: 直接使用目标地址
    end else if (i_jalr) begin
      r_next_pc_pre = w_pc_alu_result & `JALR_MASK;  // JALR: 清零最低位
    end else begin
      r_next_pc_pre = w_pc_alu_result;  // 其他情况直接使用结果
    end
  end

  assign o_next_pc = r_next_pc_pre;
endmodule

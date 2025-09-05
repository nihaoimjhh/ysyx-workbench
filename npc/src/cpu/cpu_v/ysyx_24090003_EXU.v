`include "ysyx_24090003_define.v"
(*dont_touch = "true"*)
module ysyx_24090003_EXU (
    // 数据输入
    input [31:0] i_pc,        
    input [31:0] i_imm,       
    input [31:0] i_rs1_data,  
    input [31:0] i_rs2_data, 

    // 从IDU接收的控制信号
    input [3:0] i_alu_op,        
    input [1:0] i_alu_src1_sel,  // （00:reg_data1, 01:pc, 10:0）
    input [1:0] i_alu_src2_sel,  // （00:reg_data2, 01:imm, 10:4）
    input       i_jump,         
    input       i_jalr,          
    input       i_ebreak,        
    input       i_branch,        
    input [2:0] i_funct3,       
    input [6:0] i_funct7,        

    input        i_ecall,     
    input [31:0] i_csr_rdata,  
    input [31:0] i_mtvec,      
    input        i_mret,       
    input [31:0] i_mepc,     

    output [31:0] o_alu_result,  // ALU运算结果
    output [31:0] o_next_pc,     // 下一PC值
    output        o_pc_update,   // PC更新使能信号
    output [31:0] o_csr_wdata  // CSR写入数据
);
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
  always @(*) begin
    if (i_ebreak) begin
      finish_simulation();
    end
  end
  always @(*) begin
    if (i_ecall) begin
      log_exception_trace(32'd11, i_pc, i_mtvec);
    end else if (i_mret) begin
      log_exception_return(32'd11, i_mepc);
    end
  end
  reg [31:0] r_alu_in1, r_alu_in2;
  always @(*) begin
    case (i_alu_src1_sel)
      `SRC_REG:  r_alu_in1 = i_rs1_data;
      `SRC_PC:   r_alu_in1 = i_pc;  
      `SRC_ZERO: r_alu_in1 = 32'b0;  
      default:   r_alu_in1 = i_rs1_data; 
    endcase
  end
  always @(*) begin
    case (i_alu_src2_sel)
      `SRC_REG:  r_alu_in2 = i_rs2_data; 
      `SRC_IMM:  r_alu_in2 = i_imm;  
      `SRC_FOUR: r_alu_in2 = `CONSTANT_FOUR;  
      default:   r_alu_in2 = i_imm;
    endcase
  end
  wire w_alu_zero;
  ysyx_24090003_ALU alu_inst (
      .i_op1   (r_alu_in1),
      .i_op2   (r_alu_in2),
      .i_alu_op(i_alu_op), 
      .o_result(o_alu_result),
      .o_zero  (w_alu_zero)
  );

  reg r_branch_taken;
  always @(*) begin
    if (i_branch) begin
      case (i_funct3)
        `BRANCH_BEQ:  r_branch_taken = w_alu_zero;  // BEQ
        `BRANCH_BNE:  r_branch_taken = ~w_alu_zero;  // BNE
        `BRANCH_BLT:  r_branch_taken = o_alu_result[0];  // BLT
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

  assign o_csr_wdata = i_rs1_data;









  reg [31:0] r_pc_alu_in1, r_pc_alu_in2;
  wire [31:0] w_pc_alu_result;
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
  ysyx_24090003_ALU pc_alu_inst (
      .i_op1   (r_pc_alu_in1),
      .i_op2   (r_pc_alu_in2),
      .i_alu_op(`ALU_ADD),         
      .o_result(w_pc_alu_result),
      .o_zero  ()             
  );
  reg [31:0] r_next_pc_pre;
  always @(*) begin
    if (i_ecall || i_mret) begin
      r_next_pc_pre = w_pc_alu_result;
    end else if (i_jalr) begin
      r_next_pc_pre = w_pc_alu_result & `JALR_MASK;  
    end else begin
      r_next_pc_pre = w_pc_alu_result;
    end
  end

  assign o_next_pc = r_next_pc_pre;
endmodule

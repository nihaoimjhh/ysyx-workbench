`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)
// Prevent synthesis tool from optimizing the module
module ysyx_24090003_RegFile (
    input wire        i_clk,       // 时钟信号
    input wire        i_rst_n,     // 复位信号，低电平有效
    input wire [ 4:0] i_rs1_addr,  // 源寄存器1地址
    input wire [ 4:0] i_rs2_addr,  // 源寄存器2地址
    input wire [ 4:0] i_rd_addr,   // 目标寄存器地址
    input wire [31:0] i_rd_wdata,  // 写入数据
    input wire        i_reg_wen,   // 寄存器写使能

    // 新增CSR相关接口
    input wire        i_csr_we,     // CSR写使能
    input wire [11:0] i_csr_addr,   // CSR地址
    input wire [ 1:0] i_csr_op,     // CSR操作类型
    input wire [31:0] i_csr_wdata,  // CSR写入数据
    input wire        i_ecall,      // ECALL异常信号
    input wire [31:0] i_pc,         // 当前PC（用于异常处理）
    input wire        i_mret,       // MRET指令信号

    output wire [31:0] o_rs1_data,   // 寄存器1读出数据
    output wire [31:0] o_rs2_data,   // 寄存器2读出数据
    output wire [31:0] o_csr_rdata,  // CSR读出数据
    output wire [31:0] o_mtvec,      // mtvec寄存器值（用于异常处理）
    output wire [31:0] o_mepc        // mepc寄存器值（用于异常返回）
);
  //正常16个但是译码就要取低四位，为了简便直接取32个后面有问题再说
  // 定义寄存器文件（32个32位寄存器）
  reg [31:0] r_gpr                                    [31:0];

  // 定义CSR寄存器
  reg [31:0] r_mstatus;  // 机器状态寄存器
  reg [31:0] r_mtvec;  // 机器陷阱向量寄存器
  reg [31:0] r_mepc;  // 机器异常程序计数器
  reg [31:0] r_mcause;  // 机器异常原因寄存器

  // 寄存器读取逻辑
  assign o_rs1_data = (i_rs1_addr == 5'b0) ? 32'b0 : r_gpr[i_rs1_addr];
  assign o_rs2_data = (i_rs2_addr == 5'b0) ? 32'b0 : r_gpr[i_rs2_addr];

  // CSR寄存器读取逻辑
  reg [31:0] r_csr_rdata;
  always @(*) begin
    case (i_csr_addr)
      `CSR_MSTATUS: r_csr_rdata = r_mstatus;
      `CSR_MTVEC:   r_csr_rdata = r_mtvec;
      `CSR_MEPC:    r_csr_rdata = r_mepc;
      `CSR_MCAUSE:  r_csr_rdata = r_mcause;
      default:      r_csr_rdata = 32'h0;
    endcase
  end
  assign o_csr_rdata = r_csr_rdata;

  // 提供mtvec值给异常处理逻辑
  assign o_mtvec = r_mtvec;

  // 提供mepc值给异常返回逻辑
  assign o_mepc = r_mepc;

  // DPIC接口 - 将寄存器值传递给仿真环境
  import "DPI-C" function void set_gpr(
    input int index,
    input int value
  );
  import "DPI-C" function void set_csr(
    input int addr,
    input int value
  );

  // 将当前寄存器值传递给仿真环境
  always @(*) begin
    integer i;
    for (i = 0; i < 32; i = i + 1) begin
      set_gpr(i, r_gpr[i]);
    end
    // 传递CSR寄存器值
    set_csr({20'b0, `CSR_MSTATUS}, r_mstatus);
    set_csr({20'b0, `CSR_MTVEC}, r_mtvec);
    set_csr({20'b0, `CSR_MEPC}, r_mepc);
    set_csr({20'b0, `CSR_MCAUSE}, r_mcause);
  end

  // 寄存器写入逻辑
  integer i;
  always @(posedge i_clk) begin
    if (~i_rst_n) begin
      for (i = 0; i < 32; i = i + 1) begin
        r_gpr[i] <= 32'b0;  // 复位时将所有寄存器清零
      end
      // 复位CSR寄存器
      r_mstatus <= 32'h0;
      r_mtvec   <= 32'h0;
      r_mepc    <= 32'h0;
      r_mcause  <= 32'h0;
    end else begin
      // ECALL异常处理
      if (i_ecall) begin
        r_mepc   <= i_pc;  // 保存当前PC
        r_mcause <= `ECALL_M_MODE;  // 设置异常原因
      end  // CSR写入
      else if (i_csr_we) begin
        case (i_csr_addr)
          `CSR_MSTATUS: begin
            case (i_csr_op)
              2'b01:   r_mstatus <= i_csr_wdata;  // CSRRW: 直接写入rs1值
              2'b10: begin  // CSRRS: 只有rs1不为x0时才写入
                if (i_rs1_addr != 5'b0) begin
                  r_mstatus <= r_mstatus | i_csr_wdata;
                end
              end
              default: r_mstatus <= i_csr_wdata;
            endcase
          end
          `CSR_MTVEC: begin
            case (i_csr_op)
              2'b01:   r_mtvec <= i_csr_wdata;
              2'b10: begin  // CSRRS: 只有rs1不为x0时才写入
                if (i_rs1_addr != 5'b0) begin
                  r_mtvec <= r_mtvec | i_csr_wdata;
                end
              end
              default: r_mtvec <= i_csr_wdata;
            endcase
          end
          `CSR_MEPC: begin
            case (i_csr_op)
              2'b01:   r_mepc <= i_csr_wdata;
              2'b10: begin  // CSRRS: 只有rs1不为x0时才写入
                if (i_rs1_addr != 5'b0) begin
                  r_mepc <= r_mepc | i_csr_wdata;
                end
              end
              default: r_mepc <= i_csr_wdata;
            endcase
          end
          `CSR_MCAUSE: begin
            case (i_csr_op)
              2'b01:   r_mcause <= i_csr_wdata;
              2'b10: begin  // CSRRS: 只有rs1不为x0时才写入
                if (i_rs1_addr != 5'b0) begin
                  r_mcause <= r_mcause | i_csr_wdata;
                end
              end
              default: r_mcause <= i_csr_wdata;
            endcase
          end
          default: begin
          end
        endcase
      end

      // 通用寄存器写入
      if (i_reg_wen && (i_rd_addr != 5'b0)) begin
        r_gpr[i_rd_addr] <= i_rd_wdata;
      end
      // 确保零寄存器始终为0
      r_gpr[0] <= 32'b0;
    end
  end
endmodule

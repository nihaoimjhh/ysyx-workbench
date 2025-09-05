`include "ysyx_24090003_define.v"
(*dont_touch = "true"*)
module ysyx_24090003_RegFile (
    input wire        i_clk,
    input wire        i_rst_n,
    input wire [ 4:0] i_rs1_addr,
    input wire [ 4:0] i_rs2_addr,
    input wire [ 4:0] i_rd_addr,
    input wire [31:0] i_rd_wdata,
    input wire        i_reg_wen,
    input wire        i_csr_we,
    input wire [11:0] i_csr_addr,
    input wire [ 1:0] i_csr_op,
    input wire [31:0] i_csr_wdata,
    input wire        i_ecall,
    input wire [31:0] i_pc,
    input wire        i_mret,

    output wire [31:0] o_rs1_data,
    output wire [31:0] o_rs2_data,
    output wire [31:0] o_csr_rdata,
    output wire [31:0] o_mtvec,
    output wire [31:0] o_mepc
);
  //正常16个但是译码就要取低四位，为了简便直接取32个后面有问题再说

  import "DPI-C" function void set_gpr(
    input int index,
    input int value
  );
  import "DPI-C" function void set_csr(
    input int addr,
    input int value
  );
  always @(*) begin
    integer i;
    for (i = 0; i < 32; i = i + 1) begin
      set_gpr(i, r_gpr[i]);
    end
    set_csr({20'b0, `CSR_MSTATUS}, r_mstatus);
    set_csr({20'b0, `CSR_MTVEC}, r_mtvec);
    set_csr({20'b0, `CSR_MEPC}, r_mepc);
    set_csr({20'b0, `CSR_MCAUSE}, r_mcause);
  end
  reg [31:0] r_gpr     [31:0];
  reg [31:0] r_mstatus;
  reg [31:0] r_mtvec;
  reg [31:0] r_mepc;
  reg [31:0] r_mcause;
  assign o_rs1_data = (i_rs1_addr == 5'b0) ? 32'b0 : r_gpr[i_rs1_addr];
  assign o_rs2_data = (i_rs2_addr == 5'b0) ? 32'b0 : r_gpr[i_rs2_addr];

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
  assign o_mtvec = r_mtvec;
  assign o_mepc = r_mepc;
  // 寄存器写入逻辑
  integer i;
  always @(posedge i_clk) begin
    if (~i_rst_n) begin
      for (i = 0; i < 32; i = i + 1) begin
        r_gpr[i] <= 32'b0;
      end
      r_mstatus <= 32'h1800;
      r_mtvec   <= 32'h0;
      r_mepc    <= 32'h0;
      r_mcause  <= 32'h0;
    end else begin
      if (i_ecall) begin
        r_mepc   <= i_pc;
        r_mcause <= `ECALL_M_MODE;
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

      if (i_reg_wen && (i_rd_addr != 5'b0)) begin
        r_gpr[i_rd_addr] <= i_rd_wdata;
      end
      r_gpr[0] <= 32'b0;
    end
  end
endmodule

`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)
// Prevent synthesis tool from optimizing the module
module ysyx_24090003_LSU (
    input [31:0] i_lsu_addr,    // 内存地址
    input [31:0] i_lsu_wdata,   // 写入数据
    input        i_lsu_we,      // 内存写使能信号（1：写，0：读）
    input        i_lsu_en,      // 内存使能信号
    input [31:0] i_lsu_rdata,   // 从外部传入的读取数据
    input [3:0]  i_lsu_wmask,   // 4位写掩码（0001:byte, 0010:halfword, 0100:word）
    input [3:0]  i_lsu_rmask,   // 4位读掩码（0001:byte无符号, 0010:halfword无符号, 0100:word, 1001:byte有符号, 1010:halfword有符号）

    // 输出到computer的信号
    output [31:0] o_lsu_addr,   // 输出到computer的地址
    output [31:0] o_lsu_wdata,  // 输出到computer的写数据
    output        o_lsu_we,     // 输出到computer的写使能
    output        o_lsu_en,     // 输出到computer的内存使能
    output [ 3:0] o_lsu_wmask,  // 4位写掩码传递给外部
    output [31:0] o_lsu_rdata   // 读出数据（传给其他模块）
);
  // 简单地传递信号到外部
  assign o_lsu_addr = i_lsu_addr;
  assign o_lsu_wdata = i_lsu_wdata;
  assign o_lsu_we = i_lsu_we;
  assign o_lsu_en = i_lsu_en;
  assign o_lsu_wmask = i_lsu_wmask;  // 直接传递4位写掩码

  // 处理读取数据，根据4位读掩码进行符号扩展
  reg [31:0] r_lsu_rdata;
  always @(*) begin
    case (i_lsu_rmask)
      4'b0001: r_lsu_rdata = {24'b0, i_lsu_rdata[7:0]};              // 字节无符号扩展 (lbu)
      4'b1001: r_lsu_rdata = {{24{i_lsu_rdata[7]}}, i_lsu_rdata[7:0]}; // 字节有符号扩展 (lb)
      4'b0010: r_lsu_rdata = {16'b0, i_lsu_rdata[15:0]};             // 半字无符号扩展 (lhu)
      4'b1010: r_lsu_rdata = {{16{i_lsu_rdata[15]}}, i_lsu_rdata[15:0]}; // 半字有符号扩展 (lh)
      4'b0100: r_lsu_rdata = i_lsu_rdata;                            // 字访问 (lw)
      default: r_lsu_rdata = i_lsu_rdata;                            // 默认字访问
    endcase
  end

  assign o_lsu_rdata = r_lsu_rdata;
endmodule

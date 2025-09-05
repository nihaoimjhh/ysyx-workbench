`include "ysyx_24090003_define.v"
(*dont_touch = "true"*)
module ysyx_24090003_computer (
    input wire i_clk,
    input wire i_rst_n
);
  import "DPI-C" function int cpu_pmem_read(input int addr);
  import "DPI-C" function void cpu_pmem_write(
    input int  addr,
    input int  data,
    input byte wmask
  );
  wire [31:0] w_mem_addr;
  wire [31:0] w_mem_wdata;
  wire w_mem_we;
  wire w_mem_en;
  wire [2:0] w_mem_wmask;     
  wire [31:0] w_mem_rdata;
  reg [31:0] r_mem_rdata;
  always @(*) begin
    if (w_mem_en & ~w_mem_we) begin 
      r_mem_rdata = cpu_pmem_read(w_mem_addr);
    end else begin
      r_mem_rdata = 32'b0;
    end
  end

  assign w_mem_rdata = r_mem_rdata;

  // 内存写入逻辑
  always @(*) begin
    if (w_mem_en & w_mem_we) begin
      cpu_pmem_write(w_mem_addr, w_mem_wdata, {5'b0, w_mem_wmask});
    end
  end

  // 实例化CPU模块
  ysyx_24090003_cpu cpu (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      .o_mem_addr(w_mem_addr),
      .o_mem_wdata(w_mem_wdata),
      .o_mem_we(w_mem_we),
      .o_mem_en(w_mem_en),
      .o_mem_wmask(w_mem_wmask),  // 连接写掩码信号
      .i_mem_rdata(w_mem_rdata)
  );
endmodule

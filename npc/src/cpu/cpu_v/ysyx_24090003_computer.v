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
  
  // Memory interface signals (LSU)
  wire [31:0] w_lsu_addr;
  wire [31:0] w_lsu_wdata;
  wire w_lsu_we;
  wire w_lsu_en;
  wire [3:0] w_lsu_wmask;     
  wire [31:0] w_lsu_rdata;
  
  // IFU memory interface signals
  wire [31:0] w_ifu_raddr;
  wire [31:0] w_ifu_rdata;
  wire        w_inst_valid;   // Instruction valid signal
  wire        w_inst_ready;   // IFU ready signal
  
  reg [31:0] r_lsu_rdata;
  reg [31:0] r_ifu_rdata;

  // LSU memory read logic
  always @(*) begin
    if (w_lsu_en & ~w_lsu_we) begin 
      r_lsu_rdata = cpu_pmem_read(w_lsu_addr);
    end else begin
      r_lsu_rdata = 32'b0;
    end
  end

  // IFU memory read logic (SimpleBus protocol - delayed by one cycle)
  always @(posedge i_clk) begin
    if (~i_rst_n) begin
      r_ifu_rdata = 32'b0;
    end else if(w_inst_ready) begin
      r_ifu_rdata = cpu_pmem_read(w_ifu_raddr);
    end
    else begin
      r_ifu_rdata = 32'b0; // Hold previous value if not ready
    end
  end

  assign w_lsu_rdata = r_lsu_rdata;
  assign w_ifu_rdata = r_ifu_rdata;

  // Memory write logic (LSU only)
  always @(*) begin
    if (w_lsu_en & w_lsu_we) begin
      cpu_pmem_write(w_lsu_addr, w_lsu_wdata, {4'b0, w_lsu_wmask});
    end
  end

  // Instantiate CPU module
  ysyx_24090003_cpu cpu (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      
      // LSU memory interface
      .o_lsu_addr(w_lsu_addr),
      .o_lsu_wdata(w_lsu_wdata),
      .o_lsu_we(w_lsu_we),
      .o_lsu_en(w_lsu_en),
      .o_lsu_wmask(w_lsu_wmask),
      .i_lsu_rdata(w_lsu_rdata),
      
      // IFU memory interface
      .o_inst_valid(w_inst_valid),
      .o_inst_ready(w_inst_ready),
      .o_ifu_raddr(w_ifu_raddr),
      .i_ifu_rdata(w_ifu_rdata)
  );
endmodule
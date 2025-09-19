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
  wire [31:0] w_mem_addr;
  wire [31:0] w_mem_wdata;
  wire w_mem_we;
  wire w_mem_en;
  wire [2:0] w_mem_wmask;     
  wire [31:0] w_mem_rdata;
  
  // IFU memory interface signals
  wire [31:0] w_ifu_raddr;
  wire [31:0] w_ifu_rdata;
  wire        w_inst_valid;   // Instruction valid signal
  wire        w_inst_ready;   // IFU ready signal
  
  reg [31:0] r_mem_rdata;
  reg [31:0] r_ifu_rdata;

  // LSU memory read logic
  always @(*) begin
    if (w_mem_en & ~w_mem_we) begin 
      r_mem_rdata = cpu_pmem_read(w_mem_addr);
    end else begin
      r_mem_rdata = 32'b0;
    end
  end

  // IFU memory read logic (SimpleBus protocol - delayed by one cycle)
  always @(*) begin
    if (~i_rst_n) begin
      r_ifu_rdata = 32'b0;
    end else if(w_inst_ready) begin
      r_ifu_rdata = cpu_pmem_read(w_ifu_raddr);
    end
    else begin
      r_ifu_rdata = 32'b0; // Hold previous value if not ready
    end
  end

  assign w_mem_rdata = r_mem_rdata;
  assign w_ifu_rdata = r_ifu_rdata;

  // Memory write logic (LSU only)
  always @(*) begin
    if (w_mem_en & w_mem_we) begin
      cpu_pmem_write(w_mem_addr, w_mem_wdata, {5'b0, w_mem_wmask});
    end
  end

  // Instantiate CPU module
  ysyx_24090003_cpu cpu (
      .i_clk(i_clk),
      .i_rst_n(i_rst_n),
      
      // LSU memory interface
      .o_mem_addr(w_mem_addr),
      .o_mem_wdata(w_mem_wdata),
      .o_mem_we(w_mem_we),
      .o_mem_en(w_mem_en),
      .o_mem_wmask(w_mem_wmask),
      .i_mem_rdata(w_mem_rdata),
      
      // IFU memory interface
      .o_inst_valid(w_inst_valid),
      .o_inst_ready(w_inst_ready),
      .o_ifu_raddr(w_ifu_raddr),
      .i_ifu_rdata(w_ifu_rdata)
  );
endmodule
`include "ysyx_24090003_define.v"
(*dont_touch = "true"*)
module ysyx_24090003_IFU (
    input         i_clk,
    input         i_rst_n,
    input  [31:0] i_next_pc,       
    input         i_pc_update_en,  
    output [31:0] o_inst,         
    output [31:0] o_pc            
);
  reg  [31:0] r_pc;
  wire [31:0] w_pc_plus_4;  
  wire        w_cout;
  assign o_pc = r_pc;
  adder_32bit pc_plus4_adder (
      .a(r_pc),
      .b(32'h4),
      .cin(1'b0),
      .sum(w_pc_plus_4),
      .cout(w_cout)
  );
  import "DPI-C" function void set_inst(input int value);
  import "DPI-C" function int cpu_pmem_read(input int addr);
  import "DPI-C" function void set_pc(input int value);
  import "DPI-C" function void set_dnpc(input int value);
  assign o_inst = cpu_pmem_read(r_pc);
  always @(*) begin
    set_inst(o_inst);
  end
  always @(*) begin
    set_pc(o_pc);
  end
  always @(*) begin
    if (i_pc_update_en) set_dnpc(i_next_pc);
    else set_dnpc(w_pc_plus_4);
  end
  always @(posedge i_clk) begin
    if (~i_rst_n) begin
      r_pc <= 32'h80000000;  
    end else if (i_pc_update_en) begin
      r_pc <= i_next_pc;  
    end else begin
      r_pc <= w_pc_plus_4; 
    end
  end
endmodule

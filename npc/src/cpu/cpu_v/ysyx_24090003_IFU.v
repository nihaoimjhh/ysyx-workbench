`include "ysyx_24090003_define.v"
(*dont_touch = "true"*)
module ysyx_24090003_IFU (
    input         i_clk,
    input         i_rst_n,
    input  [31:0] i_next_pc,       
    input         i_pc_update_en,  
    output [31:0] o_inst,        
    output [31:0] o_pc,          
    output        o_inst_valid,   // Indicates when instruction is valid
    output        o_inst_ready,   // Indicates when IFU is ready
    output [31:0] o_ifu_raddr,     // Address to memory
    input  [31:0] i_ifu_rdata      // Data from memory
);

  // State machine states - 使用2位状态
  localparam STATE_WAIT = 2'b00;  // Wait state - initial state after reset
  localparam STATE_ADDR = 2'b01;  // Address phase - send address request
  localparam STATE_DATA = 2'b10;  // Data phase - receive valid instruction

  // Registers
  reg  [31:0] r_pc;          // Current PC
  reg  [31:0] r_pc_inst;     // PC corresponding to current instruction
  reg  [31:0] r_inst;        // Instruction register
  reg  [1:0]  r_state;       // State machine state (now 2 bits)
  
  // PC+4 adder
  wire [31:0] w_pc_plus_4;
  wire        w_cout;
  
  adder_32bit pc_plus4_adder (
      .a(r_pc),
      .b(32'h4),
      .cin(1'b0),
      .sum(w_pc_plus_4),
      .cout(w_cout)
  );

  // DPI function declarations (debugging only)
  import "DPI-C" function void set_inst(input int value);
  import "DPI-C" function void set_pc(input int value);
  import "DPI-C" function void set_dnpc(input int value);

  // 添加延迟寄存器来保证指令有效和准备信号的正确时序
  reg r_inst_valid;
  reg r_inst_ready;

  // SimpleBus protocol implementation with wait state
  always @(posedge i_clk) begin
    if (~i_rst_n) begin
      r_pc         <= 32'h80000000;
      r_pc_inst    <= 32'h80000000;
      r_inst       <= 32'b0;
      r_state      <= STATE_WAIT;  // 初始状态是等待状态
      r_inst_valid <= 1'b0;
      r_inst_ready <= 1'b0;
    end else begin
      // 更新指令有效和准备信号
      r_inst_valid <= (r_state == STATE_DATA);  
      r_inst_ready <= (r_state == STATE_ADDR);
      
      case (r_state)
        STATE_WAIT: begin
          // 等待一个周期，确保系统稳定
          r_state <= STATE_ADDR;
        end
        
        STATE_ADDR: begin
          // Address phase: Send current PC to memory
          // Record which PC this instruction will correspond to
          r_pc_inst <= r_pc;
          r_state   <= STATE_DATA;
          
          // 跳转更新PC逻辑 - 只在STATE_ADDR状态且有跳转请求时执行
      if (i_pc_update_en) begin
            r_pc <= i_next_pc;
          end else begin
            r_pc <= w_pc_plus_4;
          end
        
        end
        
        STATE_DATA: begin
          // Data phase: Receive instruction from memory
          r_inst  <= i_ifu_rdata;
          r_state <= STATE_ADDR;
          
          // 顺序更新PC逻辑 - 只在STATE_DATA状态且无跳转请求时执行
    
        end

        default: begin
          r_state <= STATE_WAIT;
        end
      endcase
    end
  end

  // 使用寄存器输出作为有效和准备信号
  assign o_inst_valid = r_inst_valid;
  assign o_inst_ready = r_inst_ready;
  assign o_ifu_raddr = r_pc;

  // Outputs
  assign o_inst       = r_inst;
  assign o_pc         = r_pc;

  // DPI calls for debugging
  always @(*) begin
    set_inst(o_inst);
    set_pc(o_pc);
    if (i_pc_update_en) 
      set_dnpc(i_next_pc);
    else 
      set_dnpc(w_pc_plus_4);
  end

endmodule
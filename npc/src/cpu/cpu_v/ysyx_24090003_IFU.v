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

  // State machine states - 使用3位状态
  localparam STATE_WAIT = 3'b000;  // Wait state - initial state after reset
  localparam STATE_UPDATE = 3'b001; // PC update state - update PC after decode/execute
  localparam STATE_ADDR = 3'b010;  // Address phase - send address request
  localparam STATE_DATA = 3'b100;  // Data phase - receive valid instruction

  // Registers
  reg  [31:0] r_pc;          // Current PC
  reg  [31:0] r_pc_inst;     // PC corresponding to current instruction
  reg  [31:0] r_inst;        // Instruction register
  reg  [2:0]  r_state;       // Current state register (now 3 bits)
  
  // Next state logic (combinational)
  reg  [2:0]  next_state;    // Next state (now 3 bits)
  
  // Output registers (sequential)
  reg         r_inst_valid;  // Output register: instruction valid
  reg         r_inst_ready;  // Output register: IFU ready
  
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

  // 第一段：组合逻辑 - 状态转移逻辑
  always @(*) begin
    // 默认保持当前状态
    next_state = r_state;
    
    case (r_state)
      STATE_WAIT: begin
        next_state = STATE_DATA;
      end
      
      STATE_UPDATE: begin
        next_state = STATE_ADDR;
      end
      
      STATE_ADDR: begin
        next_state = STATE_DATA;
      end
      
      STATE_DATA: begin
        next_state = STATE_UPDATE;
      end
      
      default: begin
        next_state = STATE_WAIT;
      end
    endcase
  end
  // 第二段：时序逻辑 - 状态更新、寄存器更新和输出逻辑
  always @(posedge i_clk) begin
    if (~i_rst_n) begin
      r_pc         <= 32'h80000000;
      r_pc_inst    <= 32'h80000000;
      r_inst       <= 32'b0;
      r_state      <= STATE_WAIT;  // 初始状态是等待状态
      r_inst_valid <= 1'b0;
      r_inst_ready <= 1'b1;
    end else begin
      // 状态更新
      r_state <= next_state;
      case (r_state)
        STATE_WAIT: begin
          r_inst_valid <= 1'b0;
          r_inst_ready <= 1'b1;
        end
        STATE_UPDATE: begin
          if (i_pc_update_en) begin
            r_pc <= i_next_pc;
          end else begin
            r_pc <= w_pc_plus_4;
          end
          
          r_inst_valid <= 1'b0;  // 指令还未准备好
          r_inst_ready <= 1'b0;  // 正在更新PC，不ready
        end
        STATE_ADDR: begin
          r_pc_inst <= r_pc;  // 记录当前PC对应的指令
          
          r_inst_valid <= 1'b0;  // 指令还未有效
          r_inst_ready <= 1'b1;  // IFU准备接受地址
        end
        
        STATE_DATA: begin
          r_inst <= i_ifu_rdata;
          
          r_inst_valid <= 1'b1;  // 指令有效
          r_inst_ready <= 1'b0;  // IFU正在处理数据
        end
        
        default: begin
          r_inst_valid <= 1'b0;
          r_inst_ready <= 1'b1;
        end
      endcase
    end
  end

  // 输出赋值
  assign o_inst_valid = r_inst_valid;
  assign o_inst_ready = r_inst_ready;
  assign o_ifu_raddr = r_pc_inst;

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
(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module

module ysyx_24090003_EXU(
    input cpu_clk,
    input [31:0] imm,
    input [31:0] pc,
    input [6:0] opcode,
    input [2:0] funct,
    input [4:0] rd,
    input [31:0] reg_read_data1,
    input [31:0] reg_read_data2,
    output [31:0] EXnpc,
    output [31:0] EXspc,
    output [31:0] EXaddr,
    output [31:0] addr_write_data,
    output [31:0] reg_write_data,
    output  [4:0] EXrd,
    output  reg_write_enable,
    output  addr_write_enable,
    output  npc_write_enable,
    output  spc_write_enable
    );
    reg [31:0] operand1_r;
    reg [31:0] operand2_r;
    wire [31:0] operand1;
    wire [31:0] operand2;
    reg [31:0] addr_write_data_r;
    reg [31:0] reg_write_data_r;
    reg [2:0] alu_control;
    reg reg_write_data_enable_r;
    reg addr_write_data_enable_r;
    reg npc_write_enable_r;
    reg spc_write_enable_r;
    reg [31:0]EXnpc_r;
    reg [31:0]EXspc_r;
    reg [4:0]EXrd_r;
    reg [31:0]EXaddr_r;
    wire [31:0]alu_result;
    //Load operand
import "DPI-C" function void finish_simulation();
always@(*)begin
    if(opcode==7'b1110011&&funct==3'b000)
    begin
        finish_simulation();
    end
end

//能实现写值的前提是指令长度必须为一个周期，不然时钟上升的时候寄存器那边捕获不到值
assign operand1 = operand1_r;
assign operand2 = operand2_r;
assign reg_write_data = reg_write_data_r;
assign EXrd = EXrd_r;
assign addr_write_data = addr_write_data_r;
assign EXnpc = EXnpc_r;
assign EXspc = EXspc_r;//
assign EXaddr = EXaddr_r;
assign reg_write_enable = reg_write_data_enable_r;
assign addr_write_enable = addr_write_data_enable_r;
assign npc_write_enable = npc_write_enable_r;
assign spc_write_enable = spc_write_enable_r;
always @(*) begin
    case (opcode)
        7'b0010011: begin
            case (funct)
                  3'b000: begin
                    // ADDI
                    alu_control = 3'b000;
                    operand1_r = reg_read_data1;
                    operand2_r = imm;
                    reg_write_data_r= alu_result;
                    EXrd_r = rd;
                    addr_write_data_r= 0;
                    reg_write_data_enable_r = 1;
                    addr_write_data_enable_r = 0;
                    npc_write_enable_r = 0;
                    spc_write_enable_r = 0;
                    EXnpc_r = pc;
                    EXspc_r = pc;
                    EXaddr_r = 0;
                  end
                default:begin
                    operand1_r = 0;
                    operand2_r = 0;
                    reg_write_data_enable_r = 0;
                    addr_write_data_enable_r = 0;
                    npc_write_enable_r =0 ;
                    spc_write_enable_r =0 ;
                    reg_write_data_r =0 ;
                    addr_write_data_r =0 ;
                    EXnpc_r =pc;
                    EXspc_r =pc ;
                    EXrd_r =0 ;
                    EXaddr_r = 0;
                    


                end
            endcase
        end
      
  default: begin
                operand1_r = 0;
                operand2_r = 0;
                reg_write_data_enable_r = 0;
                addr_write_data_enable_r = 0;
                npc_write_enable_r = 0;
                spc_write_enable_r = 0;
                reg_write_data_r = 0;
                addr_write_data_r = 0;
                EXnpc_r = pc;
                EXspc_r = pc;
                EXrd_r =0 ;
                EXaddr_r = 0;

            end
    endcase
end






ysyx_24090003_ALU ysyx_24090003_alu (
    .operand1(operand1),
    .operand2(operand2),
    .alu_control(alu_control),
    .result(alu_result)
);
endmodule


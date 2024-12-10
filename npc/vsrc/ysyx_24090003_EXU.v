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
    output reg[31:0] EXnpc,
    output reg[31:0] EXspc,
    output reg[31:0] EXaddr,
    output reg[31:0] addr_write_data,
    output reg[31:0] reg_write_data,
    output reg [4:0] EXrd,
    output reg reg_write_enable,
    output reg addr_write_enable,
    output reg npc_write_enable,
    output reg spc_write_enable
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
assign operand1 = operand1_r;
assign operand2 = operand2_r;

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
//write back
always @(posedge cpu_clk) begin
    reg_write_data <= reg_write_data_r;
    EXrd <= EXrd_r;
    addr_write_data <= addr_write_data_r;
    EXnpc <= EXnpc_r;
    EXspc <= EXspc_r;//
    EXaddr <= EXaddr_r;
    case (reg_write_data_enable_r)
        1: begin
            reg_write_enable <= 1;  
        end
        0: begin
            reg_write_enable <= 0;
        end
    endcase
    case (addr_write_data_enable_r)
        1: begin
            addr_write_enable <= 1;  
        end
        0: begin
            addr_write_enable <= 0;
        end
    endcase
    case (npc_write_enable_r)
        1: begin
            npc_write_enable <= 1;  
        end
        0: begin
            npc_write_enable <= 0;
        end
    endcase
    case (spc_write_enable_r)
        1: begin
            spc_write_enable <= 1;  
        end
        0: begin
            spc_write_enable <= 0;
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


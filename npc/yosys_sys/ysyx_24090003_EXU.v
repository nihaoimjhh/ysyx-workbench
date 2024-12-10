module ysyx_24090003_EXU(
    input cpu_clk,
    input [31:0] imm,
    input [31:0] pc,
    input [6:0] opcode,
    input [2:0] funct,
    input [4:0] rs1,
    input [4:0] rs2,
    input [31:0] reg_read_data1,
    input [31:0] reg_read_data2,
    input [4:0] rd,
    output [31:0] EXnpc,
    output [31:0] EXspc,
    output [31:0] reg_write_data,
    output [31:0] addr_write_data,
    output reg_write_enable,
    output addr_write_enable
    );

    reg reg_write_enable_r;
    reg addr_write_enable_r;
    reg [31:0] operand1_r;
    reg [31:0] operand2_r;
    wire [31:0] operand1;
    wire [31:0] operand2;

    reg [31:0] addr_write_data_r;
    wire [31:0] alu_result;
    reg [2:0] alu_control;
assign reg_write_enable = reg_write_enable_r;
assign reg_write_data = alu_result;//是否所有指令的regdata都是alu运算的结果呢？
assign addr_write_enable = addr_write_enable_r;
assign operand1 = operand1_r;
assign operand2 = operand2_r;
always @(posedge cpu_clk) begin
    case (opcode)
        7'b0010011: begin
            case (funct)
                  3'b000: begin
                    // ADDI
                    alu_control <= 3'b000;
                    operand1_r <= reg_read_data1;
                    operand2_r <= imm;
                    reg_write_enable_r <= 1;
                    addr_write_enable_r <= 0;
                  end
                default:begin
                    reg_write_enable_r <= 0;
                    addr_write_enable_r <= 0;
                end

            endcase
        end
  default: begin
                reg_write_enable_r <= 0;
                addr_write_enable_r <= 0;
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
module ysyx_24090003_regcontrol(
    input cpu_clk,
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] EXrd,
    input reg_write_enable,
    input [31:0] reg_write_data,
    output [31:0] reg_read_data1,
    output [31:0] reg_read_data2
);
    reg [31:0] registers [31:0];
   
    // Read data
    assign reg_read_data1 = registers[rs1];
    assign reg_read_data2 = registers[rs2];
    // Write data
    always @(posedge cpu_clk) begin
       if (reg_write_enable) begin
            registers[EXrd] <= reg_write_data;
        end
        else
        begin
            registers[EXrd] <= registers[EXrd];
        end
    end
    

endmodule
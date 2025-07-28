`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module
module ysyx_24090003_WBU(
    input i_clk,                  // 时钟
    input i_rst_n,                // 复位信号，低电平有效
    input [4:0] i_rd_addr,        // 目标寄存器地址
    input [4:0] i_rs1_addr,       // 源寄存器1地址
    input [4:0] i_rs2_addr,       // 源寄存器2地址
    input [31:0] i_alu_result,    // ALU结果
    input [31:0] i_mem_rdata,     // 内存读取数据
    input [31:0] i_pc,            // 当前程序计数器
    input i_reg_wen,              // 寄存器写使能
    input i_mem_to_reg,           // 内存到寄存器选择信号
    input i_jump,                 // 跳转信号
    input [31:0] i_next_pc,       // 下一PC值
    output [31:0] o_rs1_data,     // 读出寄存器1数据
    output [31:0] o_rs2_data,     // 读出寄存器2数据
    output [31:0] o_rd_wdata      // 写入寄存器的数据
);
    // 确定写回数据
    reg [31:0] r_rd_wdata;
    always @(*) begin
        if (i_jump) begin
            r_rd_wdata = i_pc + 4;  // JAL/JALR: PC+4写回rd
        end
        else if (i_mem_to_reg) begin
            r_rd_wdata = i_mem_rdata;  // 从内存加载数据
        end
        else begin
            r_rd_wdata = i_alu_result;  // 使用ALU结果
        end
    end
    
    assign o_rd_wdata = r_rd_wdata;
    

    // 实例化寄存器文件
    ysyx_24090003_RegFile regfile (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_rs1_addr(i_rs1_addr),
        .i_rs2_addr(i_rs2_addr),
        .i_rd_addr(i_rd_addr),
        .i_rd_wdata(r_rd_wdata),
        .i_reg_wen(i_reg_wen),
        .o_rs1_data(o_rs1_data),
        .o_rs2_data(o_rs2_data)
    );
endmodule
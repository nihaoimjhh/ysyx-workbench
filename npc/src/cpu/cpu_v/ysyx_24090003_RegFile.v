`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module
module ysyx_24090003_RegFile(
    input wire i_clk,               // 时钟信号
    input wire i_rst_n,             // 复位信号，低电平有效
    input wire [4:0] i_rs1_addr,    // 源寄存器1地址
    input wire [4:0] i_rs2_addr,    // 源寄存器2地址
    input wire [4:0] i_rd_addr,     // 目标寄存器地址
    input wire [31:0] i_rd_wdata,   // 写入数据
    input wire i_reg_wen,           // 寄存器写使能
    output wire [31:0] o_rs1_data,  // 寄存器1读出数据
    output wire [31:0] o_rs2_data   // 寄存器2读出数据
);
//正常16个但是译码就要取低四位，为了简便直接取32个后面有问题再说
    // 定义寄存器文件（32个32位寄存器）
    reg [31:0] r_gpr [31:0];
    
    // 寄存器读取逻辑
    assign o_rs1_data = (i_rs1_addr == 5'b0) ? 32'b0 : r_gpr[i_rs1_addr];
    assign o_rs2_data = (i_rs2_addr == 5'b0) ? 32'b0 : r_gpr[i_rs2_addr];

    // DPIC接口 - 将寄存器值传递给仿真环境
    import "DPI-C" function void set_gpr(input int index, input int value);
    
    // 将当前寄存器值传递给仿真环境
    always @(*) begin
        integer i;
        for (i=0; i<32; i=i+1) begin
            set_gpr(i, r_gpr[i]);
        end
    end
    
    // 寄存器写入逻辑
    integer i;
    always @(posedge i_clk) begin
        if(~i_rst_n)begin
            for(i=0; i<32; i=i+1) begin
                r_gpr[i] <= 32'b0; // 复位时将所有寄存器清零
            end
        end
        if (i_reg_wen && (i_rd_addr != 5'b0)) begin
            r_gpr[i_rd_addr] <= i_rd_wdata;
        end
        // 确保零寄存器始终为0
        r_gpr[0] <= 32'b0;
    end
endmodule

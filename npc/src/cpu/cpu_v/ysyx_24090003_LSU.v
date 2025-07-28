`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module
module ysyx_24090003_LSU(
    input [31:0] i_mem_addr,      // 内存地址
    input [31:0] i_mem_wdata,     // 写入数据
    input i_mem_we,               // 内存写使能信号（1：写，0：读）
    input i_mem_en,               // 内存使能信号
    input [31:0] i_mem_rdata,     // 从外部传入的读取数据
    input [1:0] i_mem_width,      // 新增：内存访问宽度（00:byte, 01:halfword, 10:word）
    input i_mem_unsigned,         // 新增：是否为无符号加载（1:无符号扩展, 0:符号扩展）
    
    // 新增输出到computer的信号
    output [31:0] o_mem_addr,     // 输出到computer的地址
    output [31:0] o_mem_wdata,    // 输出到computer的写数据
    output o_mem_we,              // 输出到computer的写使能
    output o_mem_en,              // 输出到computer的内存使能
    output [2:0] o_mem_wmask,     // 新增：写掩码（001:byte, 010:halfword, 100:word）
    output [31:0] o_mem_rdata     // 读出数据（传给其他模块）
);
    // 简单地传递信号到外部
    assign o_mem_addr = i_mem_addr;
    assign o_mem_wdata = i_mem_wdata;
    assign o_mem_we = i_mem_we;
    assign o_mem_en = i_mem_en;
    
    // 根据内存访问宽度生成写掩码
    reg [2:0] r_mem_wmask;
    always @(*) begin
        case (i_mem_width)
            2'b00: r_mem_wmask = 3'b001;  // 字节访问 (8位)
            2'b01: r_mem_wmask = 3'b010;  // 半字访问 (16位)
            2'b10: r_mem_wmask = 3'b100;  // 字访问 (32位)
            default: r_mem_wmask = 3'b100; // 默认为字访问
        endcase
    end
    
    assign o_mem_wmask = r_mem_wmask;
    
    // 处理读取数据，根据宽度和符号扩展类型
    reg [31:0] r_mem_rdata;
    always @(*) begin
        case (i_mem_width)
            2'b00: begin  // 字节访问 (8位)
                if (i_mem_unsigned)
                    r_mem_rdata = {24'b0, i_mem_rdata[7:0]};  // 零扩展 (lbu)
                else
                    r_mem_rdata = {{24{i_mem_rdata[7]}}, i_mem_rdata[7:0]};  // 符号扩展 (lb)
            end
            2'b01: begin  // 半字访问 (16位)
                if (i_mem_unsigned)
                    r_mem_rdata = {16'b0, i_mem_rdata[15:0]};  // 零扩展 (lhu)
                else
                    r_mem_rdata = {{16{i_mem_rdata[15]}}, i_mem_rdata[15:0]};  // 符号扩展 (lh)
            end
            default: r_mem_rdata = i_mem_rdata;  // 字访问 (32位), 直接传递 (lw)
        endcase
    end
    
    assign o_mem_rdata = r_mem_rdata;
endmodule

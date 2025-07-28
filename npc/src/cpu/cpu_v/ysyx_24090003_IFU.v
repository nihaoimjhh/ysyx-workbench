`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module
module ysyx_24090003_IFU(
    input i_clk,
    input i_rst_n,
    input [31:0] i_next_pc,       // 从WBU得到的下一PC值
    input i_pc_update_en,         // PC更新使能信号
    output [31:0] o_inst,         // 当前指令
    output [31:0] o_pc            // 当前PC
);
    reg [31:0] r_pc;
    wire [31:0] w_pc_plus_4;      // PC+4结果
    wire w_cout;                  // 进位输出(未使用)
    
    // 输出信号赋值
    assign o_pc = r_pc;
    
    // 使用32位加法器实现PC+4
    adder_32bit pc_plus4_adder(
        .a(r_pc),
        .b(32'h4),
        .cin(1'b0),
        .sum(w_pc_plus_4),
        .cout(w_cout)
    );
    
    // DPIC接口声明
    import "DPI-C" function void set_inst(input int value);
    import "DPI-C" function int cpu_pmem_read(input int addr);
    import "DPI-C" function void set_pc(input int value);
    import "DPI-C" function void set_dnpc(input int value);
    
    // 从存储器读取指令
    assign o_inst = cpu_pmem_read(r_pc);
    
    // 将当前指令传递给仿真环境
    always @(*) begin
        set_inst(o_inst);
    end
    
    // 将当前PC传递给仿真环境
    always @(*) begin
        set_pc(o_pc);
    end
    
    // 将下一PC传递给仿真环境
    always @(*) begin
        if(i_pc_update_en)
            set_dnpc(i_next_pc);
        else
            set_dnpc(w_pc_plus_4);  // 使用加法器结果
    end

    // PC更新逻辑
    always @(posedge i_clk) begin
        if(~i_rst_n) begin
            r_pc <= 32'h80000000; // 复位值
        end
        else if(i_pc_update_en) begin
            r_pc <= i_next_pc;    // 跳转到指定PC
        end
        else begin
            r_pc <= w_pc_plus_4;  // 使用加法器结果
        end
    end
endmodule

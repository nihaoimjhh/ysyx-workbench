module ysyx_24090003_IFU(
    input cpu_clk,
    input cpu_rs,
    input [31:0] addr_read_data, // 从外部存储器读取的指令
    input [31:0] EXnpc, // 从外部存储器读取的指令
    input [31:0] EXspc, // 从外部存储器读取的指令
    input npc_write_enable,
    input spc_write_enable,
    output [31:0] inst,
    output [31:0] npc, // 下一个PC值
    output [31:0] pc // 下一个PC值
);
    reg [31:0] pc_r;
    reg [31:0] npc_r;
    reg [31:0] spc_r;
    reg [31:0] inst_r;
    // 取指逻辑
    assign inst = inst_r;
    assign npc = npc_r;
    assign pc = pc_r;
    always @(posedge cpu_clk or posedge cpu_rs) begin
        if (cpu_rs) begin
            pc_r <= 32'h80000000; // 重置时PC设为
            npc_r <= 32'h80000000; // 重置时npc设为0
            spc_r <= 32'h80000000; // 重置时npc设为0
            inst_r <= 32'b0; // 重置时输出0
            npc_r <= 32'h80000000; // 重置时npc设为0
        end else begin
            case(npc_write_enable)
            1:
                npc_r <= EXnpc; // 使用执行模块提供的 npc
            0:
                npc_r <= pc_r + 4; // 自加 4
            endcase

            case(spc_write_enable)
            1:
                spc_r <= EXspc; // 使用执行模块提供的 spc
            0:
                spc_r <= 32'b0; // 默认 spc 为 0
            endcase
            pc_r <= npc_r; // 更新PC为npc的值
            inst_r <= addr_read_data; // 从外部存储器读取指令
        end
    end
    
endmodule
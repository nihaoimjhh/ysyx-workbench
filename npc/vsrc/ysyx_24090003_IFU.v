module ysyx_24090003_IFU(
    input cpu_clk,
    input cpu_rs,
    input [31:0] addr_read_data, // 从外部存储器读取的指令
    input [31:0] EXnpc, // 从外部存储器读取的指令
    input [31:0] EXspc, // 从外部存储器读取的指令
    output reg [31:0] inst,
    output reg [31:0] npc // 下一个PC值
);
    reg [31:0] pc;

    // 取指逻辑
    always @(posedge cpu_clk ) begin
        if (cpu_rs) begin
            pc <= 32'h80000000; // 重置时PC设为0
            inst <= 32'b0; // 重置时输出0
            npc <= 32'h80000000; // 重置时npc设为0
        end else begin
                npc <= pc + 4; // 否则，npc加4
            end
            pc <= npc; // 更新PC为npc的值
            inst <= addr_read_data; // 从外部存储器读取指令
        end
    
endmodule
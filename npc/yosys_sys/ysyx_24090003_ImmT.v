module ysyx_24090003_ImmT( 
    input [31:0]inst,
    output reg [31:0]imm
);
    wire [2:0] Itype;
    wire [31:0] immI;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immU;
    wire [31:0] immJ;
ysyx_24090003_ITF ysyx_24090003_instType(
    .inst(inst),
    .Itype(Itype)
);
    assign immI = {{20{inst[31]}}, inst[31:20]};
    assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
    assign immU = {inst[31:12], 12'b0};
    assign immJ = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
    always @(*) begin
        case (Itype)
            3'b001: imm = immI;
            3'b010: imm = immS;
            3'b011: imm = immB;
            3'b100: imm = immU;
            3'b101: imm = immJ;
            default: imm = 32'b0;
        endcase
    end

endmodule
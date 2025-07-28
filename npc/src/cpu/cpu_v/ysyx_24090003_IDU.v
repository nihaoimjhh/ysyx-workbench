`include "ysyx_24090003_define.v"

(*dont_touch = "true"*)  // Prevent synthesis tool from optimizing the module
module ysyx_24090003_IDU(
    input [31:0] i_inst,           // 从IFU接收的指令
    input i_rst_n,
    output [4:0] o_rs1_addr,       // 源寄存器1地址
    output [4:0] o_rs2_addr,       // 源寄存器2地址
    output [4:0] o_rd_addr,        // 目标寄存器地址
    output [6:0] o_opcode,         // 操作码
    output [2:0] o_funct3,         // 功能码
    output [6:0] o_funct7,         // 功能码7
    output [31:0] o_imm,           // 立即数

    // 修改后的内存控制信号
    output reg o_mem_we,           // 内存写使能（1：写，0：读）
    output reg o_mem_en,           // 内存使能
    output reg [1:0] o_mem_width,  // 新增：内存访问宽度（00:byte, 01:halfword, 10:word）
    output reg o_mem_unsigned,     // 新增：是否为无符号加载

    // 其他控制信号保持不变
    output reg o_reg_wen,          // 寄存器写使能
    output reg o_mem_to_reg,       // 内存到寄存器信号
    output reg o_jump,             // 跳转信号

    // 新增EXU控制信号
    output reg [3:0] o_alu_op,     // ALU操作码（4位）
    output reg [1:0] o_alu_src1_sel, // ALU第一操作数选择（00:reg_data1, 01:pc, 10:0）
    output reg [1:0] o_alu_src2_sel, // ALU第二操作数选择（00:reg_data2, 01:imm, 10:4）
    output reg o_branch,           // 是否为条件分支指令
    output reg o_jalr,             // 是否为JALR指令
    output reg o_ebreak            // 是否为EBREAK指令
  );
  import "DPI-C" function void inst_not_found(input byte  flag, input byte  rst);

           // 指令字段提取
           assign o_rs1_addr = i_inst[19:15];
           assign o_rs2_addr = i_inst[24:20];
           assign o_rd_addr = i_inst[11:7];
           assign o_funct3 = i_inst[14:12];
           assign o_funct7 = i_inst[31:25];  // 新增: 提取funct7字段
           assign o_opcode = i_inst[6:0];

           // 立即数生成逻辑（保持不变）
           wire [31:0] w_imm_i = {{20{i_inst[31]}}, i_inst[31:20]};                                   // I型指令
           wire [31:0] w_imm_s = {{20{i_inst[31]}}, i_inst[31:25], i_inst[11:7]};                     // S型指令
           wire [31:0] w_imm_b = {{20{i_inst[31]}}, i_inst[7], i_inst[30:25], i_inst[11:8], 1'b0};    // B型指令
           wire [31:0] w_imm_u = {i_inst[31:12], 12'b0};                                              // U型指令
           wire [31:0] w_imm_j = {{12{i_inst[31]}}, i_inst[19:12], i_inst[20], i_inst[30:21], 1'b0};  // J型指令

           // 指令类型识别
           reg [2:0] r_instr_type;
           always @(*)
           begin
             case (o_opcode)
               7'b1110011:
                 r_instr_type = 3'b000; // 系统指令(ebreak)
               7'b0010011:
                 r_instr_type = 3'b001; // addi sltiu(I型)
               7'b0000011:
                 r_instr_type = 3'b001; // lw (I型)
               7'b1100111:
                 r_instr_type = 3'b001; // jalr (I型)
               7'b0100011:
                 r_instr_type = 3'b010; // sw (S型)
               7'b1100011:
                 r_instr_type = 3'b011; // bne (B型)
               7'b0010111:
                 r_instr_type = 3'b100; // auipc (U型)
               7'b0110111:
                 r_instr_type = 3'b100; // lui (U型)
               7'b1101111:
                 r_instr_type = 3'b101; // jal (J型)
               7'b0110011:
                 r_instr_type = 3'b110; // R型指令(如add,sub)
               default:
                 r_instr_type = 3'b000; // 默认值
             endcase
           end

           // 立即数选择
           reg [31:0] r_imm_out;
           always @(*)
           begin
             case (r_instr_type)
               3'b001:
                 r_imm_out = w_imm_i;
               3'b010:
                 r_imm_out = w_imm_s;
               3'b011:
                 r_imm_out = w_imm_b;
               3'b100:
                 r_imm_out = w_imm_u;
               3'b101:
                 r_imm_out = w_imm_j;
               3'b110:
                 r_imm_out = 32'b0; // R型指令无立即数
               default:
                 r_imm_out = 32'b1; // ebreak默认值
             endcase
           end

           assign o_imm = r_imm_out;

           // 控制信号生成
           always @(*)
           begin
             // 默认值
             o_mem_we = 1'b0;       // 默认为读操作
             o_mem_en = 1'b0;       // 默认不访问内存
             o_reg_wen = 1'b0;
             o_mem_to_reg = 1'b0;
             o_jump = 1'b0;
             o_branch = 1'b0;
             o_jalr = 1'b0;
             o_ebreak = 1'b0;
             o_mem_width = 2'b10;   // 默认为字访问
             o_mem_unsigned = 1'b0; // 默认为符号扩展

             // ALU控制默认值
             o_alu_op = `ALU_ADD;     // 默认加法
             o_alu_src1_sel = `SRC_REG; // 默认使用寄存器值
             o_alu_src2_sel = `SRC_IMM; // 默认使用立即数

             case (o_opcode)
               7'b0000011:
               begin  // 加载指令 (LB/LBU/LH/LHU/LW)
                 o_reg_wen = 1'b1;  // 寄存器写使能
                 o_mem_en = 1'b1;   // 内存访问使能
                 o_mem_we = 1'b0;   // 读操作
                 o_mem_to_reg = 1'b1; // 从内存到寄存器
                 o_alu_src1_sel = `SRC_REG; // 使用寄存器值
                 o_alu_src2_sel = `SRC_IMM; // 使用立即数
                 o_alu_op = `ALU_ADD; // rs1 + imm计算内存地址

                 case (o_funct3)
                   3'b000: begin  // LB
                       o_mem_width = 2'b00;    // 字节访问
                       o_mem_unsigned = 1'b0;  // 符号扩展
                   end
                   3'b001:
                   begin  // LH
                     o_mem_width = 2'b01;    // 半字访问
                     o_mem_unsigned = 1'b0;  // 符号扩展
                   end
                   3'b010:
                   begin  // LW
                     o_mem_width = 2'b10;    // 字访问
                     o_mem_unsigned = 1'b0;  // 符号扩展
                   end
                   3'b100:
                   begin  // LBU
                     o_mem_width = 2'b00;    // 字节访问
                     o_mem_unsigned = 1'b1;  // 零扩展
                   end
                   3'b101:
                   begin  // LHU
                     o_mem_width = 2'b01;    // 半字访问
                     o_mem_unsigned = 1'b1;  // 零扩展
                   end
                   default:
                   begin
                     o_mem_width = 2'b10;    // 默认字访问
                     inst_not_found(8'hff, {8{i_rst_n}}); // 未知指令处理
                   end
                 endcase
               end

               7'b0010011:
               begin  // I型算术指令
                 o_reg_wen = 1'b1;
                 o_alu_src1_sel = `SRC_REG;  // 使用寄存器值
                 o_alu_src2_sel = `SRC_IMM;  // 使用立即数

                 case (o_funct3)
                   3'b000:
                     o_alu_op = `ALU_ADD;   // ADDI
                   3'b010:
                     o_alu_op = `ALU_SLT;   // SLTI
                   3'b011:
                     o_alu_op = `ALU_SLTU;  // SLTIU
                   3'b100:
                     o_alu_op = `ALU_XOR;   // XORI
                   3'b110:
                     o_alu_op = `ALU_OR;    // ORI
                   3'b111:
                     o_alu_op = `ALU_AND;   // ANDI
                   3'b001:
                     o_alu_op = `ALU_SLL;   // SLLI
                   3'b101:
                   begin
                     // 根据imm[10]区分SRLI和SRAI
                     if (i_inst[30] == 1'b0)
                       o_alu_op = `ALU_SRL;   // SRLI
                     else
                       o_alu_op = `ALU_SRA;   // SRAI
                   end
                   default:
                   begin
                     o_alu_op = `ALU_ADD;
                     inst_not_found(8'hff, {8{i_rst_n}}); // 未知指令处理
                   end
                 endcase
               end

               7'b0010111:
               begin  // auipc
                 o_reg_wen = 1'b1;
                 o_alu_src1_sel = `SRC_PC;    // 使用PC值
                 o_alu_src2_sel = `SRC_IMM;   // 使用立即数
                 o_alu_op = `ALU_ADD;       // PC + imm
               end

               7'b1100111:
               begin  // jalr
                 o_reg_wen = 1'b1;
                 o_jump = 1'b1;
                 o_jalr = 1'b1;           // 设置JALR标志
                 o_alu_src1_sel = `SRC_REG;   // 使用寄存器值
                 o_alu_src2_sel = `SRC_IMM;   // 使用立即数
                 o_alu_op = `ALU_ADD;       // rs1 + imm
               end

               7'b1101111:
               begin  // jal
                 o_reg_wen = 1'b1;
                 o_jump = 1'b1;
                 o_alu_src1_sel = `SRC_PC;    // 使用PC值
                 o_alu_src2_sel = `SRC_IMM;   // 使用立即数
                 o_alu_op = `ALU_ADD;       // PC + imm
               end

               7'b0110111:
               begin  // lui
                 o_reg_wen = 1'b1;
                 o_alu_src1_sel = `SRC_ZERO;  // 使用0
                 o_alu_src2_sel = `SRC_IMM;   // 使用立即数
                 o_alu_op = `ALU_LUI;       // 直接输出imm
               end

               7'b0100011:
               begin  // S型存储指令 (SB/SH/SW)
                 o_mem_en = 1'b1;        // 内存访问使能
                 o_mem_we = 1'b1;        // 写操作
                 o_alu_src1_sel = `SRC_REG;   // 使用寄存器值(rs1)
                 o_alu_src2_sel = `SRC_IMM;   // 使用立即数
                 o_alu_op = `ALU_ADD;       // rs1 + imm计算内存地址

                 case (o_funct3)
                   3'b000:
                   begin  // SB
                     o_mem_width = 2'b00;  // 字节访问
                   end
                   3'b001:
                   begin  // SH
                     o_mem_width = 2'b01;  // 半字访问
                   end
                   3'b010:
                   begin  // SW
                     o_mem_width = 2'b10;  // 字访问
                   end
                   default:
                   begin
                     o_mem_width = 2'b10;  // 默认字访问
                     inst_not_found(8'hff, {8{i_rst_n}}); // 未知指令处理
                   end
                 endcase
               end

               7'b0110011:
               begin  // R型算术指令
                 o_reg_wen = 1'b1;
                 o_alu_src1_sel = `SRC_REG;  // 使用寄存器值
                 o_alu_src2_sel = `SRC_REG;  // 使用寄存器值

                 case (o_funct3)
                   3'b000:
                   begin
                     // 根据funct7区分ADD和SUB
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_ADD;   // ADD
                     else if (o_funct7 == `FUNCT7_ALT)
                       o_alu_op = `ALU_SUB;   // SUB
                     else
                     begin
                       o_alu_op = `ALU_ADD;
                       inst_not_found(8'hff, {8{i_rst_n}}); // 未知指令处理
                     end
                   end
                   3'b001:
                   begin
                     // 逻辑左移 - SLL (funct7应为0000000)
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_SLL;
                     else
                     begin
                       o_alu_op = `ALU_SLL;
                       inst_not_found(8'hff, {8{i_rst_n}});
                     end
                   end
                   3'b010:
                   begin
                     // 有符号小于比较 - SLT (funct7应为0000000)
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_SLT;
                     else
                     begin
                       o_alu_op = `ALU_SLT;
                       inst_not_found(8'hff, {8{i_rst_n}});
                     end
                   end
                   3'b011:
                   begin
                     // 无符号小于比较 - SLTU (funct7应为0000000)
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_SLTU;
                     else
                     begin
                       o_alu_op = `ALU_SLTU;
                       inst_not_found(8'hff, {8{i_rst_n}});
                     end
                   end
                   3'b100:
                   begin
                     // 异或 - XOR (funct7应为0000000)
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_XOR;
                     else
                     begin
                       o_alu_op = `ALU_XOR;
                       inst_not_found(8'hff, {8{i_rst_n}});
                     end
                   end
                   3'b101:
                   begin
                     // 根据funct7区分SRL和SRA
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_SRL;   // 逻辑右移
                     else if (o_funct7 == `FUNCT7_ALT)
                       o_alu_op = `ALU_SRA;   // 算术右移
                     else
                     begin
                       o_alu_op = `ALU_SRL;
                       inst_not_found(8'hff, {8{i_rst_n}});
                     end
                   end
                   3'b110:
                   begin
                     // 或 - OR (funct7应为0000000)
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_OR;
                     else
                     begin
                       o_alu_op = `ALU_OR;
                       inst_not_found(8'hff, {8{i_rst_n}});
                     end
                   end
                   3'b111:
                   begin
                     // 与 - AND (funct7应为0000000)
                     if (o_funct7 == `FUNCT7_STD)
                       o_alu_op = `ALU_AND;
                     else
                     begin
                       o_alu_op = `ALU_AND;
                       inst_not_found(8'hff, {8{i_rst_n}});
                     end
                   end
                   default:
                   begin
                     o_alu_op = `ALU_ADD;
                     inst_not_found(8'hff, {8{i_rst_n}}); // 未知指令处理
                   end
                 endcase
               end

               7'b1100011:
               begin  // 条件分支指令 (B型)
                 o_branch = 1'b1;         // 设置分支标志
                 o_alu_src1_sel = `SRC_REG;   // 使用寄存器值比较
                 o_alu_src2_sel = `SRC_REG;   // 使用寄存器值比较

                 case (o_funct3)
                   3'b000:
                     o_alu_op = `ALU_SUB;   // BEQ - 相等比较
                   3'b001:
                     o_alu_op = `ALU_SUB;   // BNE - 不等比较
                   3'b100:
                     o_alu_op = `ALU_SLT;   // BLT - 有符号小于比较
                   3'b101:
                     o_alu_op = `ALU_SLT;   // BGE - 有符号大于等于比较
                   3'b110:
                     o_alu_op = `ALU_SLTU;  // BLTU - 无符号小于比较
                   3'b111:
                     o_alu_op = `ALU_SLTU;  // BGEU - 无符号大于等于比较
                   default:
                   begin
                     o_alu_op = `ALU_SUB;
                     inst_not_found(8'hff, {8{i_rst_n}}); // 未知指令处理
                   end
                 endcase
               end

               7'b1110011:
               begin  // ebreak
                 o_ebreak = 1'b1;         // 设置EBREAK标志
               end

               default:
               begin
                 // 未实现指令的默认处理
                 o_reg_wen = 1'b0;
                 o_mem_en = 1'b0;
                 o_mem_we = 1'b0;
                 inst_not_found(8'hff, {8{i_rst_n}});
               end
             endcase
           end
         endmodule

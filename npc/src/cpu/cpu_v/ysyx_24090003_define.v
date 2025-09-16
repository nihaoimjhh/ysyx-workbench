// ALU操作码定义
`define ALU_ADD 4'b0000  // 加法
`define ALU_SUB 4'b0001  // 减法
`define ALU_AND 4'b0010  // 按位与
`define ALU_OR 4'b0011  // 按位或
`define ALU_XOR 4'b0100  // 按位异或
`define ALU_SLL 4'b0101  // 逻辑左移
`define ALU_SRL 4'b0110  // 逻辑右移
`define ALU_SRA 4'b0111  // 算术右移
`define ALU_SLT 4'b1000  // 有符号小于比较
`define ALU_SLTU 4'b1001  // 无符号小于比较
`define ALU_LUI 4'b1010  // 仅输出B (LUI指令使用)

// ALU操作数选择信号定义
`define SRC_REG 2'b00    // 使用寄存器值
`define SRC_IMM 2'b01    // 使用立即数
`define SRC_PC 2'b01    // 使用PC值
`define SRC_ZERO 2'b10    // 使用常数0
`define SRC_FOUR 2'b10    // 使用常数4

// 分支类型定义
`define BRANCH_BEQ 3'b000  // 相等分支
`define BRANCH_BNE 3'b001  // 不相等分支
`define BRANCH_BLT 3'b100  // 小于分支
`define BRANCH_BGE 3'b101  // 大于等于分支
`define BRANCH_BLTU 3'b110  // 无符号小于分支
`define BRANCH_BGEU 3'b111  // 无符号大于等于分支

// 常量定义
`define CONSTANT_FOUR 32'h4         // 常数4
`define JALR_MASK 32'hFFFFFFFE  // JALR指令清零最低位的掩码

// funct7常量定义
`define FUNCT7_STD 7'b0000000       // 标准操作
`define FUNCT7_ALT 7'b0100000       // 替代操作(SUB/SRA等)

// CSR寄存器地址定义
`define CSR_MSTATUS 12'h300          // 机器状态寄存器
`define CSR_MTVEC 12'h305          // 机器陷阱向量寄存器
`define CSR_MEPC 12'h341          // 机器异常程序计数器
`define CSR_MCAUSE 12'h342          // 机器异常原因寄存器
`define CSR_MCYCLE 12'hB00          // 机器周期计数器低32位
`define CSR_MCYCLEH 12'hB80          // 机器周期计数器高32位

// 异常原因编码
`define ECALL_M_MODE 32'd11           // 机器模式下的环境调用

// 系统指令编码
`define MRET_INST 12'h302          // MRET指令编码 (0011000 00010)

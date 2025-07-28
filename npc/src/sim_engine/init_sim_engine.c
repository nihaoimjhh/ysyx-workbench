#include <common.h>
#include "decode.h"
#include "get_elf.h"
#include "reg.h"

/* 全局变量 */
extern Decode s;
Vysyx_24090003_computer* top;
VerilatedFstC* tfp;
uint64_t dump_num = 0;
extern CPU_state cpu;

/* 函数声明 */
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_difftest(char *ref_so_file, long img_size, int port);

/* 差分测试相关变量 */
extern char *diff_so_file;
extern long img_size;
extern int port;
extern int difftest_port;

/* ELF文件解析相关变量 - 用于ftrace */
extern Elf32_Ehdr ehdr;
extern Elf32_Shdr *shdr_pointer;
extern char *strtab;
extern char *shstrtab;
extern int symlens;
extern int symtab_index;
extern int strtab_index;
extern Elf32_Sym *symtab_pointer;
extern int call_count;
extern uint64_t g_nr_guest_inst;

/* 函数原型声明 */
static void init_verilator(void);
static void perform_reset(void);
static void setup_difftest(void);
static void perform_ftrace(void);
static void print_instruction(void);

/**
 * 初始化仿真引擎
 */
void init_sim_engine() {
    // 初始化Verilator仿真环境
    init_verilator();
    
    // 执行复位操作
    perform_reset();
    
    // 启动差分测试（可通过宏控制）
#if ENABLE_DIFFTEST
    setup_difftest();
#endif

    g_nr_guest_inst++;

    // 函数跟踪（可通过宏控制）
#if ENABLE_FTRACE
    perform_ftrace();
#endif

    // 指令反汇编和打印（可通过宏控制）
#if ENABLE_DISASM
    print_instruction();
#endif

    // 取消复位状态
    top->i_rst_n = 1;
}

/**
 * 初始化Verilator仿真环境
 */
static void init_verilator() {
    printf(ANSI_COLOR_GREEN_SMALL "init simulation creat sim object\n" ANSI_COLOR_RESET);
    Verilated::traceEverOn(true);
    
    // 创建仿真对象
    top = new Vysyx_24090003_computer;
    
    // 配置波形跟踪
    tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    printf("open sim.fst to dump fst\n");
    tfp->open("sim.fst");
    
    printf(ANSI_COLOR_GREEN_SMALL "init pc \n" ANSI_COLOR_GREEN_SMALL);
    printf(ANSI_COLOR_GREEN_BIG "start simulation\n" ANSI_COLOR_RESET);
}

/**
 * 执行复位操作
 */
static void perform_reset() {
    int i;
    // top->eval();
    top->i_clk = 0;
    for(i = 0; i < 3; i++) {
        top->i_clk = !top->i_clk;
        top->i_rst_n = 0;
        top->eval();
        tfp->dump(dump_num++);
    }
    // 此时已取指但未执行，适合跟踪指令
}

/**
 * 设置差分测试
 */
static void setup_difftest() {
    // 放在复位后调用是因为只有复位后PC值才是正确的
    init_difftest(diff_so_file, img_size, difftest_port);
}

/**
 * 执行函数追踪
 */
static void perform_ftrace() {
    // 使用ELF信息进行函数追踪
    inst_print_funcname(shdr_pointer, strtab, symtab_pointer,
                       s.cpu_inst, s.dnpc, s.pc, symlens, &call_count);
}

/**
 * 打印和反汇编当前指令
 */
static void print_instruction() {
    int i;
    char *p = s.logbuf;
    
    // 打印PC地址
    p += snprintf(p, sizeof(s.logbuf), "0x%08x:", s.pc);
    
    // 打印指令字节
    int ilen = 4;
    uint8_t *inst = (uint8_t *)&s.cpu_inst;
    for (i = ilen - 1; i >= 0; i--) {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    
    // 对齐空格
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
    
    // 反汇编指令
    disassemble(p, s.logbuf + sizeof(s.logbuf) - p,
               s.pc, (uint8_t *)&s.cpu_inst, ilen);
               
    // 打印指令信息
    printf("%ld: %s\n", g_nr_guest_inst, s.logbuf);
}
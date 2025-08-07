#include "cpu.h"
#include "common.h"
#include "paddr.h"
#include "sdb.h"
#include "locale.h"
#include "decode.h"
#include "reg.h"
#include "get_elf.h"
#include "iringbuf.h"
#include "difftest.h"
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

/* 函数声明 */
void execute(uint64_t n); 
void exec_once(Decode *s);
void isa_exec_once(Decode *s);
static void perform_ftrace(Decode *s);
static void perform_disasm(Decode *s);
static void trace_and_difftest(Decode *_this, vaddr_t dnpc);

/* 全局变量 */
extern NPCState npc_state;
extern uint64_t dump_num;
extern Vysyx_24090003_computer* top;
extern VerilatedFstC* tfp;

extern word_t cpu_inst;
Decode s;
CPU_state cpu;

/* 函数追踪相关全局变量 */
extern Elf32_Ehdr ehdr;
extern Elf32_Shdr *shdr_pointer;
extern char *strtab;
extern char *shstrtab;
extern int symlens;
extern int symtab_index;
extern int strtab_index;
extern Elf32_Sym *symtab_pointer;
int call_count=0;

uint64_t g_nr_guest_inst = 0;

/**
 * 主体CPU执行函数
 */
void cpu_exec(uint64_t n) {
      switch (npc_state.state) {
            case NPC_END: case NPC_ABORT:
                printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
                return;
            default: npc_state.state = NPC_RUNNING;
      }
      
      execute(n);
      
      switch (npc_state.state) {
              case NPC_RUNNING: 
                  npc_state.state = NPC_STOP; 
                  break;
              case NPC_END: 
              case NPC_ABORT:
                  if(npc_state.state==NPC_ABORT){
                      printf("\033[1;31m""ABORT""\033[0m\n");
                  }
                  else if (npc_state.halt_ret == 0){
                      printf("\033[1;32m"".-------------------------.\n|                       _ |\n|  __ _  ___   ___   __| ||\n| / _` |/ _ \\ / _ \\ / _` ||\n|| (_| | (_) | (_) | (_| ||\n| \\__, |\\___/ \\___/ \\__,_||\n| |___/                   |\n'-------------------------'\n""\033[0m");
                      printf("\033[1;32m""HIT GOOD TRAP""\033[0m");
                      printf("   at pc:%x\n",npc_state.halt_pc);
                 }
                  else{
                    printf("\033[1;31m"".-------------------.\n| _               _ |\n|| |__   __ _  __| ||\n|| '_ \\ / _` |/ _` ||\n|| |_) | (_| | (_| ||\n||_.__/ \\__,_|\\__,_||\n'-------------------'\n""\033[0m\n");
                    printf("\033[1;31m""HIT BAD TRAP""\033[0m");
                    printf("   at pc:%x\n",npc_state.halt_pc);
                  }
                  // 确保波形文件被正确保存
                  if (tfp) {
                      tfp->flush();
                      tfp->close();
                      printf(ANSI_COLOR_GREEN_BIG "wave has been included in sim.fst\n" ANSI_COLOR_RESET);
                  }
      }
}

/**
 * CPU执行核心函数
 */
void execute(uint64_t n) {

  #if ENABLE_DISASM
  char irb[11][128];
  int last_count=0;
  #endif
  for (;n > 0; n--) {
    // 执行指令
    exec_once(&s);
    #if ENABLE_DISASM
    // 管理指令缓冲区
    last_count=iringbufmanage(irb,g_nr_guest_inst,&s);
    #endif
    // 执行差分测试和监视点检查
    trace_and_difftest(&s, cpu.pc);
    
    if (npc_state.state != NPC_RUNNING) {
        if(npc_state.state == NPC_ABORT) {
          #if ENABLE_DISASM
           iringbufprint(irb,last_count);
          #endif
           if (tfp) {
               tfp->flush();
           }
        }
        break;
    }
  }
}

/**
 * 执行单条指令
 */
void exec_once(Decode *s) {
  // 执行指令
  isa_exec_once(s);
  
  // 函数追踪
#if ENABLE_FTRACE
  perform_ftrace(s);
#endif

  // 反汇编和打印指令
#if ENABLE_DISASM
  perform_disasm(s);
#endif
}

/**
 * 执行函数追踪
 */
static void perform_ftrace(Decode *s) {
  inst_print_funcname(shdr_pointer, strtab, symtab_pointer,
                     s->cpu_inst, s->dnpc, s->pc, symlens, &call_count);
}

/**
 * 执行反汇编和打印指令
 */
static void perform_disasm(Decode *s) {
  int i;
  char *p = s->logbuf;
  
  // 打印PC地址
  p += snprintf(p, sizeof(s->logbuf), "0x%08x:", s->pc);
  
  // 打印指令字节
  int ilen = 4;
  uint8_t *inst = (uint8_t *)&s->cpu_inst;
  for (i = ilen - 1; i >= 0; i--) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  
  // 添加对齐空格
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  
  // 反汇编指令
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
             s->pc, (uint8_t *)&s->cpu_inst, ilen);
             
  // 打印指令信息
  printf("%ld: %s\n", g_nr_guest_inst, s->logbuf);
}

/**
 * 执行差分测试和监视点检查
 */
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#if ENABLE_DIFFTEST
  difftest_step(_this->pc, dnpc);
#endif
#if ENABLE_WP
  if(wp_check()) {
    npc_state.state = NPC_STOP; 
 }
#endif
}

/**
 * 底层指令执行
 */
void isa_exec_once(Decode *s) {
    int i;
    for (i = 0; i < 2; i++) {
        top->i_clk = !top->i_clk;
        top->eval();
        #if ENABLE_WAVE
        tfp->dump(dump_num++);
        #endif
    }
    g_nr_guest_inst++;
}
#include <common.h>
#include <cpu.h>
#include "decode.h"
#include "paddr.h"
#include <stdio.h>
#include <sys/time.h>
extern NPCState npc_state;
extern CPU_state cpu;
extern Decode s;
extern uint64_t dump_num;
extern Vysyx_24090003_computer *top;
extern VerilatedFstC *tfp;
// 获取当前时间的微秒值
static uint64_t get_time();
static uint64_t get_time_internal();
static uint64_t boot_time = 0;
extern "C" void finish_simulation()
{
     Verilated::gotFinish(true);
     npc_state.state = NPC_END;
     NPCTRAP(s.pc, cpu.gpr[10]);
     tfp->dump(dump_num++);
     top->final();
     tfp->close();
     // cpu要top->eval();还要dump，直接删了会导致报错，并且无法用finish判断有点奇怪
}
extern "C" void set_gpr(int index, word_t value)
{
     if (index >= 0 && index < 16)
     {
          cpu.gpr[index] = value;
     }
}
extern "C" void set_inst(word_t value)
{
     s.cpu_inst = value;
}
extern "C" void set_pc(vaddr_t value)
{
     s.pc = value;
     cpu.pc = value;
}
extern "C" void set_dnpc(vaddr_t value)
{
     s.dnpc = value;
}
extern "C" int cpu_pmem_read(paddr_t addr)
{
     if (addr == 0xa0000048 || addr == 0xa000004c)
     {
          uint64_t us = get_time();
          if (addr == 0xa0000048)
               return (uint32_t)us;
          else
               return (uint32_t)(us >> 32);
     }
     else
          return paddr_read(addr, 4);
}
extern "C" void cpu_pmem_write(paddr_t addr, word_t data, uint8_t wmask)
{
    
     if (addr == 0xa00003f8)
     {
          static int counter = 0;
          counter++;
          if (counter == 3) {  // 每三次访问输出一次
               putchar((char)data);
               counter = 0;  // 重置计数器
          }
     }
     else
     {
          if (wmask == 0x4)
          {
               paddr_write(addr, data, 4);
          }
          else if (wmask == 0x2)
               paddr_write(addr, data, 2);
          else if (wmask == 0x1)
               paddr_write(addr, data, 1);
          else
          {

               printf("mask error %x\n", wmask);
               npc_state.state = NPC_ABORT;
          }
     }
}
extern "C" void inst_not_found(uint8_t flag, uint8_t rst)
{
     if (flag == 0xff && rst == 0xff)
     {
          printf(ANSI_COLOR_RED_BIG ".---------------------------------------------------------.\n| ___           _                   _   _                 |\n||_ _|_ __  ___| |_ _ __ _   _  ___| |_(_) ___  _ __      |\n| | || '_ \\/ __| __| '__| | | |/ __| __| |/ _ \\| '_ \\     |\n| | || | | \\__ \\ |_| |  | |_| | (__| |_| | (_) | | | |    |\n||___|_| |_|___/\\__|_|   \\__,_|\\___|\\__|_|\\___/|_| |_|    |\n|             _             __                       _    |\n| _ __   ___ | |_          / _| ___  _   _ _ __   __| |   |\n|| '_ \\ / _ \\| __|        | |_ / _ \\| | | | '_ \\ / _` |   |\n|| | | | (_) | |_         |  _| (_) | |_| | | | | (_| |   |\n||_| |_|\\___/ \\__|        |_|  \\___/ \\__,_|_| |_|\\__,_|   |\n'---------------------------------------------------------' \n" ANSI_COLOR_RESET);
          npc_state.state = NPC_ABORT;
          return;
     }
}
uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}
static uint64_t get_time_internal() {
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  return us;
//   struct timeval now;
//   gettimeofday(&now, NULL);
//   uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
//   return us;
}


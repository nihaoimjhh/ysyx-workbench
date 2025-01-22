#ifndef __CPU_H__
#define __CPU_H__

#include <utils.h>
void set_npc_state(int state, vaddr_t pc, int halt_ret);
#define NPCTRAP(thispc, code) set_npc_state(NPC_END, thispc, code);



#endif
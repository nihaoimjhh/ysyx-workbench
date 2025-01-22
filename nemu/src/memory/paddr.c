/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif
//用来记录读写的次数
int paddr_read_logbuf_count=0;
int paddr_write_logbuf_count=0;
typedef struct paddr_read_logbuf{
  paddr_t addr;
  int len;
  word_t data;
  }paddr_read_logbuf;
typedef struct paddr_write_logbuf{
  paddr_t addr;
  int len;
  word_t data;
  }paddr_write_logbuf;
paddr_read_logbuf paddr_read_logbufs[10];
paddr_write_logbuf paddr_write_logbufs[10];
void paddr_read_logbuf_write(paddr_t addr,int len,word_t data);
void paddr_write_logbuf_write(paddr_t addr,int len,word_t data);
void paddr_read_logbuf_print();
void paddr_write_logbuf_print();


uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) {IFDEF(CONFIG_MTRACE, paddr_read_logbuf_write(addr,len,pmem_read(addr,len));paddr_read_logbuf_print();)
      return pmem_read(addr, len);
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
 
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) {IFDEF(CONFIG_MTRACE, paddr_write_logbuf_write(addr,len,data);paddr_write_logbuf_print();)
      pmem_write(addr, len, data); 
      return; 
  }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);

  out_of_bound(addr);
}

void paddr_read_logbuf_write(paddr_t addr,int len,word_t data){ 
  paddr_read_logbuf_count%=10;
  paddr_read_logbufs[paddr_read_logbuf_count].addr=addr;
  paddr_read_logbufs[paddr_read_logbuf_count].len=len;
  paddr_read_logbufs[paddr_read_logbuf_count].data=data;
  paddr_read_logbuf_count++;
}

void paddr_write_logbuf_write(paddr_t addr,int len,word_t data){
  paddr_write_logbuf_count%=10;
  paddr_write_logbufs[paddr_write_logbuf_count].addr=addr;
  paddr_write_logbufs[paddr_write_logbuf_count].len=len;
  paddr_write_logbufs[paddr_write_logbuf_count].data=data;
  paddr_write_logbuf_count++;
}

void paddr_read_logbuf_print(){
  printf("\033[1;31m" "    paddr_read_logbuf\n" "\033[0m"); // 蓝色
  for(int i=0;i<10;i++){
    if(i==(paddr_read_logbuf_count-1)%10){
      printf("\033[1;31m" "===>addr:%x len:%d data:%x\n" "\033[0m",paddr_read_logbufs[i].addr,paddr_read_logbufs[i].len,paddr_read_logbufs[i].data);
      continue;//上面减一是因为存完logbuf之后又加了一
    }
    printf("    addr:%x len:%d data:%x\n",paddr_read_logbufs[i].addr,paddr_read_logbufs[i].len,paddr_read_logbufs[i].data);
  }
}
void paddr_write_logbuf_print(){
  printf("\033[1;31m" "    paddr_write_logbuf\n" "\033[0m"); // 红色
  for(int i=0;i<10;i++){
    if(i==(paddr_write_logbuf_count-1)%10){
      printf("\033[1;31m" "===>addr:%x len:%d data:%x\n" "\033[0m",paddr_write_logbufs[i].addr,paddr_write_logbufs[i].len,paddr_write_logbufs[i].data);
      continue;//上面减一是因为存完logbuf之后又加了一
    }
    printf("    addr:%x len:%d data:%x\n",paddr_write_logbufs[i].addr,paddr_write_logbufs[i].len,paddr_write_logbufs[i].data);
  }
}
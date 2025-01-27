#include "common.h"
#include "paddr.h"
#include "host.h"
uint8_t pmem[MSIZE] ;
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MBASE; }





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

word_t pmem_read(paddr_t addr, int len) {
          word_t ret = host_read(guest_to_host(addr), len);
          return ret;
      
}



void pmem_write(paddr_t addr,  word_t data ,int len) {
          host_write(guest_to_host(addr), len, data);
}



word_t paddr_read(paddr_t addr, int len) {
    if(!out_of_bound(addr)){
        paddr_read_logbuf_write(addr,len,pmem_read(addr,len));
        paddr_read_logbuf_print();
        return pmem_read(addr, len);
    }
    else{
      printf(ANSI_COLOR_RED_BIG "pmem_read out of bound\n" ANSI_COLOR_RESET);
      return 0;
    }
}

void paddr_write(paddr_t addr,  word_t data,int len) {
    if(!out_of_bound(addr)){
        paddr_write_logbuf_write(addr,len,data);
        paddr_write_logbuf_print();
        pmem_write(addr, len, data);
    }
    else{
      printf(ANSI_COLOR_RED_BIG "pmem_read out of bound\n" ANSI_COLOR_RESET); 
      return; 
    }
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
  printf(ANSI_COLOR_BLUE_BIG "    paddr_read_logbuf\n" ANSI_COLOR_RESET);
  for(int i=0;i<10;i++){
    if(i==(paddr_read_logbuf_count-1)%10){
      printf("\033[1;31m" "===>addr:%x len:%d data:%x\n" "\033[0m",paddr_read_logbufs[i].addr,paddr_read_logbufs[i].len,paddr_read_logbufs[i].data);
      continue;//上面减一是因为存完logbuf之后又加了一
    }
    printf("    addr:%x len:%d data:%x\n",paddr_read_logbufs[i].addr,paddr_read_logbufs[i].len,paddr_read_logbufs[i].data);
  }
}
void paddr_write_logbuf_print(){
  printf(ANSI_COLOR_BLUE_BIG "    paddr_write_logbuf\n" ANSI_COLOR_RESET); // 红色
  for(int i=0;i<10;i++){
    if(i==(paddr_write_logbuf_count-1)%10){
      printf("\033[1;31m" "===>addr:%x len:%d data:%x\n" "\033[0m",paddr_write_logbufs[i].addr,paddr_write_logbufs[i].len,paddr_write_logbufs[i].data);
      continue;//上面减一是因为存完logbuf之后又加了一
    }
    printf("    addr:%x len:%d data:%x\n",paddr_write_logbufs[i].addr,paddr_write_logbufs[i].len,paddr_write_logbufs[i].data);
  }
}
int out_of_bound(paddr_t paddr){
     if (paddr<MBASE||paddr>MBASE+MSIZE){
        printf("\033[1;31m""invalid addr :%x\n""\033[0m",paddr);
        return 1;
     }
     else{ 
        return 0;
    }
}
















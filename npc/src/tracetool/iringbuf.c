#include "decode.h"
char irb[11][128];
int iringbufmanage(char irb[][128],uint64_t g_nr_guest_inst,Decode *s){
  int count = g_nr_guest_inst % 11;
  if(s->logbuf!=NULL)
  strcpy(irb[count],s->logbuf); 
  return count;
}
void iringbufprint(char irb[][128],int count){
  for(int i=0;i<11;i++){
      if(i==count){
      printf("\033[1;31m" "===>%s\n" "\033[0m",irb[i]); // 蓝色
      continue;
      }
      printf("    ");
      puts(irb[i]);
  }

}



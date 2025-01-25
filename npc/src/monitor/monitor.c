#include <memory/paddr.h>
#include <common.h>
#include <stdio.h>
#include <getopt.h>
#include <sdb.h>
#include "get_elf.h"
#include <elf.h>
#ifdef __cplusplus
extern "C" {
#endif

void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#ifdef __cplusplus
}
#endif




void init_elf_read(char *elf_file);
//FTACE所需要的结构体，直接穿进cpu-exec.c
    FILE *fp;
    Elf32_Ehdr ehdr;
    Elf32_Shdr *shdr_pointer;
    char *strtab;
    char *shstrtab;
    int symlens=0;
    int symtab_index=0;
    int strtab_index=0;
    Elf32_Sym *symtab_pointer;
//FTACE所需要的结构体，直接穿进cpu-exec.c

























void init_disasm(const char *triple);
void sdb_set_batch_mode();
char *img_file = NULL;
char *elf_file= NULL;
long load_img() {
  if (img_file == NULL) {
    printf(ANSI_COLOR_RED_BIG "No image is given. Use the default build-in image." ANSI_COLOR_RESET);
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) {
    printf("Can not open '%s'", img_file);
    return 0;
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


void load_elf(char * elf_file){
    if (elf_file != NULL){
       fp = elf_fileopen(elf_file);//打开文件
    
      if(fp==NULL){
          printf("\033[1;31m""Error\n""" "\033[0m");
      }
      else{  
        if(elf32_Ehdr_read(fp, &ehdr)){//读取elf文件头
            printf("\033[1;31m""error\n""" "\033[0m");
        }
        if(!(shdr_pointer=elf32_Shdr_read(fp, &ehdr))){//通过头找到节头读取节头
            printf("\033[1;31m""error\n""\033[0m");
        }
        if(!(shstrtab = shstrtab_read(fp, shdr_pointer, &ehdr))) {//通过节头和elf文件头找到shstrtab读取shstrtab，这样才能通过shstrtab找到strtab和symtab
            printf("\033[1;31m""shstrtab not found\n""\033[0m");
          }
        if((symtab_index = symtab_index_find(fp, shdr_pointer, &ehdr,shstrtab)) == -1) {//通过节头找到shstrtab通过shstrtab找到strtab的索引，通过strtab的索引找到strtab,之所以要elf文件头是因为ehdr里面有整个节头个数，这样才能遍历找到symtab的索引
            printf("\033[1;31m""symtab not found\n""\033[0m");
        }
        if(!(symtab_pointer = symtab_read(fp, shdr_pointer, symtab_index))) {//通过symtab的索引找到symtab在elf文件的偏移读取symtab
            printf("\033[1;31m""error\n""\033[0m");
        }
        if((strtab_index = strtab_index_find(fp, shdr_pointer, &ehdr,shstrtab)) == -1) {
            printf("\033[1;31m""strtab not found\n""\033[0m");
        }
        if(!(strtab = strtab_read(fp, shdr_pointer, strtab_index))) {
           printf("\033[1;31m""error\n""\033[0m");
        }
        symlens=symlen(symtab_pointer,shdr_pointer,symtab_index);
        fseek(fp, 0, SEEK_END);
        long size = ftell(fp);
        printf("The elf is %s, size = %ld", elf_file, size);
        fclose(fp);
      }
    }
    else{
      printf(ANSI_COLOR_RED_BIG "No elf_file is given." ANSI_COLOR_RESET);
    }
}
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"elf_file" , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  printf("Parsing the command line...\n");
  while ( (o = getopt_long(argc, argv, "-be:", table, NULL)) != -1) {//不要参数的后面不要引号就行
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [image]\n", argv[0]);
        exit(0);
    }
  }
  return 0;
}
void init_monitor(int argc, char *argv[]) {
  printf(ANSI_COLOR_GREEN_SMALL "Initializing the monitor...\n" ANSI_COLOR_RESET);

  parse_args(argc, argv);
  printf("Image file set to: %s\n", img_file);
  long img_size = load_img(); 
   load_elf(elf_file);
  printf("The image size is %ld\n", img_size);
  init_sdb();//定要初始化啊，不然正则匹配就直接崩溃,gdb还乱跳，根本不可能调出来
  init_disasm("riscv32");
}

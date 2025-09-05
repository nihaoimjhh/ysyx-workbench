#ifndef GET_ELF_H
#define GET_ELF_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

#define FUNC_INFO 18

// 函数声明
FILE *elf_fileopen(char *filename);
int elf32_Ehdr_read(FILE *fp, Elf32_Ehdr *ehdr);
Elf32_Shdr *elf32_Shdr_read(FILE *fp, Elf32_Ehdr *ehdr);
Elf32_Sym *symtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, int symtab_index);
int symtab_index_find(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr, char *shstrtab);
int strtab_index_find(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr, char *shstrtab);
int sym_func_index_find(Elf32_Sym *symtab_pointer, uint32_t arr, int symlens);
int symlen(Elf32_Sym *symtab_pointer, Elf32_Shdr *shdr_pointer, int symtab_index);
void elf32_Sym_print(Elf32_Sym *symtab_pointer, int symlen);
void elf32_Shdr_print(Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr);
void elf32_Ehdr_print(Elf32_Ehdr *ehdr);
char *strtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, int strtab_index);
char *shstrtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr);
void sym_nameprint(Elf32_Shdr *shdr_pointer,char *strtab,Elf32_Sym *symtab_pointer,int sym_func_index);
void inst_print_funcname(Elf32_Shdr *shdr_pointer,char *strtab,Elf32_Sym *symtab_pointer,uint32_t inst,uint32_t dnpc ,uint32_t pc,int symlens,int *call_count);
int catch_call_ret(uint32_t inst,uint32_t dnpc,uint32_t pc);
void memory_free(Elf32_Shdr *shdr_pointer, Elf32_Sym *symtab_pointer, char *strtab,char *shstrtab);




#endif // GET_ELF_H

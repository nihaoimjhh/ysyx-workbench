#include "/home/jinghanhui/ysyx-workbench/nemu/include/cpu/get_elf.h"
#include "/home/jinghanhui/ysyx-workbench/nemu/include/cpu/cpu.h"
#include "/home/jinghanhui/ysyx-workbench/nemu/include/common.h"
#include "/home/jinghanhui/ysyx-workbench/nemu/src/isa/riscv32/local-include/reg.h"
#include "/home/jinghanhui/ysyx-workbench/nemu/src/isa/riscv32/include/isa-def.h"

FILE *elf_fileopen( char *filename) {
    FILE *fp=fopen(filename,"rb");
    if(fp==NULL){
        printf("File not found\n");
        return NULL;
    }
    else{
        return fp;
    }
}
int elf32_Ehdr_read(FILE *fp, Elf32_Ehdr *ehdr) {
    int read_size;
    read_size=fread(ehdr, sizeof(Elf32_Ehdr), 1, fp);
    if(read_size!=1){
        printf("ehdr read error\n");
        return 1;
    }
    else if(ehdr->e_ident[0] != 0x7f || ehdr->e_ident[1] != 'E' || ehdr->e_ident[2] != 'L' || ehdr->e_ident[3] != 'F') {
        printf("This is not an ELF file\n");
        return 1;
    }
    else{
        return 0;
    }
}
void elf32_Ehdr_print(Elf32_Ehdr *ehdr) {
    printf("e_ident: %x %x %x %x\n", ehdr->e_ident[0], ehdr->e_ident[1], ehdr->e_ident[2], ehdr->e_ident[3]);
    printf("e_type: %x\n", ehdr->e_type);
    printf("e_machine: %x\n", ehdr->e_machine);
    printf("e_version: %x\n", ehdr->e_version);
    printf("e_entry: %x\n", ehdr->e_entry);
    printf("e_phoff: %x\n", ehdr->e_phoff);
    printf("e_shoff: %x\n", ehdr->e_shoff);
    printf("e_flags: %x\n", ehdr->e_flags);
    printf("e_ehsize: %x\n", ehdr->e_ehsize);
    printf("e_phentsize: %x\n", ehdr->e_phentsize);
    printf("e_phnum: %x\n", ehdr->e_phnum);
    printf("e_shentsize: %x\n", ehdr->e_shentsize);
    printf("e_shnum: %x\n", ehdr->e_shnum);
    printf("e_shstrndx: %x\n", ehdr->e_shstrndx);
}
Elf32_Shdr * elf32_Shdr_read(FILE *fp,  Elf32_Ehdr *ehdr) {
    Elf32_Shdr *shdr_pointer;
    if(fseek(fp, ehdr->e_shoff, SEEK_SET)){
        printf("shdr fseek error\n");
        return NULL;
    }
    shdr_pointer = (Elf32_Shdr *)malloc(sizeof(Elf32_Shdr) * ehdr->e_shnum);
    if(shdr_pointer==NULL){
        printf("shdr memory allocation error\n");
        return NULL;
    }
    int read_size;
    read_size=fread(shdr_pointer, sizeof(Elf32_Shdr), ehdr->e_shnum, fp);
    if(read_size!=ehdr->e_shnum){
        printf("shdr read error\n");
        return NULL;
    }
    else{
        return shdr_pointer;
    }
}
int symtab_index_find(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr) {
     fseek(fp, shdr_pointer[ehdr->e_shstrndx].sh_offset, SEEK_SET);//找串
    char *shstr = (char *)malloc(shdr_pointer[ehdr->e_shstrndx].sh_size);//分配空间
    if(fread(shstr, shdr_pointer[ehdr->e_shstrndx].sh_size, 1, fp) != 1) {//读串
        printf("shstrtab read error\n");
        return -1;
    }
    for(int i = 0; i < ehdr->e_shnum; i++) {
        if(strcmp(shstr + shdr_pointer[i].sh_name, ".symtab") == 0) {//串加偏移就是名字
        free(shstr);//释放空间
            return i;//获取symtab的索引
        }
    }
    return -1;
}
Elf32_Sym *symtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, int symtab_index) {
    Elf32_Sym *symtab_pointer;
    if(fseek(fp, shdr_pointer[symtab_index].sh_offset, SEEK_SET)) {
        printf("symtab fseek error\n");
        return NULL;
    }
    symtab_pointer = (Elf32_Sym *)malloc(shdr_pointer[symtab_index].sh_size);
    if(fread(symtab_pointer, shdr_pointer[symtab_index].sh_size, 1, fp) != 1) {
        printf("symtab read error\n");
        return NULL;
    }
    return symtab_pointer;
}
int strtab_index_find(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr) {
    fseek(fp, shdr_pointer[ehdr->e_shstrndx].sh_offset, SEEK_SET);
    char *shstr = (char *)malloc(shdr_pointer[ehdr->e_shstrndx].sh_size);
    if(fread(shstr, shdr_pointer[ehdr->e_shstrndx].sh_size, 1, fp) != 1) {
        printf("shstrtab read error\n");
        return -1;
    }
    for(int i = 0; i < ehdr->e_shnum; i++) {
        if(strcmp(shstr + shdr_pointer[i].sh_name, ".strtab") == 0) {
            free(shstr);
            return i;
        }
    }
    return -1;
}
void elf32_Sym_print(Elf32_Sym *symtab_pointer, int symlens) {
    printf("NR\tst_name\t\tst_value\tst_size\t\tst_info\t\tst_other\tst_shndx\n");
    for(int i = 0; i < symlens; i++) {
        printf("%d\t%-8x\t%-8x\t%-8x\t%-8x\t%-8x\t%-8x\n",
                    i,
               symtab_pointer[i].st_name,
               symtab_pointer[i].st_value,
               symtab_pointer[i].st_size,
               symtab_pointer[i].st_info,
               symtab_pointer[i].st_other,
               symtab_pointer[i].st_shndx);
    }
}
void elf32_Shdr_print(Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr) {
    printf("NR\t");
    printf("Name\t\tType\t\tAddr\t\tOff\t\tSize\t\tEntSize\t\tFlags\t\tLink\t\tInfo\t\tAddrAlign\n");
    for (int i = 0; i < ehdr->e_shnum; i++) {
        printf("%-4d\t%-8x\t%-8x\t%-8x\t%-8x\t%-8x\t%-8x\t%-8x\t%-8x\t%-8d\t%-8x\n",
               i,
               shdr_pointer[i].sh_name,
               shdr_pointer[i].sh_type,
               shdr_pointer[i].sh_addr,
               shdr_pointer[i].sh_offset,
               shdr_pointer[i].sh_size,
               shdr_pointer[i].sh_entsize,
               shdr_pointer[i].sh_flags,
               shdr_pointer[i].sh_link,
               shdr_pointer[i].sh_info,
               shdr_pointer[i].sh_addralign);
    }
}
void sym_nameprint(Elf32_Shdr *shdr_pointer, char *strtab, Elf32_Sym *symtab_pointer, int sym_func_index) {
    if (sym_func_index == -1) return;
    printf("\033[34m""%s""\033[0m", strtab + symtab_pointer[sym_func_index].st_name);
}

int symlen(Elf32_Sym *symtab_pointer, Elf32_Shdr *shdr_pointer,int symtab_index){//shdr里面有size这样才知道有多少个symtab
    return shdr_pointer[symtab_index].sh_size/sizeof(*symtab_pointer);
}
int sym_func_index_find( Elf32_Sym * symtab_pointer,uint32_t arr,int symlens){
    int i=0;
    int flag=0;
    for(i=0;i<symlens;i++){
        if(arr>=symtab_pointer[i].st_value&&arr<symtab_pointer[i].st_value+symtab_pointer[i].st_size&&symtab_pointer[i].st_info==FUNC_INFO){//第二个没有等于
            return i;
        }
    }
    if(flag==0){
        return -1;
    }
    return -1;

}
void memory_free(Elf32_Shdr *shdr_pointer, Elf32_Sym *symtab_pointer, char *strtab) {
    free(shdr_pointer);
    free(symtab_pointer);
    free(strtab);
}
int catch_call_ret(uint32_t inst,uint32_t dnpc,uint32_t pc){ 
       if((inst&0x7f)==0x6f||(inst&0x7f)==0x67){//是不是jal,是不是jarl
       if((inst&0xfffff)==0x8067){//是不是ret
              return 1;
         }
         else{
              return 0;
         }
        }
        else
            return -1;
    
}
void inst_print_funcname(Elf32_Shdr *shdr_pointer,char *strtab,Elf32_Sym *symtab_pointer,uint32_t inst,uint32_t dnpc ,uint32_t pc,int symlens,int *call_count){
    int i=0;
    if(catch_call_ret(inst,dnpc,pc)==0){
        printf("%x:\t",pc);
        for(i=0;i<*call_count;i++){
            printf(" ");
        }
        printf("\033[31m""call[""\033[0m");
        sym_nameprint(shdr_pointer,strtab,symtab_pointer, sym_func_index_find(symtab_pointer,dnpc,symlens));
        printf("\033[31m""]@0x%x\n""\033[0m",dnpc);
        (*call_count)++;

    }
    else if(catch_call_ret(inst,dnpc,pc)==1){
        printf("%x:\t",pc);
        for(i=0;i<*call_count;i++){
            printf(" ");
        }
        printf("\033[32m""ret[""\033[0m");
        sym_nameprint(shdr_pointer,strtab,symtab_pointer, sym_func_index_find(symtab_pointer,dnpc,symlens));
        printf("\033[32m""]@0x%x\n""\033[0m",dnpc);
        (*call_count)--;
    }   
  }
char *strtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, int strtab_index) {
    char *strtab;
    if(fseek(fp, shdr_pointer[strtab_index].sh_offset, SEEK_SET)) {
        printf("strtab fseek error\n");
        return NULL;
    }
    strtab = (char *)malloc(shdr_pointer[strtab_index].sh_size);
    if(fread(strtab, shdr_pointer[strtab_index].sh_size, 1, fp) != 1) {
        printf("strtab read error\n");
        return NULL;
    }
    return strtab;
}


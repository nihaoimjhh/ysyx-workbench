#include "get_elf.h"
#include "utils.h"   
extern NPCState npc_state;
FILE *elf_fileopen( char *filename) {
    FILE *fp=fopen(filename,"rb");
    if(fp==NULL){
        printf("\033[1:34m""File:%s not found\n""\033[0m",filename);
        return NULL;
    }
    else{
        return fp;
    }
}//单独搞个函数拿来开文件纯属是因为这个get_elf是先在单独的文件里面写的，后来才加到cpu-exec.c里面的为了不改变原来的代码，所以没有改变原来的函数
int elf32_Ehdr_read(FILE *fp, Elf32_Ehdr *ehdr) {
    int read_size;//读取的个数
    read_size=fread(ehdr, sizeof(Elf32_Ehdr), 1, fp);//读取elf文件头，原因是因为elf文件头里面有shstrtab的索引，我需要通过shstrtab的索引找到strtab和symtab的索引，通过symtab的索引找到symtab通过函数地址找到函数名字在strtab里面的偏移，这样才能通过函数地址找到函数名字
    if(read_size!=1){
        printf("\033[1;31m""ehdr read error\n""\033[0m");
        return 1;
    }
    else if(ehdr->e_ident[0] != 0x7f || ehdr->e_ident[1] != 'E' || ehdr->e_ident[2] != 'L' || ehdr->e_ident[3] != 'F') {
        printf("\033[1;31m""This is not an ELF file\n" "\033[0m");
        return 1;
    }
    else{
        return 0;
    }
}//用来读取elf文件头，里面包含了shstrtab的索引,之所以读取文件头的形式和其他的不一样，首先是因为其大小固定，可以直接读取

Elf32_Shdr * elf32_Shdr_read(FILE *fp,  Elf32_Ehdr *ehdr) {//传入ehdr是因为ehdr里面有shdr的个数，和在elf文件的偏移
    Elf32_Shdr *shdr_pointer;
    if(fseek(fp, ehdr->e_shoff, SEEK_SET)){//通过elf文件头的偏移找到节头表在哪，这样才能读取节头表
        printf("\033[1;31m""shdr fseek error\n""\033[0m");
        return NULL;
    }
    shdr_pointer = (Elf32_Shdr *)malloc(sizeof(Elf32_Shdr) * ehdr->e_shnum);//由于shdr的个数是在elf文件头里面的，所以直接用个数乘以大小就可以分配空间
    if(shdr_pointer==NULL){
        printf("\033[1;31m""shdr memory allocation error\n""\033[0m");
        return NULL;
    }
    int read_size;
    read_size=fread(shdr_pointer, sizeof(Elf32_Shdr), ehdr->e_shnum, fp);//空间分配完了就读取shdr
    if(read_size!=ehdr->e_shnum){
        printf("\033[1;31m""shdr read error\n""\033[0m");
        return NULL;
    }
    else{
        return shdr_pointer;
    }
}//读取shdr，通过elf文件头的shstrtab的索引找到shstrtab，通过shstrtab找到strtab在节头的索引，和symtab在节头的索引。
char *shstrtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr) {//通过ehdr找到shstrtab在节头的索引，通过节头的索引在节头找到shstrtab在elf文件的偏移
    fseek(fp, shdr_pointer[ehdr->e_shstrndx].sh_offset, SEEK_SET);
    char *shstr = (char *)malloc(shdr_pointer[ehdr->e_shstrndx].sh_size);
    if(fread(shstr, shdr_pointer[ehdr->e_shstrndx].sh_size, 1, fp) != 1) {
        printf("\033[1;31m""shstrtab read error\n""\033[0m");
        return NULL;
    }
    return shstr;
}//通过shstrtab的索引读取shstrtab
int symtab_index_find(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr, char *shstrtab) {
    for(int i = 0; i < ehdr->e_shnum; i++) {
        if(strcmp(shstrtab + shdr_pointer[i].sh_name, ".symtab") == 0) {//串加偏移就是名字,现在知道偏移但是要根据名字的偏移找到名字进行匹配
            return i;//获取symtab的索引
        }
    }
    return -1;
}//找到symtab在节头的索引，这样才能通过其在elf文件的偏移直接读取symtab，是通过读取shstrtab然后通过遍历找到symtab的索引，因为节表的顺序就是排列在shstrtab的顺序.
Elf32_Sym *symtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, int symtab_index) {
    Elf32_Sym *symtab_pointer;
    if(fseek(fp, shdr_pointer[symtab_index].sh_offset, SEEK_SET)) {//通过symtab的索引找到symtab在elf文件的偏移
        printf("\033[1;31m""symtab fseek error\n""\033[0m");
        return NULL;
    }
    symtab_pointer = (Elf32_Sym *)malloc(shdr_pointer[symtab_index].sh_size);//分配空间
    if(fread(symtab_pointer, shdr_pointer[symtab_index].sh_size, 1, fp) != 1) {
        printf("\033[1;31m""symtab read error\n""\033[0m");
        return NULL;
    }
    return symtab_pointer;
}//通过symtab的索引读取symtab的elf文件的偏移，然后读取symtab
int symlen(Elf32_Sym *symtab_pointer, Elf32_Shdr *shdr_pointer,int symtab_index){//shdr里面有size这样才知道有多少个symtab
    return shdr_pointer[symtab_index].sh_size/sizeof(*symtab_pointer);
}//因为symtab的大小除以一个symtab的大小就是有多少个symtab，需要遍历symtab的时候需要这个数目，这样才能通过函数的地址找到函数的索引
int strtab_index_find(FILE *fp, Elf32_Shdr *shdr_pointer, Elf32_Ehdr *ehdr, char *shstrtab) {
    for(int i = 0; i < ehdr->e_shnum; i++) {
        if(strcmp(shstrtab + shdr_pointer[i].sh_name, ".strtab") == 0) {
            return i;
        }
    }
    return -1;
}//通过节头表找shstrtab通过其找到strtab的索引其中之所以把elf头和节头表传进来是因为里面有shstrtab的索引，所以可以通过shstrtab的索引找到strtab的索引。
char *strtab_read(FILE *fp, Elf32_Shdr *shdr_pointer, int strtab_index) {
    char *strtab;
    if(fseek(fp, shdr_pointer[strtab_index].sh_offset, SEEK_SET)) {
        printf("\033[1;31m""strtab fseek error\n""\033[0m");
        return NULL;
    }
    strtab = (char *)malloc(shdr_pointer[strtab_index].sh_size);
    if(fread(strtab, shdr_pointer[strtab_index].sh_size, 1, fp) != 1) {
        printf("\033[1;31m""strtab read error\n""\033[0m");
        return NULL;
    }
    return strtab;
}//通过strtab的索引读取strtab

void sym_nameprint(Elf32_Shdr *shdr_pointer, char *strtab, Elf32_Sym *symtab_pointer, int sym_func_index) {
    if (sym_func_index == -1) return;
    printf("\033[1;34m""%s""\033[0m", strtab + symtab_pointer[sym_func_index].st_name);
}//直接通过函数索引打印函数名字

int sym_func_index_find( Elf32_Sym * symtab_pointer,uint32_t arr,int symlens){
    int i=0;
    int flag=0;
    for(i=0;i<symlens;i++){
        if(arr>=symtab_pointer[i].st_value&&arr<symtab_pointer[i].st_value+symtab_pointer[i].st_size&&symtab_pointer[i].st_info==FUNC_INFO){//第二个没有等于,FUNC_INFO是函数的标志,我通过对照才得知其是18
            return i;
        }
    }
    if(flag==0){
        return -1;
    }
    return -1;
}//通过函数的地址找到函数的索引，这样才能通过函数的索引找到函数的名字
void memory_free(Elf32_Shdr *shdr_pointer, Elf32_Sym *symtab_pointer, char *strtab,char *shstrtab) {
    if(shdr_pointer != NULL) {
    free(shdr_pointer);
    }
    if(symtab_pointer != NULL) {
    free(symtab_pointer);
    }
    if(strtab != NULL) {
    free(strtab);
    }
    if(shstrtab != NULL) {
    free(shstrtab);
    }
}//释放内存
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
    
}//判断是不是call和ret，其中先判断是不是jal和jarl，再判断是不是ret，由于ret比较好判断所以先判断ret，剩下的就是call
void inst_print_funcname(Elf32_Shdr *shdr_pointer,char *strtab,Elf32_Sym *symtab_pointer,uint32_t inst,uint32_t dnpc ,uint32_t pc,int symlens,int *call_count){
    if(shdr_pointer==NULL||strtab==NULL||symtab_pointer==NULL){
        return;
    }
    else{
        int i=0;
        if(catch_call_ret(inst,dnpc,pc)==0){
            (*call_count)++;
            npc_state.state = NPC_STOP;
            printf("\033[31m""%#x:""\033[0m",pc);
            for(i=0;i<*call_count;i++){
                printf(" ");
            }
            printf("\033[31m""in[""\033[0m");
            sym_nameprint(shdr_pointer,strtab,symtab_pointer, sym_func_index_find(symtab_pointer,pc,symlens));
            printf("\033[31m""]""\033[0m");
            printf("\033[31m""call[""\033[0m");
            sym_nameprint(shdr_pointer,strtab,symtab_pointer, sym_func_index_find(symtab_pointer,dnpc,symlens));
            printf("\033[31m""]@0x%x\n""\033[0m",dnpc);
        }
        else if(catch_call_ret(inst,dnpc,pc)==1){
            (*call_count)--;
            npc_state.state = NPC_STOP;
            printf("\033[32m""%#x:""\033[0m",pc);
            for(i=0;i<*call_count;i++){
            printf(" ");
            }
            printf("\033[32m""in[""\033[0m");
            sym_nameprint(shdr_pointer,strtab,symtab_pointer, sym_func_index_find(symtab_pointer,pc,symlens));
            printf("\033[32m""]""\033[0m");
            printf("\033[32m""ret[""\033[0m");
            sym_nameprint(shdr_pointer,strtab,symtab_pointer, sym_func_index_find(symtab_pointer,dnpc,symlens));
            printf("\033[32m""]@0x%x\n""\033[0m",dnpc);
        }   
    }
  }//最后的总函数，用来打印函数名字，其中有两个颜色，一个是call，一个是ret，call是红色，ret是绿色，这样就可以区分开来，其中有一个计数器，用来计算call的次数，打印就会有深度感，这样就可以看出函数的调用关系

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
}//用来看看有没有读对，一开始用来调试的
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
}//用来打印symtab，看看有没有读对，一开始用来调试的
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
}//用来打印shdr，看看有没有读对，一开始用来调试的

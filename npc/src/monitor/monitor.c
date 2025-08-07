#include <memory/paddr.h>
#include <common.h>
#include <stdio.h>
#include <getopt.h>
#include <sdb.h>
#include "get_elf.h"
#include <elf.h>
#include "difftest.h"

/* 函数声明 */
// 外部函数声明
void init_difftest(char *ref_so_file, long img_size, int port);
void init_elf_read(char *elf_file);
void init_disasm(const char *triple);
void sdb_set_batch_mode();

// 内部函数声明
static int parse_args(int argc, char *argv[]);
static long load_img();
static void load_elf(char *elf_file);

/* 全局变量 - FTRACE功能相关 */
FILE *fp;
Elf32_Ehdr ehdr;
Elf32_Shdr *shdr_pointer;
char *strtab;
char *shstrtab;
int symlens = 0;
int symtab_index = 0;
int strtab_index = 0;
Elf32_Sym *symtab_pointer;

/* 全局变量 - 图像和差分测试相关 */
long img_size = 0;
char *img_file = NULL;
char *diff_so_file = NULL;
char *elf_file = NULL;
int difftest_port = 1234;

/**
 * 初始化监视器
 * 解析命令行参数，加载镜像和ELF文件，初始化调试环境
 */
void init_monitor(int argc, char *argv[])
{
    printf(ANSI_COLOR_GREEN_SMALL "Initializing the monitor...\n" ANSI_COLOR_RESET);
    // 添加到init_monitor函数中合适的位置，比如在printf("The image size is %ld\n", img_size);之后
    // 显示各种trace功能的状态
    printf("%sMtrace:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_MTRACE ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    printf("%sFtrace:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_FTRACE ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    printf("%sDtrace:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_DTRACE ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    printf("%sEtrace:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_ETRACE ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    printf("%sDisasm:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_DISASM ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    printf("%sDifftest:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_DIFFTEST ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    printf("%sWave:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_WAVE ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    printf("%sWatchpoint:%s %s\n", ANSI_COLOR_BLUE_BIG, ANSI_COLOR_RESET, ENABLE_WP ? ANSI_COLOR_GREEN_BIG "ON" ANSI_COLOR_RESET : ANSI_COLOR_RED_BIG "OFF" ANSI_COLOR_RESET);
    parse_args(argc, argv);
    printf("Image file set to: %s\n", img_file);
    img_size = load_img();
    load_elf(elf_file);
    printf("The image size is %ld\n", img_size);
    init_sdb(); // 初始化调试器
    init_disasm("riscv32");
}

/**
 * 解析命令行参数
 * 支持批处理模式、ELF文件和差分测试选项
 */
static int parse_args(int argc, char *argv[])
{
    const struct option table[] = {
        {"batch", no_argument, NULL, 'b'},
        {"elf_file", required_argument, NULL, 'e'},
        {"diff", required_argument, NULL, 'd'},
        {0, 0, NULL, 0},
    };
    int o;
    printf("Parsing the command line...\n");
    while ((o = getopt_long(argc, argv, "-be:d:", table, NULL)) != -1)
    {
        switch (o)
        {
        case 'b':
            sdb_set_batch_mode();
            break;
        case 'e':
            elf_file = optarg;
            break;
        case 'd':
            diff_so_file = optarg;
            break;
        case 1:
            img_file = optarg;
            return 0;
        default:
            printf("Usage: %s [image]\n", argv[0]);
            printf("\t-b,--batch              run with batch mode\n");
            printf("\t-e,--elf_file           input a .elf file to run ftrace \n");
            printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
            printf("\n");
            exit(0);
        }
    }
    return 0;
}

/**
 * 加载程序镜像
 * 将程序镜像加载到内存中
 *
 * @return 镜像大小
 */
static long load_img()
{
    if (img_file == NULL)
    {
        printf(ANSI_COLOR_RED_BIG "No image is given. Use the default build-in image.\n" ANSI_COLOR_RESET);
        return 4096; // built-in image size
    }

    FILE *fp = fopen(img_file, "rb");
    if (fp == NULL)
    {
        printf(ANSI_COLOR_RED_SMALL "Can not open '%s'\n" ANSI_COLOR_RESET, img_file);
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    printf(ANSI_COLOR_BLUE_SMALL "The image is %s, size = %ld\n" ANSI_COLOR_RESET, img_file, size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
    assert(ret == 1);

    fclose(fp);
    return size;
}

/**
 * 加载ELF文件
 * 用于函数追踪功能
 *
 * @param elf_file ELF文件路径
 */
static void load_elf(char *elf_file)
{
    if (elf_file != NULL)
    {
        fp = elf_fileopen(elf_file); // 打开文件

        if (fp == NULL)
        {
            printf(ANSI_COLOR_RED_SMALL "Error opening ELF file\n" ANSI_COLOR_RESET);
        }
        else
        {
            // 读取ELF文件头
            if (elf32_Ehdr_read(fp, &ehdr))
            {
                printf(ANSI_COLOR_RED_SMALL "Error reading ELF header\n" ANSI_COLOR_RESET);
            }

            // 通过头找到节头读取节头
            if (!(shdr_pointer = elf32_Shdr_read(fp, &ehdr)))
            {
                printf(ANSI_COLOR_RED_SMALL "Error reading section headers\n" ANSI_COLOR_RESET);
            }

            // 读取节字符串表
            if (!(shstrtab = shstrtab_read(fp, shdr_pointer, &ehdr)))
            {
                printf(ANSI_COLOR_RED_SMALL "shstrtab not found\n" ANSI_COLOR_RESET);
            }

            // 查找符号表索引
            if ((symtab_index = symtab_index_find(fp, shdr_pointer, &ehdr, shstrtab)) == -1)
            {
                printf(ANSI_COLOR_RED_SMALL "symtab not found\n" ANSI_COLOR_RESET);
            }

            // 读取符号表
            if (!(symtab_pointer = symtab_read(fp, shdr_pointer, symtab_index)))
            {
                printf(ANSI_COLOR_RED_SMALL "Error reading symtab\n" ANSI_COLOR_RESET);
            }

            // 查找字符串表索引
            if ((strtab_index = strtab_index_find(fp, shdr_pointer, &ehdr, shstrtab)) == -1)
            {
                printf(ANSI_COLOR_RED_SMALL "strtab not found\n" ANSI_COLOR_RESET);
            }

            // 读取字符串表
            if (!(strtab = strtab_read(fp, shdr_pointer, strtab_index)))
            {
                printf(ANSI_COLOR_RED_SMALL "Error reading strtab\n" ANSI_COLOR_RESET);
            }

            // 计算符号表长度
            symlens = symlen(symtab_pointer, shdr_pointer, symtab_index);

            // 显示ELF文件大小
            fseek(fp, 0, SEEK_END);
            long size = ftell(fp);
            printf(ANSI_COLOR_BLUE_SMALL "The elf is %s, size = %ld\n" ANSI_COLOR_RESET, elf_file, size);
            fclose(fp);
        }
    }
    else
    {
        printf(ANSI_COLOR_RED_BIG "No elf_file is given.\n" ANSI_COLOR_RESET);
    }
}
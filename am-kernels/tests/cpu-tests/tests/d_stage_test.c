#include <stdint.h>
#include <stdio.h>

int main() {
    printf("=== CSR Register Test ===\n");
    
    // 测试 mvendorid 寄存器
    uint32_t mvendorid;
    asm volatile ("csrr %0, mvendorid" : "=r"(mvendorid));
    
    printf("mvendorid = 0x%08x\n", mvendorid);
    
    // 检查是否为 "ysyx" 的 ASCII 码
    if (mvendorid == 0x79737978) {
        printf("PASS: mvendorid contains 'ysyx' ASCII (0x79737978)\n");
    } else {
        printf("FAIL: mvendorid = 0x%08x, expected 0x79737978 ('ysyx')\n", mvendorid);
    }
    
    // 测试 marchid 寄存器
    uint32_t marchid;
    asm volatile ("csrr %0, marchid" : "=r"(marchid));
    
    printf("marchid = 0x%08x (%u)\n", marchid, marchid);
    
    // 检查是否为学号数字部分 22068888 (0x150be98)
    if (marchid == 24090003) {
        printf("PASS: marchid contains student ID 22068888 (0x150be98)\n");
    } else {
        printf("FAIL: marchid = 0x%08x (%u), expected 0x150be98 (22068888)\n", marchid, marchid);
    }
    
    // 解析 mvendorid 中的 ASCII 字符
    printf("\n=== mvendorid ASCII Analysis ===\n");
    char vendor_chars[5];
    vendor_chars[0] = (mvendorid >> 24) & 0xFF;  // 最高字节
    vendor_chars[1] = (mvendorid >> 16) & 0xFF;
    vendor_chars[2] = (mvendorid >> 8) & 0xFF;
    vendor_chars[3] = mvendorid & 0xFF;          // 最低字节
    vendor_chars[4] = '\0';
    
    printf("ASCII characters: '%c%c%c%c'\n", 
           vendor_chars[0], vendor_chars[1], vendor_chars[2], vendor_chars[3]);
    
    // 验证每个字符
    if (vendor_chars[0] == 'y' && vendor_chars[1] == 's' && 
        vendor_chars[2] == 'y' && vendor_chars[3] == 'x') {
        printf("PASS: ASCII decode shows 'ysyx'\n");
    } else {
        printf("FAIL: ASCII decode shows '%s', expected 'ysyx'\n", vendor_chars);
    }
    
    printf("\n=== marchid Analysis ===\n");
    printf("Student ID decimal: %u\n", marchid);
    
    // 检查学号格式是否合理
    if (marchid >= 20000000 && marchid <= 99999999) {
        printf("PASS: Student ID is in reasonable range (20000000-99999999)\n");
    } else {
        printf("WARNING: Student ID %u is outside typical range\n", marchid);
    }
    
    return 0;
}

// 之前的 mcycle 测试代码（已注释）
/*
int old_main() {
//     uint32_t mcycle_low, mcycle_high;
    
//     // 使用内联汇编读取mcycle（低32位）
//     asm volatile ("csrr %0, mcycle" : "=r"(mcycle_low));
    
//     // 使用内联汇编读取mcycleh（高32位）  
//     asm volatile ("csrr %0, mcycleh" : "=r"(mcycle_high));
    
//     printf("Current cycle count:\n");
//     printf("mcycle  = %u\n", mcycle_low);
//     printf("mcycleh = %u\n", mcycle_high);
    
//     // 测试连续读取的差值
//     printf("\n=== Consecutive Read Test ===\n");
//     uint32_t read1, read2;
//     asm volatile ("csrr %0, mcycle" : "=r"(read1));
//     asm volatile ("csrr %0, mcycle" : "=r"(read2));
    
//     printf("First read:  %u\n", read1);
//     printf("Second read: %u\n", read2);
//     printf("Difference:  %u cycles\n", read2 - read1);
    
//     if (read2 > read1) {
//         uint32_t diff = read2 - read1;
//         if (diff >= 1 && diff <= 10) {
//             printf("PASS: Consecutive reads differ by %u cycles (reasonable)\n", diff);
//         } else {
//             printf("WARNING: Consecutive reads differ by %u cycles (unexpected)\n", diff);
//         }
//     } else {
//         printf("ERROR: Second read should be greater than first!\n");
//     }
    
//     // 多次连续读取测试
//     printf("\n=== Multiple Consecutive Reads ===\n");
//     for (int i = 0; i < 5; i++) {
//         uint32_t a, b;
//         asm volatile ("csrr %0, mcycle" : "=r"(a));
//         asm volatile ("csrr %0, mcycle" : "=r"(b));
//         printf("Read pair %d: %u -> %u (diff: %u)\n", i+1, a, b, b-a);
//     }
    
//     // 执行一些操作
//     printf("\n=== After Some Operations ===\n");
//     volatile int dummy = 0;
//     for (int i = 0; i < 100; i++) {
//         dummy += i;
//     }
    
//     // 再次读取
//     uint32_t mcycle_low2;
//     asm volatile ("csrr %0, mcycle" : "=r"(mcycle_low2));
    
//     printf("After operations: %u\n", mcycle_low2);
//     printf("Total difference: %u cycles\n", mcycle_low2 - mcycle_low);
    
//     // 最终连续读取测试
//     printf("\n=== Final Consecutive Read Test ===\n");
//     uint32_t final1, final2, final3;
//     asm volatile ("csrr %0, mcycle" : "=r"(final1));
//     asm volatile ("csrr %0, mcycle" : "=r"(final2));  
//     asm volatile ("csrr %0, mcycle" : "=r"(final3));
    
//     printf("Three consecutive reads:\n");
//     printf("  %u\n", final1);
//     printf("  %u (diff: %u)\n", final2, final2 - final1);
//     printf("  %u (diff: %u)\n", final3, final3 - final2);
    
//     // 验证每次读取都在递增
//     if (final2 > final1 && final3 > final2) {
//         printf("PASS: All consecutive reads show increment\n");
//     } else {
//         printf("ERROR: Consecutive reads not incrementing properly\n");
//     }
    
    return 0;
}
*/

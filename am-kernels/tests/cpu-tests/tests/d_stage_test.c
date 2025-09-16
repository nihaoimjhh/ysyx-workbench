#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t mcycle_low, mcycle_high;
    
    // 使用内联汇编读取mcycle（低32位）
    asm volatile ("csrr %0, 0xB00" : "=r"(mcycle_low));
    
    // 使用内联汇编读取mcycleh（高32位）  
    asm volatile ("csrr %0, 0xB80" : "=r"(mcycle_high));
    
    printf("Current cycle count:\n");
    printf("mcycle  = %u\n", mcycle_low);
    printf("mcycleh = %u\n", mcycle_high);
    
    // 测试连续读取的差值
    printf("\n=== Consecutive Read Test ===\n");
    uint32_t read1, read2;
    asm volatile ("csrr %0, 0xB00" : "=r"(read1));
    asm volatile ("csrr %0, 0xB00" : "=r"(read2));
    
    printf("First read:  %u\n", read1);
    printf("Second read: %u\n", read2);
    printf("Difference:  %u cycles\n", read2 - read1);
    
    if (read2 > read1) {
        uint32_t diff = read2 - read1;
        if (diff >= 1 && diff <= 10) {
            printf("PASS: Consecutive reads differ by %u cycles (reasonable)\n", diff);
        } else {
            printf("WARNING: Consecutive reads differ by %u cycles (unexpected)\n", diff);
        }
    } else {
        printf("ERROR: Second read should be greater than first!\n");
    }
    
    // 多次连续读取测试
    printf("\n=== Multiple Consecutive Reads ===\n");
    for (int i = 0; i < 5; i++) {
        uint32_t a, b;
        asm volatile ("csrr %0, 0xB00" : "=r"(a));
        asm volatile ("csrr %0, 0xB00" : "=r"(b));
        printf("Read pair %d: %u -> %u (diff: %u)\n", i+1, a, b, b-a);
    }
    
    // 执行一些操作
    printf("\n=== After Some Operations ===\n");
    volatile int dummy = 0;
    for (int i = 0; i < 100; i++) {
        dummy += i;
    }
    
    // 再次读取
    uint32_t mcycle_low2;
    asm volatile ("csrr %0, 0xB00" : "=r"(mcycle_low2));
    
    printf("After operations: %u\n", mcycle_low2);
    printf("Total difference: %u cycles\n", mcycle_low2 - mcycle_low);
    
    // 最终连续读取测试
    printf("\n=== Final Consecutive Read Test ===\n");
    uint32_t final1, final2, final3;
    asm volatile ("csrr %0, 0xB00" : "=r"(final1));
    asm volatile ("csrr %0, 0xB00" : "=r"(final2));  
    asm volatile ("csrr %0, 0xB00" : "=r"(final3));
    
    printf("Three consecutive reads:\n");
    printf("  %u\n", final1);
    printf("  %u (diff: %u)\n", final2, final2 - final1);
    printf("  %u (diff: %u)\n", final3, final3 - final2);
    
    // 验证每次读取都在递增
    if (final2 > final1 && final3 > final2) {
        printf("PASS: All consecutive reads show increment\n");
    } else {
        printf("ERROR: Consecutive reads not incrementing properly\n");
    }
    
    return 0;
}

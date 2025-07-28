#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  char buf[4096]; // 定义一个足够大的缓冲区
  va_list args;
  va_start(args, fmt);
  
  // 使用 vsprintf 将格式化字符串写入缓冲区
  int len = vsprintf(buf, fmt, args);
  
  // 逐个字符输出到标准输出
  for (int i = 0; buf[i] != '\0'; i++) {
    putch(buf[i]);
  }
  
  va_end(args);
  return len;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int outindex = 0;
  int fmtindex = 0;
  
  while (fmt[fmtindex] != '\0') {
    // 处理格式化标记
    if (fmt[fmtindex] == '%') {
      fmtindex++; // 跳过 '%'
      
      // 解析标志、宽度等
      int width = 0;
      int zero_padding = 0;
      
      // 检查是否有0填充
      if (fmt[fmtindex] == '0') {
        zero_padding = 1;
        fmtindex++;
      }
      
      // 解析宽度
      while (fmt[fmtindex] >= '0' && fmt[fmtindex] <= '9') {
        width = width * 10 + (fmt[fmtindex] - '0');
        fmtindex++;
      }
      
      // 根据格式符类型处理
      switch (fmt[fmtindex]) {
        case 'd': {
          int num = va_arg(ap, int);
          char num_str[32];
          int num_index = 0;
          
          // 处理0值的特殊情况
          if (num == 0) {
            num_str[num_index++] = '0';
          } else {
            // 处理负数
            int is_negative = 0;
            if (num < 0) {
              is_negative = 1;
              num = -num;
            }
            
            // 转换为字符串（反序）
            while (num > 0) {
              num_str[num_index++] = (num % 10) + '0';
              num /= 10;
            }
            
            // 添加负号
            if (is_negative) {
              num_str[num_index++] = '-';
            }
          }
          
          // 处理宽度和填充
          int padding = width - num_index;
          if (padding > 0 && zero_padding) {
            // 如果有负号，先输出负号
            if (num_index > 0 && num_str[num_index-1] == '-') {
              out[outindex++] = '-';
              num_index--;
              padding++;
            }
            
            // 添加0填充
            while (padding-- > 0) {
              out[outindex++] = '0';
            }
          }
          
          // 反向输出数字
          while (num_index > 0) {
            out[outindex++] = num_str[--num_index];
          }
          break;
        }
        
        case 's': {
          char *str = va_arg(ap, char*);
          while (str && *str) {
            out[outindex++] = *str++;
          }
          break;
        }
        
        default:
          // 未知格式符，原样输出
          out[outindex++] = '%';
          out[outindex++] = fmt[fmtindex];
      }
      
      fmtindex++; // 移至下一字符
    } else {
      // 普通字符直接复制
      out[outindex++] = fmt[fmtindex++];
    }
  }
  
  out[outindex] = '\0';
  return outindex;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int ret = vsprintf(out, fmt, args);
  va_end(args);
  return ret;
}
int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

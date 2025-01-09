#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}
int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  char in_args[3]={'d','s','\0'};
  char *arg_char;//接参数的
  int arg_number;//接参数的
  char arg_number_char[100];//转换成char的，然后反一下的工具
  int arg_number_index=0;//上面的下标
  int outindex=0;
  int fmtindex=0;
  int arg_char_index=0;//接参数的下标
  int i;
  for(fmtindex=0,outindex=0;fmt[fmtindex]!=0;fmtindex++,outindex++){
    if(fmt[fmtindex]=='%'){
        for(i=0;in_args[i]!=0;i++){
        if(fmt[fmtindex+1]==in_args[i]){
          switch (fmt[fmtindex+1])
          {
          case 'd':
             for(arg_number=va_arg(args,int),arg_number_index=0;arg_number!=0;arg_number/=10,arg_number_index++){
              arg_number_char[arg_number_index]=arg_number%10+'0';
          }
          arg_number_index--;
             for(;arg_number_index>=0;arg_number_index--,outindex++){
            out[outindex]=arg_number_char[arg_number_index];
          }
          outindex--;//主循环会加一次，要把这次剪掉
          fmtindex++;//跳过d或者s
            break;
          case 's':
            for(arg_char=va_arg(args,char *);arg_char[arg_char_index]!=0;outindex++,arg_char_index++){
              out[outindex]=arg_char[arg_char_index];
            }
            outindex--;
            fmtindex++;
            break;          
          default:
            break;
          }
          } 
        }
      
      continue;
    }
    out[outindex]=fmt[fmtindex];
  }
  out[outindex]=0;
  va_end(args);
  return outindex;
  }





int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

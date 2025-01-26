#ifndef _IRNG_BUF_H_
#define _IRNG_BUF_H_
#include "decode.h"
int iringbufmanage(char irb[][128],uint64_t g_nr_guest_inst,Decode *s);

void iringbufprint(char irb[][128],int count);



#endif
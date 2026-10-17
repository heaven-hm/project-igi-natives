// Original IGI.EXE function: Sys_PushStack_20 (VA 0x004B76D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_20.h"
int32_t Sys_PushStack_20(void* context)

{
    Sys_ExecuteBytecode_2(*(context + 0xc));
    *(context + 0xc) = 0;
    return Sys_ExecuteBytecode_2(context);
}

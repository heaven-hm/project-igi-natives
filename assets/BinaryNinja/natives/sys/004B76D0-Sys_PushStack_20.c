// Original IGI.EXE function: Sys_PushStack_20 (VA 0x004B76D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_20.h"
int32_t Sys_PushStack_20(void* a1)

{
    Sys_ExecuteBytecode_2(*(a1 + 0xc));
    *(a1 + 0xc) = 0;
    return Sys_ExecuteBytecode_2(a1);
}

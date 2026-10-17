// Original IGI.EXE function: Sys_AllocateMemory_30 (VA 0x004BE810; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_30.h"
int32_t Sys_AllocateMemory_30(void* context)

{
    Sys_PushStack_29(context, 1);
    int32_t result = *(context + 0x14) + 1;
    *(context + 0x14) = result;
    return result;
}

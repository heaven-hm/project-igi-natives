// Original IGI.EXE function: Sys_FreeMemory_14 (VA 0x004B47C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_14.h"
uint32_t Sys_FreeMemory_14(int32_t* context, int32_t param_2)

{
    return COMBINE(0, Sys_CheckHeap_13(context)) % param_2;
}

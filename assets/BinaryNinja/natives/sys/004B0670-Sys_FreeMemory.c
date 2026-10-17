// Original IGI.EXE function: Sys_FreeMemory (VA 0x004B0670; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory.h"
int32_t Sys_FreeMemory(int32_t context, int32_t param_2, int32_t param_3)

{
    return *((param_3 << 8) + context + param_2);
}

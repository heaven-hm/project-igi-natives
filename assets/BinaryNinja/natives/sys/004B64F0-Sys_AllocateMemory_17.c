// Original IGI.EXE function: Sys_AllocateMemory_17 (VA 0x004B64F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_17.h"
int32_t Sys_AllocateMemory_17(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9)

{
    return Sys_FreeMemory_8(context[1] + param_2 * 0x24, *context, param_4, param_5, param_6, param_7, param_8, param_9, param_3);
}

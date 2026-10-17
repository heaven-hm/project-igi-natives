// Original IGI.EXE function: Script_GetArg (VA 0x004B8A20; static CFG gate PASS, CFG score 1.000).
#include "Script_GetArg.h"
int32_t Script_GetArg(float context, int32_t param_2)

{
    if (!*(context + 4))
        return Sys_ReadFileBlock_24(*(*(context + 8) + (param_2 << 2)));

    int32_t temp_val;
    return Sys_AllocateMemory_28(context, temp_val, param_2, context, param_2);
}

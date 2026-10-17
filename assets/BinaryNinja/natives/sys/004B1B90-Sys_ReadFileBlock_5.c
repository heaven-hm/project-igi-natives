// Original IGI.EXE function: Sys_ReadFileBlock_5 (VA 0x004B1B90; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_5.h"
int32_t Sys_ReadFileBlock_5(int32_t context, int32_t param_2)

{
    int32_t result = param_2(context);

    if (result)
        *(result * 0x8c + &g_943708) = 1;

    return result;
}

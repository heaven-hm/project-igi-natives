// Original IGI.EXE function: Sys_ReadFileBlock_8 (VA 0x004B25B0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_8.h"
int32_t Sys_ReadFileBlock_8(int32_t context, int32_t param_2)

{
    int32_t item_4 = param_2;
    int32_t result = *((g_546fa0 << 2) + &g_a94e84);
    int32_t item_8 = context;

    if (!result)
        return result;

    return result(&item_8);
}

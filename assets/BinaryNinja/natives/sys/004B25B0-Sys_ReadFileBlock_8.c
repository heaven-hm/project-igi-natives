// Original IGI.EXE function: Sys_ReadFileBlock_8 (VA 0x004B25B0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_8.h"
int32_t Sys_ReadFileBlock_8(int32_t a1, int32_t a2)

{
    int32_t v_4 = a2;
    int32_t result = *((g_546fa0 << 2) + &g_a94e84);
    int32_t v_8 = a1;

    if (!result)
        return result;

    return result(&v_8);
}

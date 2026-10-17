// Original IGI.EXE function: Sys_ReadFileBlock_5 (VA 0x004B1B90; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_5.h"
int32_t Sys_ReadFileBlock_5(int32_t a1, int32_t a2)

{
    int32_t result = a2(a1);

    if (result)
        *(result * 0x8c + &g_943708) = 1;

    return result;
}

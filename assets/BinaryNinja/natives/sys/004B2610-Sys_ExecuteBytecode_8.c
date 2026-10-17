// Original IGI.EXE function: Sys_ExecuteBytecode_8 (VA 0x004B2610; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_8.h"
int32_t Sys_ExecuteBytecode_8(int32_t a1)

{
    int32_t objC = g_546fb8;
    a1 = a1;
    int32_t result = *((objC << 2) + &g_a94e84);

    if (result)
        result = result(&a1);

    return result;
}

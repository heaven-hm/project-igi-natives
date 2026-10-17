// Original IGI.EXE function: Sys_ExecuteBytecode_8 (VA 0x004B2610; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_8.h"
int32_t Sys_ExecuteBytecode_8(int32_t context)

{
    int32_t entity_val = g_546fb8;
    context = context;
    int32_t result = *((entity_val << 2) + &g_a94e84);

    if (result)
        result = result(&context);

    return result;
}

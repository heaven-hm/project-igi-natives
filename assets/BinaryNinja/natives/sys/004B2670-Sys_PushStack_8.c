// Original IGI.EXE function: Sys_PushStack_8 (VA 0x004B2670; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_8.h"
int32_t __fastcall Sys_PushStack_8(int32_t context)

{
    int32_t result = context;
    int32_t entity_val = g_546fb4;
    result = 1;
    int32_t entity_1 = *((entity_val << 2) + &g_a94e84);

    if (!entity_1)
        return 1;

    entity_1(&result);
    return result;
}

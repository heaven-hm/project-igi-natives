// Original IGI.EXE function: Sys_DispatchOpcode_8 (VA 0x004B2640; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_8.h"
int32_t __fastcall Sys_DispatchOpcode_8(int32_t context)

{
    int32_t result = context;
    int32_t entity_val = g_546fbc;
    result = 0;
    int32_t entity_1 = *((entity_val << 2) + &g_a94e84);

    if (!entity_1)
        return 0;

    entity_1(&result);
    return result;
}

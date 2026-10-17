// Original IGI.EXE function: Sys_DispatchOpcode_8 (VA 0x004B2640; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_8.h"
int32_t __fastcall Sys_DispatchOpcode_8(int32_t a1)

{
    int32_t result = a1;
    int32_t objC = g_546fbc;
    result = 0;
    int32_t objC1 = *((objC << 2) + &g_a94e84);

    if (!objC1)
        return 0;

    objC1(&result);
    return result;
}

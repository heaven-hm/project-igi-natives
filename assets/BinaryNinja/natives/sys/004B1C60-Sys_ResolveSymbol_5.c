// Original IGI.EXE function: Sys_ResolveSymbol_5 (VA 0x004B1C60; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_5.h"
int32_t Sys_ResolveSymbol_5(int32_t context, int32_t param_2)

{
    int32_t result = context * 0x23;
    *((result << 2) + &g_9436c0) = param_2;
    return result;
}

// Original IGI.EXE function: Sys_ResolveSymbol_4 (VA 0x004B17C0; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ResolveSymbol_4.h"
int32_t Sys_ResolveSymbol_4(int32_t* a1)

{
    int32_t objC = *a1;
    return (*(objC * 0x8c + &g_9436e4))(objC, a1, 0);
}

// Original IGI.EXE function: Sys_ResolveSymbol_16 (VA 0x004B64B0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_16.h"
int32_t Sys_ResolveSymbol_16(int32_t* a1)

{
    int32_t result = Is_ResourceLoaded(a1, &a1);

    if (result)
        result = Sys_FreeMemory_16(a1);

    return result;
}

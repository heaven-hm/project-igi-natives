// Original IGI.EXE function: Sys_ResolveSymbol_20 (VA 0x004B7710; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_20.h"
void* Sys_ResolveSymbol_20(void* context, int32_t param_2, int32_t param_3)

{
    void* result = context;
    result = *(*(result + 4) * param_3 + result + param_2 + 0x10);
    return result;
}

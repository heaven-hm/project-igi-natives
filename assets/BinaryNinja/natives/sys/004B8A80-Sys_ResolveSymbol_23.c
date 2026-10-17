// Original IGI.EXE function: Sys_ResolveSymbol_23 (VA 0x004B8A80; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_23.h"
char* Sys_ResolveSymbol_23(float context, int32_t param_2, char* param_3, char* param_4)

{
    if (!*(context + 4))
        return Sys_SyntaxErrorInStringE(*(*(context + 8) + (param_2 << 2)), param_3, param_4);

    return Sys_PushStack_28(context, param_2, param_3, param_4);
}

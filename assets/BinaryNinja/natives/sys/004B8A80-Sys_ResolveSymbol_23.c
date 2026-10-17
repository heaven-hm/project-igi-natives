// Original IGI.EXE function: Sys_ResolveSymbol_23 (VA 0x004B8A80; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_23.h"
char* Sys_ResolveSymbol_23(float a1, int32_t a2, char* a3, char* a4)

{
    if (!*(a1 + 4))
        return Sys_SyntaxErrorInStringE(*(*(a1 + 8) + (a2 << 2)), a3, a4);

    return Sys_PushStack_28(a1, a2, a3, a4);
}

#include "Sys_ResolveSymbol_23.h"
char* Sys_ResolveSymbol_23(float a1, int32_t a2, char* a3, char* a4)

{
    if (!*(a1 + 4))
        return Sys_SyntaxErrorInStringE(*(*(a1 + 8) + (a2 << 2)), a3, a4);

    return Sys_PushStack_28(a1, a2, a3, a4);
}

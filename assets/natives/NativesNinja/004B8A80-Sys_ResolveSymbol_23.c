#include "004B8A80-Sys_ResolveSymbol_23.h"
/* 0x004b8a80 Sys_ResolveSymbol_23 full linked: callers=75 callees=2 */
char* sub_4b8a80(float a1, int32_t a2, char* a3, char* a4)

{
    if (!*(a1 + 4))
        return sub_4b8ce0(*(*(a1 + 8) + (a2 << 2)), a3, a4);

    return sub_4bd040(a1, a2, a3, a4);
}

#include "004B1DC0-Sys_ResolveSymbol_6.h"
/* 0x004b1dc0 Sys_ResolveSymbol_6 full linked: callers=1 callees=0 */
int32_t sub_4b1dc0(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436f0) = a2;
    return result;
}

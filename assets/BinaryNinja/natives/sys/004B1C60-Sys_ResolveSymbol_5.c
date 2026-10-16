#include "Sys_ResolveSymbol_5.h"
int32_t Sys_ResolveSymbol_5(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436c0) = a2;
    return result;
}

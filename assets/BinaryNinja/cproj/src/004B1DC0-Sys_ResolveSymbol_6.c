#include "gi_platform.h"
#include "004B1DC0-Sys_ResolveSymbol_6.h"
int32_t Sys_ResolveSymbol_6(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436f0) = a2;
    return result;
}

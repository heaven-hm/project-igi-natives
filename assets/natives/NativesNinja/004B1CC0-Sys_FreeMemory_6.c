#include "004B1CC0-Sys_FreeMemory_6.h"
/* 0x004b1cc0 Sys_FreeMemory_6 full linked: callers=1 callees=0 */
int32_t sub_4b1cc0(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436cc) = a2;
    return result;
}

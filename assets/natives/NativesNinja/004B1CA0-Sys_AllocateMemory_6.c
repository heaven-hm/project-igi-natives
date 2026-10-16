#include "004B1CA0-Sys_AllocateMemory_6.h"
/* 0x004b1ca0 Sys_AllocateMemory_6 full linked: callers=1 callees=0 */
int32_t sub_4b1ca0(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436c8) = a2;
    return result;
}

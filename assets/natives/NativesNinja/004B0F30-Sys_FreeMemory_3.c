#include "004B0F30-Sys_FreeMemory_3.h"
/* 0x004b0f30 Sys_FreeMemory_3 full linked: callers=3 callees=1 */
int32_t sub_4b0f30(int32_t a1)

{
    if (a1 != g_a94a64)
    {
        g_a94a64 = a1;
        memcpy(0xa94e80, a1 * 0x208 + &g_a950a0, 0x208);
    }

    return a1;
}

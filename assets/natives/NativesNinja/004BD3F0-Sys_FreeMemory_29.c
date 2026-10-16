#include "004BD3F0-Sys_FreeMemory_29.h"
/* 0x004bd3f0 Sys_FreeMemory_29 full linked: callers=3 callees=0 */
int32_t sub_4bd3f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4)

{
    if (a1 >= 0 && a1 < 0x31 && a2 >= 0 && a2 < 4)
    {
        int32_t ecx_3 = *(((a2 + a1 * 6) << 2) + &g_a96108);

        if (ecx_3)
            return ecx_3(a3, a4, a1, a2);
    }

    return a1;
}

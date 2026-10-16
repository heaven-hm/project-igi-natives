#include "0048A8D0-FX_FireBallUpdate_17.h"
/* 0x0048a8d0 FX_FireBallUpdate_17 full linked: callers=3 callees=0 */
int32_t sub_48a8d0()

{
    int32_t result = 0;

    if (g_5c8ba4)
    {
        int32_t ecx = g_5c8ba0;
        result = *((ecx << 2) + &g_5c8b20);
        g_5c8ba0 = ecx + 1;

        if (ecx == 0x1f)
            g_5c8ba0 = 0;

        g_5c8ba4 -= 1;
    }

    return result;
}

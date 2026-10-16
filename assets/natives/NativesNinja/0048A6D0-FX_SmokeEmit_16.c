#include "0048A6D0-FX_SmokeEmit_16.h"
/* 0x0048a6d0 FX_SmokeEmit_16 full linked: callers=12 callees=0 */
int32_t sub_48a6d0(int32_t a1)

{
    int32_t result = g_5c8ba4;

    if (result < 0x1f)
    {
        int32_t ecx_3 = (g_5c8ba0 + result) & 0x8000001f;

        if (ecx_3 < 0)
            ecx_3 = ((ecx_3 - 1) | 0xffffffe0) + 1;

        *((ecx_3 << 2) + &g_5c8b20) = a1;
        result = g_5c8ba4 + 1;
        g_5c8ba4 = result;
    }

    return result;
}

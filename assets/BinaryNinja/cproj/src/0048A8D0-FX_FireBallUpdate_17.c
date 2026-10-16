#include "gi_platform.h"
#include "0048A8D0-FX_FireBallUpdate_17.h"
int32_t FX_FireBallUpdate_17()

{
    int32_t result = 0;

    if (g_5c8ba4)
    {
        int32_t objC = g_5c8ba0;
        result = *((objC << 2) + &g_5c8b20);
        g_5c8ba0 = objC + 1;

        if (objC == 0x1f)
            g_5c8ba0 = 0;

        g_5c8ba4 -= 1;
    }

    return result;
}

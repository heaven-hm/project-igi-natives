// Original IGI.EXE function: FX_FireBallUpdate_17 (VA 0x0048A8D0; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_17.h"
int32_t FX_FireBallUpdate_17()

{
    int32_t result = 0;

    if (g_5c8ba4)
    {
        int32_t entity_val = g_5c8ba0;
        result = *((entity_val << 2) + &g_5c8b20);
        g_5c8ba0 = entity_val + 1;

        if (entity_val == 0x1f)
            g_5c8ba0 = 0;

        g_5c8ba4 -= 1;
    }

    return result;
}

// Original IGI.EXE function: FX_SmokeEmit_16 (VA 0x0048A6D0; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_16.h"
int32_t FX_SmokeEmit_16(int32_t context)

{
    int32_t result = g_5c8ba4;

    if (result < 0x1f)
    {
        int32_t entity_3 = (g_5c8ba0 + result) & 0x8000001f;

        if (entity_3 < 0)
            entity_3 = ((entity_3 - 1) | 0xffffffe0) + 1;

        *((entity_3 << 2) + &g_5c8b20) = context;
        result = g_5c8ba4 + 1;
        g_5c8ba4 = result;
    }

    return result;
}

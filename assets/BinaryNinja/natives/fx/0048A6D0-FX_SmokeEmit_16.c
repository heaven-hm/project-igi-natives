// Original IGI.EXE function: FX_SmokeEmit_16 (VA 0x0048A6D0; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_16.h"
int32_t FX_SmokeEmit_16(int32_t a1)

{
    int32_t result = g_5c8ba4;

    if (result < 0x1f)
    {
        int32_t objC3 = (g_5c8ba0 + result) & 0x8000001f;

        if (objC3 < 0)
            objC3 = ((objC3 - 1) | 0xffffffe0) + 1;

        *((objC3 << 2) + &g_5c8b20) = a1;
        result = g_5c8ba4 + 1;
        g_5c8ba4 = result;
    }

    return result;
}

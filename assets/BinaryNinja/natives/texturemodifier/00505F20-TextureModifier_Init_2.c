// Original IGI.EXE function: TextureModifier_Init_2 (VA 0x00505F20; static CFG gate PASS, CFG score 1.000).
#include "TextureModifier_Init_2.h"

void* TextureModifier_Init_2(void* pThis)

{
    void* result = pThis;

    if (*(result + 0xbc) >= 0)
    {
        result = *(result + 0xe4);

        if (*(result * 0x30 + 0xba50a8))
        {
            int32_t b97df8_1 = g_b97df8;
            *((b97df8_1 << 2) + &g_b97da0) = result;
            g_b97df8 = b97df8_1 + 1;
        }
    }

    return result;
}

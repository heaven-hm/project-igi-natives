// Original IGI.EXE function: TextureModifier_Create (VA 0x00505ED0; static CFG gate PASS, CFG score 1.000).
#include "TextureModifier_Create.h"

void* TextureModifier_Create(void* pThis)

{
    void* result = pThis;

    if (*(result + 0xdc))
    {
        int32_t ba5060_1 = g_ba5060;
        void* result_val_1 = g_b97df8 - 1;
        g_b97df8 = result_val_1;
        result = result_val_1 - 4;
        g_ba5060 = ba5060_1 >> 8;

        if (result >= 0)
        {
            result = g_ba5060 | ((*((result << 2) + &g_b97da0) << 0x18) + 1);
            g_ba5060 = result;
        }
    }

    return result;
}

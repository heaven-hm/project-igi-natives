#include "TextureModifier_Push.h"

void* TextureModifier_Push(void* pThis)

{
    int32_t ecx = *(pThis + 0xbc);

    if (ecx >= 0 && *(*(*(pThis + 0x68) + 0xdcc) + ecx * 0xc))
    {
        if (g_b97df8 < 0x14)
        {
            int32_t edx_3 = *(pThis + 0xe4);
            *(pThis + 0xdc) = 1;
            int32_t b97df8_1 = g_b97df8;
            *((b97df8_1 << 2) + &g_b97da0) = edx_3;
            int32_t edx_5 = g_ba5060 << 8;
            g_ba5060 = edx_5;
            int32_t eax_1 = *(pThis + 0xe4) + 1;
            g_ba5060 = edx_5 | eax_1;
            g_b97df8 = b97df8_1 + 1;
            return eax_1;
        }

        Error_Show("Too many items in texture modifier stack!");

        while (true)
            /* nop */
    }

    *(pThis + 0xdc) = 0;
    return pThis;
}

// IGI native provenance: TextureModifier_Push - 0x00505E40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505E40-TextureModifier_Push.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TextureModifier_Push.h"

void* TextureModifier_Push(void* pThis)

{
    int32_t counter_val = *(pThis + 0xbc);

    if (counter_val >= 0 && *(*(*(pThis + 0x68) + 0xdcc) + counter_val * 0xc))
    {
        if (g_b97df8 < 0x14)
        {
            int32_t scratch_val_3 = *(pThis + 0xe4);
            *(pThis + 0xdc) = 1;
            int32_t b97df8_1 = g_b97df8;
            *((b97df8_1 << 2) + &g_b97da0) = scratch_val_3;
            int32_t scratch_val_5 = g_ba5060 << 8;
            g_ba5060 = scratch_val_5;
            int32_t result_val_1 = *(pThis + 0xe4) + 1;
            g_ba5060 = scratch_val_5 | result_val_1;
            g_b97df8 = b97df8_1 + 1;
            return result_val_1;
        }

        Error_Show("Too many items in texture modifier stack!");

        while (true)
            /* nop */
    }

    *(pThis + 0xdc) = 0;
    return pThis;
}

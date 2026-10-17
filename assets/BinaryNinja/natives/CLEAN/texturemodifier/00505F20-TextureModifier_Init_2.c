// IGI native provenance: TextureModifier_Init_2 - 0x00505F20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505F20-TextureModifier_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

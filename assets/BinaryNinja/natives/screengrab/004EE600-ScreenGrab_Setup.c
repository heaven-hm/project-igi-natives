// IGI native provenance: ScreenGrab_Setup - 0x004EE600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE600-ScreenGrab_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ScreenGrab_Setup.h"
int32_t* ScreenGrab_Setup(void* context)

{
    int32_t* result = *(context + 0x20);
    int16_t entity_2;

    if (!result)
    {
        result = Mem_Alloc(0xb, 4);
        *(context + 0x20) = result;
        *result = g_54dccc[0];
        result[1] = g_54dccc[4][0];
        entity_2 = g_54dccc[8][0];
        result[2] = entity_2;
        *(result + 0xa) = g_54dccc[0xa][0];
    }

    result = *(context + 0x24);

    if (result)
    {
        result = *(context + 0x25);

        if (!result)
        {
            g_54dcbc = 0x186a0;
            g_a70c5b = 1;
        }

        result = *(context + 0x24);

        if (result)
        {
            entity_2 = *(context + 0x24);
            *(context + 0x25) = entity_2;
            return result;
        }
    }

    g_a70c5b = 0;
    result = *(context + 0x24);
    *(context + 0x25) = result;
    return result;
}

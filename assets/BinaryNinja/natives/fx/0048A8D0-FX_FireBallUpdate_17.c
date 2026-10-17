// IGI native provenance: FX_FireBallUpdate_17 - 0x0048A8D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048A8D0-FX_FireBallUpdate_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

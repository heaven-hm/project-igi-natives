// IGI native provenance: FX_Germany - 0x0048F020 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048F020-FX_Germany.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_Germany.h"
int32_t FX_Germany()

{
    if (!g_5c8c20)
    {
        int32_t data_val;
        int32_t entity_1;
        int32_t temp_1;
        data_val = GetLocaleInfoA(0x400, 0x1002, &g_5c8c20, 0x100);

        if (!Camera_UpdateTransform_6(data_val, temp_1, entity_1, &g_5c8c20, "Germany"))
            FX_FireBallUpdate_26(1);
    }

    return FX_TrailUpdate_23(0, 0);
}

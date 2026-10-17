// IGI native provenance: Explosion0_OnEvent - 0x004806E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004806E0-Explosion0_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Explosion0_OnEvent.h"
int32_t Explosion0_OnEvent(int32_t context)

{
    int32_t* source_val = context;
    int32_t data_val = source_val[0x3f];

    if (data_val > 0)
    {
        source_val[0x3f] = data_val - 1;
        return data_val - 1;
    }

    if (!Render_ComputeNormals_2(*source_val[0x1b]))
        source_val[0x3c] = 0xffffffff;
    else
    {
        int32_t data_5 = Render_SetupLighting_2(*source_val[0x1b], 0);
        int32_t item_8_1 = data_5;
        item_8_1 = (source_val[0x3e] - source_val[0x3d]) / source_val[0x42] * item_8_1;
        source_val[0x3c] = item_8_1 % data_5;
    }

    int32_t data_10 = source_val[0x3d];

    if (!data_10)
        return QTask_FindType(source_val);

    source_val[0x3d] = data_10 - 1;
    return data_10 - 1;
}

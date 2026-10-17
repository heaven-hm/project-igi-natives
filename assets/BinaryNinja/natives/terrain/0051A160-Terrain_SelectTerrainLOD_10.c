// IGI native provenance: Terrain_SelectTerrainLOD_10 - 0x0051A160 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051A160-Terrain_SelectTerrainLOD_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SelectTerrainLOD_10.h"
int32_t Terrain_SelectTerrainLOD_10(float context, int32_t param_2)

{
    int32_t result = 0;
    int32_t source_val = *(context + 0x1f8);

    if (source_val <= 0)
        return result;

    int32_t* temp_1 = context + 0x68;

    while (*temp_1 != param_2)
    {
        result += 1;
        temp_1 = &temp_1[1];

        if (result >= source_val)
            return result;
    }

    int32_t i = result;

    if (result < source_val - 1)
    {
        int32_t* data_val = context + (result << 2) + 0x68;

        do
        {
            i += 1;
            *data_val = data_val[1];
            data_val = &data_val[1];
        } while (i < *(context + 0x1f8) - 1);
    }

    *(context + (*(context + 0x1f8) << 2) + 0x64) = 0;
    *(context + 0x1f8) -= 1;
    return Terrain_RenderWaterSurface_10(context);
}

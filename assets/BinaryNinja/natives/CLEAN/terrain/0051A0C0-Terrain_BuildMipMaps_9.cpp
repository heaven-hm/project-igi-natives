// IGI native provenance: Terrain_BuildMipMaps_9 - 0x0051A0C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051A0C0-Terrain_BuildMipMaps_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_BuildMipMaps_9.h"
long double Terrain_BuildMipMaps_9(int32_t context, float param_2)

{
    int32_t data_val = param_2 * 10.0f;

    if (data_val < 0)
        data_val = 0;
    else if (data_val > 9)
        data_val = 9;

    return 1.0f / (*(context + (data_val << 2) + 0x9c) * 10.0f);
}

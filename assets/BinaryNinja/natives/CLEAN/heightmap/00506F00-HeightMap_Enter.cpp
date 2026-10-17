// IGI native provenance: HeightMap_Enter - 0x00506F00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00506F00-HeightMap_Enter.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HeightMap_Enter.h"
void* HeightMap_Enter(void* context)

{
    int32_t entity_val = *(context + 0xbc);

    if (entity_val < 0 || !*(*(*(context + 0x68) + 0xdd0) + entity_val * 0xc))
    {
        *(context + 0xe8) = 0;
        return context;
    }

    int32_t temp_3 = *(context + 0xf8);
    *(context + 0xe8) = 1;
    int32_t entity_2 = g_b97df4;
    *((entity_2 << 2) + &g_b97d40) = temp_3 + 1;
    int32_t data_1 = *(context + 0xf8) + 1;
    g_ba2058 = data_1;
    g_b97df4 = entity_2 + 1;
    return data_1;
}

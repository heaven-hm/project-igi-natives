// IGI native provenance: Terrain_SelectTerrainLOD_6 - 0x00517940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517940-Terrain_SelectTerrainLOD_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SelectTerrainLOD_6.h"
void** Terrain_SelectTerrainLOD_6(void* context, int32_t param_2)

{
    for (void** i = *(context + 8); i; i = *i)
    {
        int32_t data_val = i[4];

        if (data_val == 0x464f524d)
        {
            void** data_1 = Terrain_SelectTerrainLOD_6(i, param_2);

            if (data_1)
                return data_1;
        }
        else if (data_val == param_2)
            return i;
    }

    return nullptr;
}

// IGI native provenance: FX_ExplosionSpawn_6 - 0x00485170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485170-FX_ExplosionSpawn_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ExplosionSpawn_6.h"
void* FX_ExplosionSpawn_6(int32_t context)

{
    int32_t temp_1 = g_5c89fc;
    int32_t data_val = 0;

    if (temp_1 > 0)
    {
        int32_t* entity_1 = &g_5c1590;

        do
        {
            if (*entity_1 == context)
                return data_val * 0x4a8 + &g_5c1590;

            data_val += 1;
            entity_1 = &entity_1[0x12a];
        } while (data_val < temp_1);
    }

    return 0;
}

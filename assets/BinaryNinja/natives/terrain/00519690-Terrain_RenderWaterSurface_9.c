// IGI native provenance: Terrain_RenderWaterSurface_9 - 0x00519690 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00519690-Terrain_RenderWaterSurface_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderWaterSurface_9.h"
void* Terrain_RenderWaterSurface_9(int32_t context)

{
    int32_t i_2 = g_a8101c;
    void* result = nullptr;

    if (i_2 > 0)
    {
        int32_t* temp_1 = &g_a80200;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            void* entity_val = *temp_1;

            if (*(entity_val + 0x4c20) == context)
                result = entity_val + 0xf8;

            temp_1 = &temp_1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

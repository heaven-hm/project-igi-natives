// IGI native provenance: Terrain_RenderQuadtree_10 - 0x0051A110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051A110-Terrain_RenderQuadtree_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderQuadtree_10.h"
void* Terrain_RenderQuadtree_10(void* context)

{
    int32_t* i_1 = *(context + 8);
    *(context + 0x1f8) = 0;
    int32_t* i = *i_1;

    if (i)
    {
        int32_t source_val;
        int32_t item_4_1 = source_val;

        do
        {
            if (i_1[7] == g_54ed4c)
            {
                int32_t source_2 = *(context + 0x1f8);

                if (source_2 < 0x64)
                {
                    *(context + (source_2 << 2) + 0x68) = i_1;
                    *(context + 0x1f8) += 1;
                }
            }

            i_1 = i;
            i = *i;
        } while (i);
    }

    return context;
}

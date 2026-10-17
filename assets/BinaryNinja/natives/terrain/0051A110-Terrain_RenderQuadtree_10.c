// Original IGI.EXE function: Terrain_RenderQuadtree_10 (VA 0x0051A110; static CFG gate PASS, CFG score 1.000).
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

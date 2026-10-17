// Original IGI.EXE function: Terrain_RenderQuadtree_10 (VA 0x0051A110; static CFG gate PASS, CFG score 1.000).
#include "Terrain_RenderQuadtree_10.h"
void* Terrain_RenderQuadtree_10(void* a1)

{
    int32_t* i_1 = *(a1 + 8);
    *(a1 + 0x1f8) = 0;
    int32_t* i = *i_1;

    if (i)
    {
        int32_t srcS;
        int32_t v_4_1 = srcS;

        do
        {
            if (i_1[7] == g_54ed4c)
            {
                int32_t srcS2 = *(a1 + 0x1f8);

                if (srcS2 < 0x64)
                {
                    *(a1 + (srcS2 << 2) + 0x68) = i_1;
                    *(a1 + 0x1f8) += 1;
                }
            }

            i_1 = i;
            i = *i;
        } while (i);
    }

    return a1;
}

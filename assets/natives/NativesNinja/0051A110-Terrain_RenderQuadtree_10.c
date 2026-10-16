#include "0051A110-Terrain_RenderQuadtree_10.h"
/* 0x0051a110 Terrain_RenderQuadtree_10 full linked: callers=1 callees=0 */
void* sub_51a110(void* a1)

{
    int32_t* i_1 = *(a1 + 8);
    *(a1 + 0x1f8) = 0;
    int32_t* i = *i_1;

    if (i)
    {
        int32_t esi;
        int32_t var_4_1 = esi;

        do
        {
            if (i_1[7] == g_54ed4c)
            {
                int32_t esi_2 = *(a1 + 0x1f8);

                if (esi_2 < 0x64)
                {
                    *(a1 + (esi_2 << 2) + 0x68) = i_1;
                    *(a1 + 0x1f8) += 1;
                }
            }

            i_1 = i;
            i = *i;
        } while (i);
    }

    return a1;
}

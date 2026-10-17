// Original IGI.EXE function: Terrain_RenderQuadtree_6 (VA 0x005178E0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_RenderQuadtree_6.h"
void** Terrain_RenderQuadtree_6(void** context, int32_t param_2)

{
    void** i = context;

    if (i[5] == param_2)
        i = *i;

    for (; i; i = *i)
    {
        int32_t data_2 = i[5];

        if (i[4] == 0x464f524d)
        {
            if (data_2 == param_2)
                return i;

            void** data_3 = i[2];

            if (data_3)
            {
                void** data_4 = Terrain_BuildMipMaps_5(data_3, param_2);

                if (data_4)
                    return data_4;
            }
        }
        else if (data_2 == param_2)
            return i;
    }

    return nullptr;
}

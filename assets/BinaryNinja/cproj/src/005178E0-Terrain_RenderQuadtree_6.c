#include "gi_platform.h"
#include "005178E0-Terrain_RenderQuadtree_6.h"
void** Terrain_RenderQuadtree_6(void** a1, int32_t a2)

{
    void** i = a1;

    if (i[5] == a2)
        i = *i;

    for (; i; i = *i)
    {
        int32_t valA2 = i[5];

        if (i[4] == 0x464f524d)
        {
            if (valA2 == a2)
                return i;

            void** valA3 = i[2];

            if (valA3)
            {
                void** valA4 = Terrain_BuildMipMaps_5(valA3, a2);

                if (valA4)
                    return valA4;
            }
        }
        else if (valA2 == a2)
            return i;
    }

    return nullptr;
}

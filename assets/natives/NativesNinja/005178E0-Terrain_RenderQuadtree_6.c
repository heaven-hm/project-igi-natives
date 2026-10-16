#include "005178E0-Terrain_RenderQuadtree_6.h"
/* 0x005178e0 Terrain_RenderQuadtree_6 full linked: callers=4 callees=1 */
void** sub_5178e0(void** a1, int32_t a2)

{
    void** i = a1;

    if (i[5] == a2)
        i = *i;

    for (; i; i = *i)
    {
        int32_t eax_2 = i[5];

        if (i[4] == 0x464f524d)
        {
            if (eax_2 == a2)
                return i;

            void** eax_3 = i[2];

            if (eax_3)
            {
                void** eax_4 = sub_517890(eax_3, a2);

                if (eax_4)
                    return eax_4;
            }
        }
        else if (eax_2 == a2)
            return i;
    }

    return nullptr;
}

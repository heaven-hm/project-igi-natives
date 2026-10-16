#include "00517940-Terrain_SelectTerrainLOD_6.h"
/* 0x00517940 Terrain_SelectTerrainLOD_6 full linked: callers=10 callees=1 */
void** sub_517940(void* a1, int32_t a2)

{
    for (void** i = *(a1 + 8); i; i = *i)
    {
        int32_t eax = i[4];

        if (eax == 0x464f524d)
        {
            void** eax_1 = sub_517940(i, a2);

            if (eax_1)
                return eax_1;
        }
        else if (eax == a2)
            return i;
    }

    return nullptr;
}

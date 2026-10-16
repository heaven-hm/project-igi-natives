#include "Terrain_SelectTerrainLOD_6.h"
void** Terrain_SelectTerrainLOD_6(void* a1, int32_t a2)

{
    for (void** i = *(a1 + 8); i; i = *i)
    {
        int32_t valA = i[4];

        if (valA == 0x464f524d)
        {
            void** valA1 = Terrain_SelectTerrainLOD_6(i, a2);

            if (valA1)
                return valA1;
        }
        else if (valA == a2)
            return i;
    }

    return nullptr;
}

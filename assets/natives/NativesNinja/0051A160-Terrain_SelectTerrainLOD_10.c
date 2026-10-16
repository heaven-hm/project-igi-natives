#include "0051A160-Terrain_SelectTerrainLOD_10.h"
/* 0x0051a160 Terrain_SelectTerrainLOD_10 full linked: callers=1 callees=1 */
int32_t sub_51a160(float a1, int32_t a2)

{
    int32_t result = 0;
    int32_t esi = *(a1 + 0x1f8);

    if (esi <= 0)
        return result;

    int32_t* edx_1 = a1 + 0x68;

    while (*edx_1 != a2)
    {
        result += 1;
        edx_1 = &edx_1[1];

        if (result >= esi)
            return result;
    }

    int32_t i = result;

    if (result < esi - 1)
    {
        int32_t* eax = a1 + (result << 2) + 0x68;

        do
        {
            i += 1;
            *eax = eax[1];
            eax = &eax[1];
        } while (i < *(a1 + 0x1f8) - 1);
    }

    *(a1 + (*(a1 + 0x1f8) << 2) + 0x64) = 0;
    *(a1 + 0x1f8) -= 1;
    return sub_51a8c0(a1);
}

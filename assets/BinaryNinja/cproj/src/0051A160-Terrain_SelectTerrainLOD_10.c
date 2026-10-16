#include "gi_platform.h"
#include "0051A160-Terrain_SelectTerrainLOD_10.h"
int32_t Terrain_SelectTerrainLOD_10(float a1, int32_t a2)

{
    int32_t result = 0;
    int32_t srcS = (*(int32_t*)(uintptr_t)(a1 + 0x1f8));

    if (srcS <= 0)
        return result;

    int32_t* tmpD1 = a1 + 0x68;

    while (*tmpD1 != a2)
    {
        result += 1;
        tmpD1 = &tmpD1[1];

        if (result >= srcS)
            return result;
    }

    int32_t i = result;

    if (result < srcS - 1)
    {
        int32_t* valA = a1 + (result << 2) + 0x68;

        do
        {
            i += 1;
            *valA = valA[1];
            valA = &valA[1];
        } while (i < (*(int32_t*)(uintptr_t)(a1 + 0x1f8)) - 1);
    }

    (*(int32_t*)(uintptr_t)(a1 + (*(a1 + 0x1f8) << 2) + 0x64)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x1f8)) -= 1;
    return (Terrain_RenderWaterSurface_10(a1), 0);
}

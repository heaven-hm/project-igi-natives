#include "gi_platform.h"
#include "00512BA0-Terrain_SampleHeightmap_2.h"
int32_t Terrain_SampleHeightmap_2()

{
    int32_t valA2 = g_a800ec;
    int32_t dstD = 0;

    if (valA2 <= 0)
    {
        g_a800ec = 0;
        return valA2;
    }

    int32_t* srcS = &g_afa844;
    int32_t valA1;

    do
    {
        int32_t* valA = Display_CloseDevice_14(0x28);
        valA[1] = g_a7dc60;
        valA[3] = srcS[-1];
        valA[4] = *srcS;
        valA[5] = srcS[1];
        valA[6] = srcS[2];
        valA[7] = srcS[3];
        valA[8] = srcS[4];
        valA[9] = srcS[5];
        Display_ClearSurfaces_14(0, valA);
        valA1 = g_a800ec;
        dstD += 1;
        srcS = &srcS[7];
    } while (dstD < valA1);

    g_a800ec = 0;
    return valA1;
}

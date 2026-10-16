#include "gi_platform.h"
#include "00516AD3-Terrain_SelectTerrainLOD_4.h"
long double Terrain_SelectTerrainLOD_4(char* a1)

{
    char* srcS = a1;

    while (true)
    {
        BOOL valA2;
        wchar16 (* objC)[0x21];

        if (g_54427c <= 1)
        {
            uint32_t valA3 = *srcS;
            objC = g_544070;
            valA3 = (*objC)[valA3];
            valA2 = valA3 & 8;
        }
        else
        {
            uint32_t valA1 = *srcS;
            uint32_t v_c_1 = valA1;
            int32_t tmpD;
            valA2 = Camera_ApplyBandFilter_12(valA1, tmpD, objC, 8);
            objC = 8;
        }

        if (!valA2)
            break;

        srcS = &srcS[1];
    }

    int32_t v_8 = 0;
    int32_t v_c_2 = 0;
    void* v_10_1 = Camera_UpdateViewCone_20(srcS);
    return (*(int32_t*)(uintptr_t)(Terrain_CalculateNormals_4(srcS) + 0x10));
}

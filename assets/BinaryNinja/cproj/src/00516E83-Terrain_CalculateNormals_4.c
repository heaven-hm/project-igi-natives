#include "gi_platform.h"
#include "00516E83-Terrain_CalculateNormals_4.h"
int32_t Terrain_CalculateNormals_4(int32_t a1)

{
    int32_t dstD = 0;
    char v_1c;
    char* v_8;
    char valA = Camera_ApplyHandiCam_29(&v_1c, &v_8, a1, 0, 0, 0, 0);
    int32_t v_10;

    if (!(valA & 4))
    {
        int32_t valA1 = Camera_ApplyWideScreen_25(&v_1c, &v_10);

        if (valA & 2 || valA1 == 1)
            dstD = 0x80;

        if (valA & 1 || valA1 == 2)
            dstD |= 0x100;
    }
    else
    {
        dstD = 0x200;
        v_10 = 0;
        int32_t v_c_1 = 0;
    }

    **&g_54ec40 = dstD;
    *(g_54ec40 + 4) = v_8 - a1;
    *(g_54ec40 + 0x10) = v_10;
    return g_54ec40;
}

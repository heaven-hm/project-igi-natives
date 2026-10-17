// Original IGI.EXE function: Terrain_UpdateWaterWaves_4 (VA 0x00516B20; static CFG gate PASS, CFG score 1.000).
#include "Terrain_UpdateWaterWaves_4.h"
char* Terrain_UpdateWaterWaves_4(char* a1, char* a2, char* a3, char* a4, char* a5)

{
    int32_t objC;
    int32_t v_8 = objC;
    char* result_1 = nullptr;
    char* result_2 = a1;

    if (Camera_UpdateViewCone_20(result_2) >= 1 && result_2[1] == 0x3a)
    {
        if (a2)
        {
            Terrain_BuildMipMaps_4(a2, result_2, 2);
            a2[2] = 0;
        }

        result_2 = &result_2[2];
    }
    else if (a2)
        *a2 = 0;

    a2 = nullptr;
    char* result = result_2;
    char* srcS2 = 0xff;
    a1 = result;

    if (*result_2)
    {
        do
        {
            char objC2 = *result;

            if (*(objC2 + 0xc32321) & 4)
                result = &result[1];
            else if (objC2 == 0x2f || objC2 == 0x5c)
                a2 = &result[1];
            else if (objC2 == 0x2e)
                result_1 = result;

            result = &result[1];
        } while (*result);

        a1 = result;
    }

    if (*result_2 && a2)
    {
        if (a3)
        {
            char* dstD2 = a2 - result_2;

            if (dstD2 >= 0xff)
                dstD2 = 0xff;

            Terrain_BuildMipMaps_4(a3, result_2, dstD2);
            *(dstD2 + a3) = 0;
            result = a1;
        }

        result_2 = a2;
    }
    else if (a3)
        *a3 = 0;

    if (!result_1 || result_1 < result_2)
    {
        if (a4)
        {
            char* valA5 = result - result_2;

            if (valA5 < 0xff)
                srcS2 = valA5;

            Terrain_BuildMipMaps_4(a4, result_2, srcS2);
            *(srcS2 + a4) = 0;
        }

        result = a5;

        if (result)
            *result = 0;
    }
    else
    {
        if (a4)
        {
            char* dstD4 = result_1 - result_2;

            if (dstD4 >= 0xff)
                dstD4 = 0xff;

            Terrain_BuildMipMaps_4(a4, result_2, dstD4);
            *(dstD4 + a4) = 0;
            result = a1;
        }

        if (a5)
        {
            char* valA4 = result - result_1;

            if (valA4 < 0xff)
                srcS2 = valA4;

            result = Terrain_BuildMipMaps_4(a5, result_1, srcS2);
            *(srcS2 + a5) = 0;
        }
    }

    return result;
}

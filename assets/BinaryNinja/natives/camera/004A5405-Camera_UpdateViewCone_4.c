// Original IGI.EXE function: Camera_UpdateViewCone_4 (VA 0x004A5405; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_4.h"
int32_t Camera_UpdateViewCone_4(char* a1)

{
    char* dstD = a1;
    BOOL valA2;
    wchar16 (* objC)[0x21];
    int32_t tmpD;

    while (true)
    {
        if (g_54427c <= 1)
        {
            uint32_t valA3 = *dstD;
            objC = g_544070;
            valA3 = (*objC)[valA3];
            valA2 = valA3 & 8;
        }
        else
        {
            uint32_t valA1 = *dstD;
            uint32_t v_18_1 = valA1;
            valA2 = Camera_ApplyBandFilter_12(valA1, tmpD, objC, 8);
            objC = 8;
        }

        if (!valA2)
            break;

        dstD = &dstD[1];
    }

    uint32_t srcS = *dstD;
    char* dstD1 = &dstD[1];
    uint32_t flagP = srcS;

    if (srcS == 0x2d || srcS == 0x2b)
    {
        srcS = *dstD1;
        dstD1 = &dstD1[1];
    }

    int32_t result = 0;

    while (true)
    {
        BOOL valA4;

        if (g_54427c <= 1)
        {
            wchar16 (* valA5)[0x21] = g_544070;
            valA5 = (*valA5)[srcS];
            valA4 = valA5 & 4;
        }
        else
        {
            uint32_t v_18_2 = srcS;
            valA4 = Camera_ApplyBandFilter_12(valA2, tmpD, objC, 4);
            objC = 4;
        }

        if (!valA4)
            break;

        valA2 = result * 5;
        result = srcS + (valA2 << 1) - 0x30;
        srcS = *dstD1;
        dstD1 = &dstD1[1];
    }

    if (flagP != 0x2d)
        return result;

    return -(result);
}

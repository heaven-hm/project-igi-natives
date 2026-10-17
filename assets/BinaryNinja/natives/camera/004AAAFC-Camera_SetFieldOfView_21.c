// Original IGI.EXE function: Camera_SetFieldOfView_21 (VA 0x004AAAFC; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_21.h"
int32_t Camera_SetFieldOfView_21(char* a1, void** a2, int32_t a3, int32_t a4)

{
    int32_t result = 0;
    char ctxB = *a1;
    char* srcS = &a1[1];
    char* v_8 = srcS;

    while (true)
    {
        BOOL valA2;
        wchar16 (* objC)[0x21];

        if (g_54427c <= 1)
        {
            objC = g_544070;
            uint32_t valA3 = ctxB;
            valA3 = (*objC)[valA3];
            valA2 = valA3 & 8;
        }
        else
        {
            uint32_t valA1 = ctxB;
            uint32_t v_24_1 = valA1;
            int32_t tmpD;
            valA2 = Camera_ApplyBandFilter_12(valA1, tmpD, objC, 8);
            objC = 8;
        }

        if (!valA2)
            break;

        ctxB = *srcS;
        srcS = &srcS[1];
    }

    char* v_8_1 = srcS;

    if (ctxB == 0x2d)
    {
        a4 |= 2;
    label_4aab57:
        ctxB = *srcS;
        srcS = &srcS[1];
        v_8_1 = srcS;
    }
    else if (ctxB == 0x2b)
        goto label_4aab57;

    if (a3 < 0 || a3 == 1 || a3 > 0x24)
    {
        char** valA20 = a2;

        if (valA20)
            *valA20 = a1;

        return 0;
    }

    int32_t objC1 = 0x10;

    if (a3)
        goto label_4aaba5;

    if (ctxB == 0x30)
    {
        char valA5 = *srcS;

        if (valA5 == 0x78 || valA5 == 0x58)
        {
            a3 = 0x10;
        label_4aaba5:

            if (a3 == 0x10 && ctxB == 0x30)
            {
                valA5 = *srcS;

                if (valA5 == 0x78 || valA5 == 0x58)
                {
                    ctxB = srcS[1];
                    v_8_1 = &srcS[2];
                }
            }
        }
        else
            a3 = 8;
    }
    else
        a3 = 0xa;

    int32_t valA6 = 0xffffffff;
    int32_t tmpD1 = 0;
    char* valA7 = COMBINE(tmpD1, valA6) / a3;
    uint32_t tmpD2 = COMBINE(tmpD1, valA6) % a3;
    char* v_10_1 = valA7;

    while (true)
    {
        uint32_t srcS3 = ctxB;
        BOOL valA8;

        if (g_54427c <= 1)
        {
            wchar16 (* valA9)[0x21] = g_544070;
            valA9 = (*valA9)[srcS3];
            valA8 = valA9 & 4;
        }
        else
        {
            uint32_t v_24_2 = srcS3;
            valA8 = Camera_ApplyBandFilter_12(valA7, tmpD2, objC1, 4);
            objC1 = 4;
        }

        if (!valA8)
        {
            BOOL valA10;

            if (g_54427c <= 1)
            {
                wchar16 (* valA11)[0x21] = g_544070;
                valA11 = (*valA11)[srcS3];
                valA10 = valA11 & 0x103;
            }
            else
            {
                uint32_t v_24_3 = srcS3;
                valA10 = Camera_ApplyBandFilter_12(valA8, tmpD2, objC1, 0x103);
                objC1 = 0x103;
            }

            if (!valA10)
                break;

            int32_t v_20_1 = ctxB;
            uint32_t valA13;
            valA13 = Camera_ApplyWideScreen_28(objC1);
            objC1 = valA13 - 0x37;
        }
        else
            objC1 = ctxB - 0x30;

        if (objC1 >= a3)
            break;

        a4 |= 8;

        if (result >= v_10_1 && result == v_10_1)
            tmpD2 = COMBINE(0, 0xffffffff) % a3;

        if (result < v_10_1 || (result == v_10_1 && objC1 <= tmpD2))
            result = result * a3 + objC1;
        else
            a4 |= 4;

        valA7 = v_8_1;
        v_8_1 = &v_8_1[1];
        ctxB = *valA7;
    }

    char* v_8_2 = v_8_1 - 1;

    if (!(a4 & 8))
    {
        if (a2)
            v_8_2 = a1;

        result = 0;
    }
    else if (a4 & 4)
    {
    label_4aacb5:
        g_936064 = 0x22;

        if (!(a4 & 1))
        {
            int32_t objC6 = a4;
            objC6 &= 2;
            char f4_1 = objC6;
            objC6 = -(objC6);
            result = -((objC6 - objC6)) + 0x7fffffff;
        }
        else
            result = 0xffffffff;
    }
    else if (!(a4 & 1))
    {
        int32_t objC5 = a4 & 2;

        if (objC5 && result > 0x80000000)
            goto label_4aacb5;

        if (!objC5 && result > 0x7fffffff)
            goto label_4aacb5;
    }

    if (a2)
        *a2 = v_8_2;

    if (!(a4 & 2))
        return result;

    return -(result);
}

#include "Sys_While.h"
int32_t Sys_While(void* a1)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;
    char* dstD = *(a1 + 0x1c);
    char* srcS = &g_547df0;
    char* valA = dstD;
    int32_t valA2;
    char tmpD1;
    char ctxB1;

    while (true)
    {
        tmpD1 = *valA;
        ctxB1 = *srcS;
        bool c_1 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA2 = 0;
                break;
            }

            tmpD1 = valA[1];
            ctxB1 = srcS[1];
            c_1 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA = &valA[2];
                srcS = &srcS[2];

                if (tmpD1)
                    continue;

                valA2 = 0;
                break;
            }
        }

        valA2 = valA - valA + 1;
        break;
    }

    if (!valA2)
        return 1;

    char* srcS1 = &g_547dec;
    char* valA4 = dstD;
    int32_t valA6;

    while (true)
    {
        tmpD1 = *valA4;
        ctxB1 = *srcS1;
        bool c_3 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA6 = 0;
                break;
            }

            tmpD1 = valA4[1];
            ctxB1 = srcS1[1];
            c_3 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA4 = &valA4[2];
                srcS1 = &srcS1[2];

                if (tmpD1)
                    continue;

                valA6 = 0;
                break;
            }
        }

        valA6 = valA4 - valA4 + 1;
        break;
    }

    if (!valA6)
        return 2;

    char* srcS2 = &g_547de8;
    char* valA8 = dstD;
    int32_t valA10;

    while (true)
    {
        tmpD1 = *valA8;
        ctxB1 = *srcS2;
        bool c_5 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA10 = 0;
                break;
            }

            tmpD1 = valA8[1];
            ctxB1 = srcS2[1];
            c_5 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA8 = &valA8[2];
                srcS2 = &srcS2[2];

                if (tmpD1)
                    continue;

                valA10 = 0;
                break;
            }
        }

        valA10 = valA8 - valA8 + 1;
        break;
    }

    if (!valA10)
        return 3;

    char* srcS3 = "else";
    char* valA12 = dstD;
    int32_t valA14;

    while (true)
    {
        tmpD1 = *valA12;
        ctxB1 = *srcS3;
        bool c_7 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA14 = 0;
                break;
            }

            tmpD1 = valA12[1];
            ctxB1 = srcS3[1];
            c_7 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA12 = &valA12[2];
                srcS3 = &srcS3[2];

                if (tmpD1)
                    continue;

                valA14 = 0;
                break;
            }
        }

        valA14 = valA12 - valA12 + 1;
        break;
    }

    if (!valA14)
        return 4;

    char* srcS4 = &g_547ddc;
    char* valA16 = dstD;
    int32_t valA18;

    while (true)
    {
        tmpD1 = *valA16;
        ctxB1 = *srcS4;
        bool c_9 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA18 = 0;
                break;
            }

            tmpD1 = valA16[1];
            ctxB1 = srcS4[1];
            c_9 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA16 = &valA16[2];
                srcS4 = &srcS4[2];

                if (tmpD1)
                    continue;

                valA18 = 0;
                break;
            }
        }

        valA18 = valA16 - valA16 + 1;
        break;
    }

    if (!valA18)
        return 5;

    char* srcS5 = "while";
    char* valA20 = dstD;
    int32_t valA22;

    while (true)
    {
        tmpD1 = *valA20;
        ctxB1 = *srcS5;
        bool c_11 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
            {
                valA22 = 0;
                break;
            }

            tmpD1 = valA20[1];
            ctxB1 = srcS5[1];
            c_11 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA20 = &valA20[2];
                srcS5 = &srcS5[2];

                if (tmpD1)
                    continue;

                valA22 = 0;
                break;
            }
        }

        valA22 = valA20 - valA20 + 1;
        break;
    }

    if (!valA22)
        return 6;

    char* srcS6 = &g_547dd0;
    char* valA24 = dstD;

    while (true)
    {
        tmpD1 = *valA24;
        ctxB1 = *srcS6;
        bool c_13 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
                break;

            tmpD1 = valA24[1];
            ctxB1 = srcS6[1];
            c_13 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA24 = &valA24[2];
                srcS6 = &srcS6[2];

                if (!tmpD1)
                    break;

                continue;
            }
        }

        int32_t valA28 = valA24 - valA24 + 1;
        int32_t valA29 = -(valA28);
        int32_t valA30 = valA29 - valA29;
        valA30 &= 0xf9;
        return valA30 + 7;
    }

    int32_t valA25 = 0 - 0;
    valA25 &= 0xf9;
    return valA25 + 7;
}

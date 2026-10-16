#include "Camera_ApplyLineFilter_8.h"
int32_t* Camera_ApplyLineFilter_8(char* a1, int32_t* a2, char* a3, int32_t* a4, int32_t* a5)

{
    int32_t* objC = a5;
    *objC = 0;
    char* srcS = a3;
    int32_t* dstD = a2;
    *a4 = 1;
    char* valA1 = a1;

    if (dstD)
    {
        *dstD = srcS;
        dstD = &dstD[1];
        a2 = dstD;
    }

    if (*valA1 != 0x22)
    {
        while (true)
        {
            *objC += 1;

            if (srcS)
            {
                *srcS = *valA1;
                srcS = &srcS[1];
            }

            char tmpD5 = *valA1;
            valA1 = &valA1[1];

            if (*(tmpD5 + 0xc32321) & 4)
            {
                *objC += 1;

                if (srcS)
                {
                    *srcS = *valA1;
                    srcS = &srcS[1];
                }

                valA1 = &valA1[1];
            }

            if (tmpD5 == 0x20)
            {
            label_4a6228:

                if (tmpD5)
                {
                    if (srcS)
                        srcS[0xffffffff] = 0;

                    break;
                }
            }
            else if (tmpD5)
            {
                if (tmpD5 == 9)
                    goto label_4a6228;

                continue;
            }

            valA1 -= 1;
            break;
        }
    }
    else
    {
        while (true)
        {
            char tmpD1 = valA1[1];
            valA1 = &valA1[1];

            if (tmpD1 == 0x22)
                break;

            if (!tmpD1)
                break;

            if (*(tmpD1 + 0xc32321) & 4)
            {
                *objC += 1;

                if (srcS)
                {
                    *srcS = *valA1;
                    srcS = &srcS[1];
                    valA1 = &valA1[1];
                }
            }

            *objC += 1;

            if (srcS)
            {
                *srcS = *valA1;
                srcS = &srcS[1];
            }
        }

        *objC += 1;

        if (srcS)
        {
            *srcS = 0;
            srcS = &srcS[1];
        }

        if (*valA1 == 0x22)
            valA1 = &valA1[1];
    }

    a5 = nullptr;

    while (*valA1)
    {
        while (true)
        {
            char tmpD6 = *valA1;

            if (tmpD6 != 0x20 && tmpD6 != 9)
                break;

            valA1 = &valA1[1];
        }

        if (!*valA1)
            break;

        if (dstD)
        {
            *dstD = srcS;
            dstD = &dstD[1];
            a2 = dstD;
        }

        *a4 += 1;

        while (true)
        {
            a1 = 1;
            uint32_t i_2 = 0;

            while (*valA1 == 0x5c)
            {
                valA1 = &valA1[1];
                i_2 += 1;
            }

            if (*valA1 == 0x22)
            {
                if (!(i_2 & 1))
                {
                    if (!a5 || valA1[1] != 0x22)
                        a1 = nullptr;
                    else
                        valA1 = &valA1[1];

                    dstD = a2;
                    int32_t* tmpD9 = nullptr;
                    tmpD9 = !a5;
                    a5 = tmpD9;
                }

                i_2 u>>= 1;
            }

            if (i_2)
            {
                int32_t i_1 = i_2;
                int32_t i;

                do
                {
                    if (srcS)
                    {
                        *srcS = 0x5c;
                        srcS = &srcS[1];
                    }

                    *objC += 1;
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
            }

            char tmpD11 = *valA1;

            if (!tmpD11)
                break;

            if (!a5)
            {
                if (tmpD11 == 0x20)
                    break;

                if (tmpD11 == 9)
                    break;
            }

            if (a1)
            {
                if (srcS)
                {
                    if (*(tmpD11 + 0xc32321) & 4)
                    {
                        *srcS = tmpD11;
                        srcS = &srcS[1];
                        valA1 = &valA1[1];
                        *objC += 1;
                    }

                    *srcS = *valA1;
                    srcS = &srcS[1];
                }
                else if (*(tmpD11 + 0xc32321) & 4)
                {
                    valA1 = &valA1[1];
                    *objC += 1;
                }

                *objC += 1;
            }

            valA1 = &valA1[1];
        }

        if (srcS)
        {
            *srcS = 0;
            srcS = &srcS[1];
        }

        *objC += 1;
    }

    if (dstD)
        *dstD = 0;

    *a4 += 1;
    return a4;
}

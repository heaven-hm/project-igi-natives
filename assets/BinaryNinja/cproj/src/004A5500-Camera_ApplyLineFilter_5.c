#include "gi_platform.h"
#include "004A5500-Camera_ApplyLineFilter_5.h"
char* Camera_ApplyLineFilter_5(char* a1, char* a2, int32_t a3)

{
    int32_t objC = a3;

    if (!objC)
        return a1;

    int32_t ctxB1 = objC;
    char* srcS1 = a2;
    char* dstD1 = a1;
    char valA1;
    uint32_t i_2;
    uint32_t i_3;

    if (srcS1 & 3)
    {
        do
        {
            valA1 = *srcS1;
            srcS1 = &srcS1[1];
            *dstD1 = valA1;
            dstD1 = &dstD1[1];
            int32_t f0_1 = objC;
            objC -= 1;

            if (f0_1 == 1)
                return a1;

            if (!valA1)
            {
                while (dstD1 & 3)
                {
                    *dstD1 = valA1;
                    dstD1 = &dstD1[1];
                    int32_t f2_1 = objC;
                    objC -= 1;

                    if (f2_1 == 1)
                        return a1;
                }

                ctxB1 = objC;
                i_3 = objC >> 2;

                if (!i_3)
                    goto label_4a557b;
    label_4a55e7: ;
                valA1 = 0;
                uint32_t i;

                do
                {
                    *dstD1 = 0;
                    dstD1 = &dstD1[4];
                    i = i_3;
                    i_3 -= 1;
                } while (i != 1);
    label_4a55f1: ;
                ctxB1 &= 3;

                if (ctxB1)
                    goto label_4a557b;

                return a1;
            }
        } while (srcS1 & 3);

        ctxB1 = objC;
        i_2 = objC >> 2;

        if (i_2)
            goto label_4a558f;
    label_4a5540: ;
        ctxB1 &= 3;

        if (ctxB1)
            goto label_4a5545;
    }
    else
    {
        i_2 = objC >> 2;

        if (i_2)
        {
    label_4a558f: ;
            uint32_t i_1;

            do
            {
                int32_t valA4 = *srcS1;
                int32_t tmpD2 = *srcS1;
                srcS1 = &srcS1[4];

                if ((valA4 ^ 0xffffffff ^ (0x7efefeff + valA4)) & 0x81010100)
                {
                    if (!tmpD2)
                    {
                        *dstD1 = 0;
    label_4a55df: ;
                        dstD1 = &dstD1[4];
                        valA1 = 0;
                        i_3 = i_2 - 1;

                        if (i_2 == 1)
                            goto label_4a55f1;

                        goto label_4a55e7;
                    }

                    if (!*(&tmpD2 + 1))
                    {
                        *dstD1 = tmpD2 & 0xff;
                        goto label_4a55df;
                    }

                    if (!(tmpD2 & 0xff0000))
                    {
                        *dstD1 = tmpD2 & 0xffff;
                        goto label_4a55df;
                    }

                    if (!(tmpD2 & 0xff000000))
                    {
                        *dstD1 = tmpD2;
                        goto label_4a55df;
                    }
                }

                *dstD1 = tmpD2;
                dstD1 = &dstD1[4];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
            goto label_4a5540;
        }
    label_4a5545: ;
        while (true)
        {
            valA1 = *srcS1;
            srcS1 = &srcS1[1];
            *dstD1 = valA1;
            dstD1 = &dstD1[1];

            if (!valA1)
            {
                while (true)
                {
                    int32_t f3_1 = ctxB1;
                    ctxB1 -= 1;

                    if (f3_1 == 1)
                        return a1;
    label_4a557b: ;
                    *dstD1 = valA1;
                    dstD1 = &dstD1[1];
                }
            }
            else
            {
                int32_t f4_1 = ctxB1;
                ctxB1 -= 1;

                if (f4_1 == 1)
                    break;
            }
        }
    }
    return a1;
}

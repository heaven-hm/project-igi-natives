// Original IGI.EXE function: Camera_ApplyPostProcess_22 (VA 0x004ABA99; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_22.h"
int32_t Camera_ApplyPostProcess_22(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t objC;
    int32_t v_8 = objC;
    void* srcS = a1[1];
    char* dstD = *a1;
    char* v_8_1 = dstD;
    char* valA = dstD;
    void* valA6;

    if (srcS < a3)
    {
        char* srcS1 = srcS + dstD;

        if (*srcS1)
            valA = srcS1;

        if (&valA[a3] >= &a1[0x3e])
        {
        label_4abb31:
            char* srcS6 = &a1[2];
            int32_t valA5;

            while (true)
            {
                if (srcS6 >= dstD)
                    return 0;

                if (&srcS6[a3] >= &a1[0x3e])
                    return 0;

                char valA4 = *srcS6;

                if (valA4)
                    srcS6 = &srcS6[valA4];
                else
                {
                    char* ctxB3 = &srcS6[1];
                    valA5 = 1;

                    while (!*ctxB3)
                    {
                        ctxB3 = &ctxB3[1];
                        valA5 += 1;
                    }

                    if (valA5 >= a3)
                        break;

                    a2 -= valA5;

                    if (a2 < a3)
                        return 0;

                    srcS6 = ctxB3;
                }
            }

            void* ctxB5 = &srcS6[a3];

            if (ctxB5 >= &a1[0x3e])
            {
                a1[1] = 0;
                *a1 = &a1[2];
            }
            else
            {
                *a1 = ctxB5;
                a1[1] = valA5 - a3;
            }

            *srcS6 = a3;
            valA6 = &srcS6[8];
        }
        else
        {
            while (true)
            {
                char ctxB1 = *valA;

                if (ctxB1)
                    valA = &valA[ctxB1];
                else
                {
                    char* ctxB2 = &valA[1];
                    int32_t srcS3 = 1;

                    while (!*ctxB2)
                    {
                        ctxB2 = &ctxB2[1];
                        srcS3 += 1;
                    }

                    if (srcS3 >= a3)
                    {
                        void* ctxB4 = &valA[a3];

                        if (ctxB4 >= &a1[0x3e])
                        {
                            a1[1] = 0;
                            *a1 = &a1[2];
                        }
                        else
                        {
                            *a1 = ctxB4;
                            a1[1] = srcS3 - a3;
                        }

                        *valA = a3;
                        valA6 = &valA[8];
                        break;
                    }

                    if (valA != v_8_1)
                    {
                        a2 -= srcS3;

                        if (a2 < a3)
                            return 0;
                    }
                    else
                        a1[1] = srcS3;

                    dstD = v_8_1;
                    valA = ctxB2;
                }

                if (&valA[a3] >= &a1[0x3e])
                    goto label_4abb31;
            }
        }
    }
    else
    {
        *dstD = a3;

        if (&dstD[a3] >= &a1[0x3e])
        {
            a1[1] = 0;
            *a1 = &a1[2];
        }
        else
        {
            *a1 += a3;
            a1[1] -= a3;
        }

        valA6 = &dstD[8];
    }

    return (valA6 << 4) - a1 * 0xf;
}

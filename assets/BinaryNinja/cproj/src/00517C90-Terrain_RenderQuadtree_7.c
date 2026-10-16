#include "gi_platform.h"
#include "00517C90-Terrain_RenderQuadtree_7.h"
int16_t* Terrain_RenderQuadtree_7(char* a1, int32_t a2, int16_t* a3, int16_t* a4, int32_t a5, int32_t a6, int32_t* a7)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t valA;
    int32_t objC1;
    int32_t srcS;

    if (!a7)
    {
        objC1 = a5;
        srcS = 0;
        valA = 0;
        a5 = objC1;
        a6 = a6;
    }
    else
    {
        objC1 = a5;
        srcS = *a7;
        int32_t ctxB1 = a7[2];
        valA = a7[1];
        a5 = ctxB1;
        int32_t dstD2 = objC1 - srcS;

        if (ctxB1 >= dstD2)
            a5 = dstD2;

        int32_t tmpD1 = a7[3];
        int32_t dstD4 = a6 - valA;

        a6 = tmpD1 < dstD4 ? tmpD1 : dstD4;
    }

    a7 = nullptr;
    int16_t* result = &a4[valA * objC1 + srcS];

    if (a3 > 0)
    {
        int32_t tmpD4 = a2;
        int16_t* result_1 = result;
        char* srcS1 = &a1[2];
        a4 = result_1;
        a1 = srcS1;
        bool cond_0_1;

        do
        {
            int32_t flagP1 = 0;

            if (tmpD4 > 0)
            {
                do
                {
                    int32_t objC3;

                    if (flagP1 < a5)
                        objC3 = a6;

                    char valA9;
                    char objC5;
                    char tmpD7;
                    char ctxB4;

                    if (flagP1 >= a5 || a7 >= objC3)
                    {
                        objC5 = 0;
                        tmpD7 = 0;
                        ctxB4 = 0;
                        valA9 = 0;
                    }
                    else
                    {
                        objC3 = *result_1;
                        int32_t valA6 = objC3 & 0x8000;
                        int32_t valA7 = -(valA6);
                        valA9 = valA7 - valA7;
                        ctxB4 = objC3 >> 7 & 0xf8;
                        tmpD7 = objC3 >> 2 & 0xf8;
                        objC5 = (objC3 & 0x1f) << 3;
                    }

                    srcS1[1] = valA9;
                    *srcS1 = ctxB4;
                    srcS1[0xffffffff] = tmpD7;
                    srcS1[0xfffffffe] = objC5;
                    flagP1 += 1;
                    result_1 = &result_1[1];
                    srcS1 = &srcS1[4];
                } while (flagP1 < a2);

                tmpD4 = a2;
            }

            srcS1 = &a1[tmpD4 << 2];
            result = a3;
            result_1 = &a4[objC1];
            cond_0_1 = a7 + 1 < result;
            a7 += 1;
            a4 = result_1;
            a1 = srcS1;
        } while (cond_0_1);
    }

    return result;
}

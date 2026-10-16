#include "Terrain_RenderWaterSurface_7.h"
void* Terrain_RenderWaterSurface_7(void* a1, int32_t a2, int32_t a3, int32_t a4, char* a5, int32_t a6, int32_t* a7, int32_t a8, int32_t* a9)

{
    int32_t* tmpD12 = a9;
    int32_t valA;
    int32_t objC;
    int32_t* ctxB;

    if (!tmpD12)
    {
        ctxB = a7;
        objC = 0;
        valA = 0;
        a9 = ctxB;
        a8 = a8;
    }
    else
    {
        ctxB = a7;
        objC = *tmpD12;
        int32_t* dstD1 = tmpD12[2];
        valA = tmpD12[1];
        a9 = dstD1;
        int32_t* srcS2 = ctxB - objC;

        if (dstD1 >= srcS2)
            a9 = srcS2;

        int32_t tmpD = tmpD12[3];
        int32_t dstD3 = a8 - valA;

        a8 = tmpD < dstD3 ? tmpD : dstD3;
    }

    int32_t flagP = a4;
    void* v_8;

    if (flagP)
        v_8 = valA * ctxB + objC + flagP;

    int32_t tmpD5 = 0;
    int32_t v_4 = 0;
    char* objC1 = valA * ctxB + objC + a5;
    void* result = a1;
    a5 = objC1;
    a1 = result;

    if (a3 > 0)
    {
        do
        {
            int32_t dstD5 = 0;

            if (a2 > 0)
            {
                char* valA4 = result + 3;
                void* flagP2 = v_8 - objC1;

                do
                {
                    if (dstD5 >= a9 || tmpD5 >= a8)
                    {
                        *valA4 = 0;
                        valA4[0xffffffff] = 0;
                        valA4[0xfffffffe] = 0;
                        valA4[0xfffffffd] = 0;
                    }
                    else
                    {
                        char tmpD7;

                        if (!a4)
                        {
                            char tmpD8 = *objC1;
                            char f0_1 = tmpD8;
                            tmpD8 = -(tmpD8);
                            tmpD7 = (tmpD8 - tmpD8) & 0xff;
                        }
                        else
                            tmpD7 = *(objC1 + flagP2);

                        *valA4 = tmpD7;
                        int32_t tmpD9 = 0;
                        tmpD9 = *objC1;
                        valA4[0xffffffff] = *(a6 + (tmpD9 << 2) + 2);
                        int32_t ctxB3 = 0;
                        ctxB3 = *objC1;
                        valA4[0xfffffffe] = *(a6 + (ctxB3 << 2) + 1);
                        int32_t ctxB5 = 0;
                        ctxB5 = *objC1;
                        valA4[0xfffffffd] = *(a6 + (ctxB5 << 2));
                        tmpD5 = v_4;
                    }

                    dstD5 += 1;
                    objC1 = &objC1[1];
                    valA4 = &valA4[4];
                } while (dstD5 < a2);

                ctxB = a7;
                flagP = a4;
                objC1 = a5;
                result = a1;
            }

            if (flagP)
                v_8 += ctxB;

            objC1 += ctxB;
            tmpD5 += 1;
            result += a2 << 2;
            a5 = objC1;
            a1 = result;
            v_4 = tmpD5;
        } while (tmpD5 < a3);
    }

    return result;
}

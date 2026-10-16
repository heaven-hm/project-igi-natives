#include "Terrain_ConnectGraphNode_4.h"
uint32_t Terrain_ConnectGraphNode_4(char* a1, int32_t a2, uint32_t a3, int32_t* a4)

{
    int32_t objC;
    int32_t v_8 = objC;
    char* dstD1 = a2 * a3;
    char* ctxB = a1;
    char* objC1 = dstD1;
    char* v_8_1 = dstD1;
    a1 = objC1;

    if (!dstD1)
        return 0;

    int32_t* srcS1 = a4;

    if (!(srcS1[3] & 0x10c))
        a4 = 0x1000;
    else
        a4 = srcS1[6];

    while (true)
    {
        char* valA3;

        if (srcS1[3] & 0x10c)
            valA3 = srcS1[1];

        if (srcS1[3] & 0x10c && valA3)
        {
            char* dstD2 = objC1;

            if (objC1 >= valA3)
                dstD2 = valA3;

            Camera_ResetMatrix_20(ctxB, *srcS1, dstD2);
            a1 -= dstD2;
            srcS1[1] -= dstD2;
            *srcS1 = &dstD2[*srcS1];
            ctxB += dstD2;
            dstD1 = v_8_1;
        }
        else if (objC1 < a4)
        {
            uint32_t valA7 = Camera_UpdateViewCone_9(srcS1);

            if (valA7 == 0xffffffff)
                break;

            *ctxB = valA7;
            ctxB = &ctxB[1];
            a1 -= 1;
            a4 = srcS1[6];
        }
        else
        {
            char* valA4 = objC1;

            if (a4)
                valA4 = objC1 - COMBINE(0, valA4) % a4;

            void* valA6 = Camera_UpdateViewCone_23(srcS1[4], ctxB, valA4);

            if (!valA6)
            {
                srcS1[3] |= 0x10;
                break;
            }

            if (valA6 == 0xffffffff)
            {
                srcS1[3] |= 0x20;
                break;
            }

            a1 -= valA6;
            ctxB += valA6;
        }

        if (!a1)
            return a3;

        objC1 = a1;
    }

    return COMBINE(0, dstD1 - a1) / a2;
}

#include "DynObj_Johan_2.h"
int32_t* DynObj_Johan_2(int32_t* a1)

{
    int32_t* ctxB = a1;
    void* dstD = &ctxB[5];
    int32_t i = 0xffffffff;
    ctxB[9] = 0;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    void v_20;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&v_20, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    Camera_UpdateViewCone_6(&v_20, "johan");
    int32_t v_24 = 0;
    int32_t i_1 = 1;
    int16_t* flagP = ctxB + 0x3e;
    int32_t valA5;

    do
    {
        *flagP = 0x64 / (i_1 * i_1);
        int32_t* valA3 = DynObj_ParseConfigFile_13(&v_20);
        *ctxB = valA3;

        if (!valA3)
        {
            a1[0xf] = v_24;
            return a1;
        }

        void* dstD3 = &v_20;
        int32_t j = 0xffffffff;
        flagP = &flagP[1];

        while (j)
        {
            bool cond_1_1 = 0 != *dstD3;
            dstD3 += 1;
            j -= 1;

            if (!cond_1_1)
                break;
        }

        void* dstD4 = &v_20;
        ctxB = &ctxB[1];
        int16_t tmpD3;
        tmpD3 = *((&v_24 + 3) + ~j - 1);
        int32_t j_1 = 0xffffffff;
        tmpD3 += 1;

        while (j_1)
        {
            bool cond_2_1 = 0 != *dstD4;
            dstD4 += 1;
            j_1 -= 1;

            if (!cond_2_1)
                break;
        }

        valA5 = v_24 + 1;
        i_1 += 1;
        v_24 = valA5;
        *((&v_24 + 3) + ~j_1 - 1) = tmpD3;
    } while (i_1 < 6);

    a1[0xf] = valA5;
    return a1;
}

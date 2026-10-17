// Original IGI.EXE function: DynObj_RegisterSymbol_3 (VA 0x004C0780; static CFG gate PASS, CFG score 0.905).
#include "DynObj_RegisterSymbol_3.h"
int32_t __convention("regparm") DynObj_RegisterSymbol_3(int32_t a1, int32_t a2, int32_t a3, void* a4, int32_t* a5)

{
    int32_t v_4 = a3;
    int32_t* flagP = a5;
    int32_t dstD = 0;
    int32_t* ctxB = flagP[2];

    if (*ctxB)
    {
        void* dstD1 = &ctxB[2];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC = ~i;
        int32_t srcS2;
        int32_t dstD4;
        dstD4 = memcpy(a4 + 8, dstD1 - objC, objC & 0xfffffffc);
        memcpy(dstD4, srcS2, objC & 3);
        *(a4 + 0x2c4) = ctxB[0xb1];
        Camera_ApplyHandiCam_33(ctxB);
        Sys_ExecuteBytecode_2(ctxB);
        return 1;
    }

    int32_t i_1;

    do
    {
        int32_t* valA2 = flagP[1];

        if (**valA2)
        {
            a5 = nullptr;
            int32_t* j_1 = **flagP;
            int32_t* j = *j_1;

            if (j)
            {
                do
                {
                    if (Sys_AllocateMemory(&v_4, nullptr, *flagP[1], &j_1[0x42], &j_1[0xa42], 0))
                    {
                        int32_t valA7 = v_4;

                        if (valA7 >= dstD)
                        {
                            dstD = valA7;
                            a5 = j_1;

                            if (j_1[0x1242])
                                break;
                        }
                    }

                    j_1 = j;
                    j = *j;
                } while (j);

                if (a5)
                {
                    int32_t valA10 = dstD;

                    if (dstD >= 0x2bc)
                        valA10 = 0x2bc;

                    Camera_ApplyLineFilter_5(a4 + 8, *flagP[1], valA10);
                    int32_t valA12 = dstD;

                    if (dstD >= 0x2bc)
                        valA12 = 0x2bc;

                    *(valA12 + a4 + 8) = 0;
                    int32_t* valA13 = flagP[1];
                    *valA13 += dstD;
                    *(a4 + 0x2c4) = a5[0x1243];
                    return 1;
                }
            }

            break;
        }

        i_1 = Sys_CheckHeap_30(valA2);
    } while (i_1);
    return 0;
}

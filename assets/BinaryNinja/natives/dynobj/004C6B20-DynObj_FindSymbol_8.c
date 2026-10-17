// Original IGI.EXE function: DynObj_FindSymbol_8 (VA 0x004C6B20; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_8.h"
int32_t* DynObj_FindSymbol_8(void* a1, int32_t a2, int32_t a3, int32_t* a4)

{
    void* tmpD = *a4;
    void* v_14 = tmpD;

    if (a2 <= a3)
    {
        *a4 = tmpD;
        return a4;
    }

    void* flagP = a1;
    int32_t valA20;

    do
    {
        int32_t ctxB5 = *(tmpD + 4);
        int32_t dstD1 = *(tmpD + 0x2c);
        void* srcS1 = *(tmpD + 8);
        int32_t v_c_1 = dstD1;
        int16_t valA8;

        if (dstD1)
        {
            void* tmpD1 = *(srcS1 + (ctxB5 << 2) + 0xc);
            int32_t objC4 = 0x8000;
            void* i = *(tmpD1 + 0x2c);

            do
            {
                dstD1 = *(i + 0x5c);
                i = *(i + 0x58);
                objC4 |= dstD1;
            } while (i);

            *(tmpD1 + 0x38) = objC4;
            int32_t tmpD2 = 0x8000;
            int32_t* objC5 = srcS1 + 0xc;
            a1 = 8;
            bool cond_2_1;

            do
            {
                void* valA9 = *objC5;

                if (valA9)
                {
                    dstD1 = *(valA9 + 0x3a);
                    dstD1 |= *(valA9 + 0x38);
                    tmpD2 |= dstD1;
                }

                objC5 = &objC5[1];
                cond_2_1 = a1 != 1;
                a1 -= 1;
            } while (cond_2_1);
            *(srcS1 + 0x3a) = tmpD2;
            tmpD = v_14;
        }
        else
        {
            a1 = 0x8000;
            int32_t v_14_1 = 8;
            *(*(srcS1 + (ctxB5 << 2) + 0xc) + 0x38) = 0x8000;
            int32_t* objC3 = srcS1 + 0xc;
            bool cond_1_1;

            do
            {
                void* valA3 = *objC3;

                if (valA3)
                {
                    dstD1 = *(valA3 + 0x3a);
                    dstD1 |= *(valA3 + 0x38);
                    a1 |= dstD1;
                }

                objC3 = &objC3[1];
                cond_1_1 = v_14_1 != 1;
                v_14_1 -= 1;
            } while (cond_1_1);
            valA8 = a1;
            *(srcS1 + 0x3a) = valA8;
        }

        valA8 = *(tmpD + 0x30);

        if (!valA8 && !v_c_1)
        {
            int32_t* valA13 = *(*(srcS1 + (ctxB5 << 2) + 0xc) + 0x3c);

            if (valA13)
                DynCubeObj_Action(valA13);

            int32_t* dstD2 = *(flagP + 0xd14);
            int32_t tmpD4 = *(dstD2 + *(srcS1 + (ctxB5 << 2) + 0xc));
            int32_t valA15 = *(flagP + 0xd08) - 1;
            *(flagP + 0xd08) = valA15;

            if (tmpD4 != valA15)
            {
                int32_t objC7 = *(flagP + 0xd04);
                int32_t valA18 = *(objC7 + (valA15 << 2)) * *(flagP + 0xd10) + *(flagP + 0xd00);
                void* ctxB2 = *(objC7 + (tmpD4 << 2));
                int32_t dstD3 = *(dstD2 + valA18);
                *(objC7 + (tmpD4 << 2)) = *(objC7 + (dstD3 << 2));
                *(*(flagP + 0xd04) + (dstD3 << 2)) = ctxB2;
                *(*(flagP + 0xd14) + valA18) = tmpD4;
            }

            *(srcS1 + (ctxB5 << 2) + 0xc) = 0;
            *(srcS1 + 0x30) &= ~(1 << (ctxB5 & 0x1f));
        }

        valA20 = a3 << 1;
        tmpD = srcS1;
        v_14 = tmpD;
        a3 = valA20;
    } while (a2 > valA20);
    *a4 = tmpD;
    return a4;
}

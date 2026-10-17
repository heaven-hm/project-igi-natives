// Original IGI.EXE function: Physics_CalculateSplineLength_12 (VA 0x0050AA70; static CFG gate FAIL, CFG score 0.667).
#include "Physics_CalculateSplineLength_12.h"
int32_t* Physics_CalculateSplineLength_12(int32_t a1, int32_t a2 @ 0xc, float a3)

{
    long double fpu7 = a3;
    long double f0 = 0.200000003f;
    fpu7 - f0;
    void* srcS = nullptr;
    int32_t* valA;
    valA = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&valA + 1) & 0x41 || a2 & 0x20000000)
    {
        long double x87_r7_1 = a3;
        long double f1_1 = 0f;
        x87_r7_1 - f1_1;
        valA = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&valA + 1) & 0x41 || a2 & 0x20000000)
        {
            int32_t i_8 = g_a7cebc;
            int32_t tmpD2 = 0xffffffff;

            if (i_8 > 0)
            {
                valA = &g_a7c180;
                int32_t i_5 = i_8;
                int32_t i;

                do
                {
                    int32_t objC3 = *valA;

                    if (objC3 > tmpD2)
                    {
                        tmpD2 = objC3;
                        srcS = &valA[-0x10];
                    }

                    valA = &valA[0x11];
                    i = i_5;
                    i_5 -= 1;
                } while (i != 1);
            }
        }
        else
        {
            int32_t i_7 = g_a7cebc;
            int32_t tmpD1 = 0xffffffff;

            if (i_7 > 0)
            {
                int32_t* valA2 = &g_a7c180;
                int32_t i_4 = i_7;
                int32_t i_1;

                do
                {
                    int32_t objC2 = *valA2;

                    if (objC2 > tmpD1 && valA2[-4])
                    {
                        tmpD1 = objC2;
                        srcS = &valA2[-0x10];
                    }

                    valA2 = &valA2[0x11];
                    i_1 = i_4;
                    i_4 -= 1;
                } while (i_1 != 1);
                memcpy(a1, srcS, 0x20);
                return valA2;
            }
        }
    }
    else
    {
        int32_t i_6 = g_a7cebc;
        int32_t tmpD = 0xffffffff;

        if (i_6 > 0)
        {
            int32_t* valA1 = &g_a7c170;
            int32_t i_3 = i_6;
            int32_t i_2;

            do
            {
                int32_t objC1 = *valA1;

                if (objC1 > tmpD)
                {
                    tmpD = objC1;
                    srcS = &valA1[-0xc];
                }

                valA1 = &valA1[0x11];
                i_2 = i_3;
                i_3 -= 1;
            } while (i_2 != 1);
            memcpy(a1, srcS, 0x20);
            return valA1;
        }
    }

    memcpy(a1, srcS, 0x20);
    return valA;
}

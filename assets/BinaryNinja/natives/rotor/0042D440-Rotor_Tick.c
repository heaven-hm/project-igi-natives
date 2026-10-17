// Original IGI.EXE function: Rotor_Tick (VA 0x0042D440; static CFG gate PASS, CFG score 1.000).
#include "Rotor_Tick.h"
void* Rotor_Tick(float a1)

{
    float ctxB = a1;
    void* result = *(ctxB + 0x13c);
    void* srcS = *(ctxB + 0x130);
    char* dstD = *(result + 0x2d4);
    float v_30;

    if (*dstD)
    {
        long double x87_r7_3 = *(*(srcS + 0x1b4) + 8) * *(srcS + 0x720) * 44.6008873f;
        a1 = x87_r7_3;
        long double f1_1 = 0f;
        x87_r7_3 - f1_1;
        result = (x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_4 = 0f;
            long double x87_r6_1 = *(srcS + 0x74);
            int32_t valA = *(srcS + 0x8c);
            float tmpD1 = *(srcS + 0x80);
            float v_3c = x87_r6_1;
            long double f2_1 = 0f;
            x87_r6_1 - f2_1;
            int32_t v_34_1 = valA;
            int32_t tmpD2 = *(srcS + 0x84);
            int32_t v_28_1 = *(srcS + 0x90);
            v_30 = *(srcS + 0x78);
            int32_t v_2c_1 = tmpD2;
            long double x87_r6_2;
            long double f3_1;

            if (*(&((x87_r6_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            {
                x87_r6_2 = tmpD1;
                f3_1 = 0f;
                x87_r6_2 - f3_1;
            }

            if (!(*(&((x87_r6_1 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                (x87_r6_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f3_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                int32_t v_34_2 = 0;
                x87_r7_4 = Sys_PushStack_10(&v_3c, &v_30);
            }

            long double fp0_2;
            bool c1_1;
            bool c2_4;
            fp0_2 = __fcos(x87_r7_4);
            int32_t v_c_1 = 0;
            int32_t v_8_1 = 0;
            int32_t v_4_1 = 0;
            int32_t v_18 = 0;
            float v_10_1 = a1;
            float v_14_1 = fp0_2 * a1;
            result = ForceAccumulator_Add(srcS + 0xf0, &v_18);
        }
    }

    long double x87_r7_8 = *(srcS + 0x720);
    long double f0 = 0f;
    x87_r7_8 - f0;
    result = (x87_r7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f0) ? 1 : 0) << 0xa
        | (x87_r7_8 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = dstD[1];

        if ((result || *dstD) && !*(srcS + 0x1b8))
        {
            int32_t v_24_1 = 0;
            int32_t v_20_1 = 0x46000000;
            int32_t v_1c_1 = 0;
            v_30 = 0f;
            int32_t v_2c_2 = 0;
            int32_t v_28_2 = 0;

            if (result)
                v_30 = -((*(*(srcS + 0x1b4) + 8) * *(srcS + 0x720) * 2.5f));
            else if (*dstD)
                v_30 = *(*(srcS + 0x1b4) + 8) * *(srcS + 0x720) * 2.5f;

            result = ForceAccumulator_Add(srcS + 0xf0, &v_30);
        }
    }

    *(ctxB + 0x138) = *(dstD + 0xc) * *(dstD + 8) * *(srcS + 0x720) + *(ctxB + 0x138);
    int32_t* i_1 = *(ctxB + 8);

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t tmpD4 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i;
                void* valA9;

                if (!srcS1)
                    valA9 = nullptr;
                else
                {
                    int32_t valA6 = *srcS1;
                    int32_t valA7 = -(valA6);
                    valA9 = (valA7 - valA7) & srcS1;
                }

                *((tmpD4 << 2) + &g_afa6e0) = valA9;
                int32_t tmpD5 = tmpD4 + 1;
                int32_t valA10 = 0;
                g_afa7e0 = tmpD5;
                valA10 = i[7];
                result = *((valA10 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD5 = g_afa7e0;
                }

                i = *((tmpD5 << 2) + &g_afa6dc);
                tmpD4 = tmpD5 - 1;
                g_afa7e0 = tmpD4;
            } while (i);
        }
    }

    return result;
}

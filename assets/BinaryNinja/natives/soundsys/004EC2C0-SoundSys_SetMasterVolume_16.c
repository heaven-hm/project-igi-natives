// Original IGI.EXE function: SoundSys_SetMasterVolume_16 (VA 0x004EC2C0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetMasterVolume_16.h"
float SoundSys_SetMasterVolume_16(void* a1, int32_t a2, float a3, void* a4, float* a5, float a6) __location("valA")

{
    float* valA = a6;
    float v_20 = a5[7] * valA[2] + a5[1] * *valA + a5[4] * valA[1];
    long double x87_r7_10 = a5[8] * valA[2] + a5[2] * *valA;
    long double x87_r6_11 = a5[5] * valA[1];
    float v_3c = a5[6] * valA[2] + a5[3] * valA[1] + *a5 * *valA;
    float result_1 = x87_r7_10 + x87_r6_11;
    float result;
    long double fp0;
    fp0 = Sys_DispatchOpcode_10(&v_3c);
    a6 = fp0 * fp0 * a3;
    long double x87_r7_14 = a6;
    long double f0 = 0f;
    x87_r7_14 - f0;
    result = (x87_r7_14 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f0) ? 1 : 0) << 0xa
        | (x87_r7_14 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        long double x87_r7_15 = v_3c;
        long double f1_1 = 0f;
        x87_r7_15 - f1_1;
        result = result_1;
        float result_2 = result;
        float v_24_1 = v_3c;
        float v_20_1 = v_20;
        result = (x87_r7_15 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
        label_4ec3a9:
            long double x87_r7_18 = result_1;
            long double x87_r6_15 = v_20;
            long double x87_r5_1 = v_3c;
            long double x87_r7_20 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_15 * x87_r6_15 + x87_r7_18 * x87_r7_18);
            v_24_1 = v_3c * x87_r7_20;
            v_20_1 = v_20_1 * x87_r7_20;
            result_2 = result_2 * x87_r7_20;
        }
        else
        {
            long double x87_r7_16 = v_20;
            long double f2_1 = 0f;
            x87_r7_16 - f2_1;
            result = (x87_r7_16 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f2_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_4ec3a9;

            long double x87_r7_17 = result_1;
            long double f3_1 = 0f;
            x87_r7_17 - f3_1;
            result = (x87_r7_17 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_4ec3a9;
        }

        int32_t i_1 = a2;

        if (i_1 > 0)
        {
            int32_t* srcS1 = a1 + 0xc;
            int32_t i;

            do
            {
                long double x87_r7_22 = srcS1[-3];
                long double f4_1 = 0f;
                x87_r7_22 - f4_1;
                result = (x87_r7_22 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == f4_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    int32_t v_c_1 = srcS1[1];
                    int32_t v_8_1 = srcS1[2];
                    int32_t v_4_1 = srcS1[3];
                    float tmpD4 = *srcS1;
                    long double x87_r7_28 = (v_20_1 * srcS1[-1] + result_2 * *srcS1
                        + v_24_1 * srcS1[-2]) * srcS1[-3] * a6;
                    long double x87_r6_30 = srcS1[-1] * x87_r7_28;
                    float v_18 = srcS1[-2] * x87_r7_28;
                    float v_14_1 = x87_r6_30;
                    float v_10_1 = tmpD4 * x87_r7_28;
                    result = ForceAccumulator_Add(a4, &v_18);
                }

                srcS1 = &srcS1[7];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}

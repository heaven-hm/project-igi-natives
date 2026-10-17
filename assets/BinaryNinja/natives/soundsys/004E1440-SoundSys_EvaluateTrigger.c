// Original IGI.EXE function: SoundSys_EvaluateTrigger (VA 0x004E1440; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger.h"
int32_t* SoundSys_EvaluateTrigger(float a1, int32_t* a2)

{
    float tmpD = a1;
    float* objC = *a2;
    int32_t* i_1;

    if (!*(tmpD + 0x5b4))
    {
        char valA = *(tmpD + 0x5b5);
        long double x87_r7_12;

        if (!valA)
            x87_r7_12 = *(tmpD + 0xfc);
        else
            x87_r7_12 = *(tmpD + 0x100);

        long double x87_r6_4 = *(tmpD + 0x59c) * 1f / (*(tmpD + 0x100) - *(tmpD + 0xfc));

        if (valA)
            x87_r6_4 = -(x87_r6_4);

        i_1 = a2[1];
        int32_t i = 0;

        if (i_1 > 0)
        {
            do
            {
                long double x87_r5_8 = (-(x87_r7_12) + *objC) * x87_r6_4;
                int32_t srcS1 = x87_r5_8;
                a1 = srcS1;

                if (srcS1 == *(tmpD + 0x59c))
                {
                    srcS1 -= 1;
                    a1 = srcS1;
                }

                long double x87_r5_9 = x87_r5_8 - a1;
                long double x87_r4_10 = 0f;
                x87_r4_10 - x87_r5_9;

                if (*(&((x87_r4_10 < x87_r5_9 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_10, x87_r5_9) ? 1 : 0) << 0xa
                    | (x87_r4_10 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                {
                    long double x87_r4_11 = 1f;
                    x87_r4_11 - x87_r5_9;

                    if (*(&((x87_r4_11 < x87_r5_9 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_11, x87_r5_9) ? 1 : 0) << 0xa
                            | (x87_r4_11 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                        x87_r5_9 = 1f;
                }
                else
                    x87_r5_9 = 0f;

                int32_t valA3 = srcS1 * 5;
                i += 1;
                long double x87_r4_13 = *(tmpD + (valA3 << 3) + 0x208) * objC[2];
                void* valA4 = tmpD + (valA3 << 3);
                void* dstD5 = tmpD + srcS1 * 0xc;
                long double x87_r3_10 = *(tmpD + (valA3 << 3) + 0x204) * objC[1];
                objC = &objC[6];
                long double x87_r4_15 = x87_r4_13 + x87_r3_10 + *(dstD5 + 0x104);
                long double x87_r3_18 = *(valA4 + 0x214) * objC[-4] + *(valA4 + 0x210) * objC[-5]
                    + *(tmpD + ((srcS1 * 3 + 0x42) << 2));
                float v_14_2 = x87_r3_18;
                float v_10_2 =
                    *(valA4 + 0x220) * objC[-4] + *(valA4 + 0x21c) * objC[-5] + *(dstD5 + 0x10c);
                long double x87_r2_14 = *(valA4 + 0x23c) * objC[-4] + *(valA4 + 0x238) * objC[-5]
                    + *(tmpD + ((srcS1 * 3 + 0x45) << 2));
                i_1 = a2;
                float v_4_3 =
                    *(valA4 + 0x248) * objC[-4] + *(valA4 + 0x244) * objC[-5] + *(dstD5 + 0x118);
                objC[-6] = (*(valA4 + 0x230) * objC[-4] + *(valA4 + 0x22c) * objC[-5]
                    + *(dstD5 + 0x110) - x87_r4_15) * x87_r5_9 + x87_r4_15;
                objC[-5] = (x87_r2_14 - v_14_2) * x87_r5_9 + v_14_2;
                objC[-4] = (v_4_3 - v_10_2) * x87_r5_9 + v_10_2;
            } while (i < i_1[1]);
        }
    }
    else
    {
        i_1 = nullptr;
        float v_18_1 = (*(tmpD + 0xfc) + *(tmpD + 0x100)) * 0.5f;

        if (a2[1] > 0)
        {
            do
            {
                long double x87_r7_7 = *objC - v_18_1;
                long double x87_r6_1 = objC[1];
                long double x87_r5_1 = objC[2];
                float* dstD2 = objC;
                i_1 += 1;
                objC = &objC[6];
                float v_8_1 =
                    x87_r5_1 * *(tmpD + 0x84) + x87_r6_1 * *(tmpD + 0x80) + x87_r7_7 * *(tmpD + 0x7c);
                long double x87_r7_10 = x87_r7_7 * *(tmpD + 0x88) + x87_r5_1 * *(tmpD + 0x90);
                long double x87_r6_2 = x87_r6_1 * *(tmpD + 0x8c);
                *dstD2 =
                    x87_r7_7 * *(tmpD + 0x70) + x87_r5_1 * *(tmpD + 0x78) + x87_r6_1 * *(tmpD + 0x74);
                dstD2[1] = v_8_1;
                dstD2[2] = x87_r7_10 + x87_r6_2;
            } while (i_1 < a2[1]);
        }
    }

    return i_1;
}

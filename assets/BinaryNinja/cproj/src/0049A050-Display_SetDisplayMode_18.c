#include "gi_platform.h"
#include "0049A050-Display_SetDisplayMode_18.h"
void* Display_SetDisplayMode_18(float a1, int32_t a2, void* a3, int32_t* a4 )

{
    float tmpD = a1;
    int32_t* flagP = &g_b46d40;
    void* srcS1 = (*(int32_t*)(uintptr_t)(*(*(*(*(tmpD + 0x6c) + (a2 << 2)) + 0xc) + 0xc) + 0x2c)) + (a3 << 5);
    float* objC4 = *(srcS1 + 0x14);
    a3 = srcS1;

    if (!*(tmpD + 0x5b4))
    {
        char valA3 = *(tmpD + 0x5b5);
        long double x87_r7_12;

        if (!valA3)
            x87_r7_12 = *(tmpD + 0xfc);
        else
            x87_r7_12 = *(tmpD + 0x100);

        long double x87_r6_4 = *(tmpD + 0x59c) * 1.0f / (*(tmpD + 0x100) - *(tmpD + 0xfc));

        if (valA3)
            x87_r6_4 = -(x87_r6_4);

        a2 = 0;

        if (*(srcS1 + 4) > 0)
        {
            int32_t i;

            do
            {
                long double x87_r5_8 = (-(x87_r7_12) + *objC4) * x87_r6_4;
                int32_t srcS2 = x87_r5_8;
                a1 = srcS2;

                if (srcS2 == *(tmpD + 0x59c))
                {
                    srcS2 -= 1;
                    a1 = srcS2;
                }

                long double x87_r5_9 = x87_r5_8 - a1;
                long double x87_r4_10 = 0.0f;
                x87_r4_10 - x87_r5_9;

                if (*(&((x87_r4_10 < x87_r5_9 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_10, x87_r5_9) ? 1 : 0) << 0xa
                    | (x87_r4_10 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                {
                    long double x87_r4_11 = 1.0f;
                    x87_r4_11 - x87_r5_9;

                    if (*(&((x87_r4_11 < x87_r5_9 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_11, x87_r5_9) ? 1 : 0) << 0xa
                            | (x87_r4_11 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                        x87_r5_9 = 1.0f;
                }
                else
                    x87_r5_9 = 0.0f;

                int32_t valA7 = srcS2 * 5;
                objC4 = &objC4[4];
                void* valA8 = tmpD + (valA7 << 3);
                void* dstD5 = tmpD + srcS2 * 0xc;
                flagP = &flagP[3];
                long double x87_r4_15 = *(tmpD + (valA7 << 3) + 0x208) * objC4[-2]
                    + *(tmpD + (valA7 << 3) + 0x204) * objC4[-3] + *(dstD5 + 0x104);
                long double x87_r3_18 = *(valA8 + 0x214) * objC4[-2] + *(valA8 + 0x210) * objC4[-3]
                    + *(tmpD + ((srcS2 * 3 + 0x42) << 2));
                float v_14_2 = x87_r3_18;
                float v_10_2 =
                    *(valA8 + 0x220) * objC4[-2] + *(valA8 + 0x21c) * objC4[-3] + *(dstD5 + 0x10c);
                srcS1 = a3;
                long double x87_r2_14 = *(valA8 + 0x23c) * objC4[-2] + *(valA8 + 0x238) * objC4[-3]
                    + *(tmpD + ((srcS2 * 3 + 0x45) << 2));
                i = a2 + 1;
                a2 = i;
                float v_4_3 =
                    *(valA8 + 0x248) * objC4[-2] + *(valA8 + 0x244) * objC4[-3] + *(dstD5 + 0x118);
                flagP[-3] = (*(valA8 + 0x230) * objC4[-2] + *(valA8 + 0x22c) * objC4[-3]
                    + *(dstD5 + 0x110) - x87_r4_15) * x87_r5_9 + x87_r4_15;
                flagP[-2] = (x87_r2_14 - v_14_2) * x87_r5_9 + v_14_2;
                flagP[-1] = (v_4_3 - v_10_2) * x87_r5_9 + v_10_2;
            } while (i < *(srcS1 + 4));
        }
    }
    else
    {
        int32_t i_1 = 0;
        float v_18_1 = (*(tmpD + 0xfc) + *(tmpD + 0x100)) * 0.5.0f;

        if (*(srcS1 + 4) > 0)
        {
            do
            {
                long double x87_r7_7 = *objC4 - v_18_1;
                long double x87_r6_1 = objC4[1];
                long double x87_r5_1 = objC4[2];
                int32_t* dstD2 = flagP;
                i_1 += 1;
                objC4 = &objC4[4];
                flagP = &flagP[3];
                float v_8_1 =
                    x87_r7_7 * *(tmpD + 0x7c) + x87_r5_1 * *(tmpD + 0x84) + x87_r6_1 * *(tmpD + 0x80);
                long double x87_r7_10 = x87_r7_7 * *(tmpD + 0x88) + x87_r5_1 * *(tmpD + 0x90);
                long double x87_r6_2 = x87_r6_1 * *(tmpD + 0x8c);
                *dstD2 =
                    x87_r7_7 * *(tmpD + 0x70) + x87_r5_1 * *(tmpD + 0x78) + x87_r6_1 * *(tmpD + 0x74);
                dstD2[1] = v_8_1;
                dstD2[2] = x87_r7_10 + x87_r6_2;
            } while (i_1 < *(srcS1 + 4));
        }
    }

    if (a4)
        *a4 = *(srcS1 + 4);

    return flagP - *(srcS1 + 4) * 0xc;
}

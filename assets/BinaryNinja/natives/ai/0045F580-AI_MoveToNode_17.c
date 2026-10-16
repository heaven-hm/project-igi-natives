#include "AI_MoveToNode_17.h"
int32_t AI_MoveToNode_17(void* a1, double* a2, double* a3, int32_t a4)

{
    int32_t dstD = 0;

    if (a4 > 0)
    {
        double* tmpD1 = a3;
        double* objC1 = a2;
        float valA1 = *(a1 + 0xa0);

        do
        {
            float v_50_1 = *objC1 - *(a1 + 0x20);
            float v_4c_1 = objC1[1] - *(a1 + 0x28);
            float v_48_1 = objC1[2] - *(a1 + 0x30);
            float v_44_1 = *tmpD1 - *(a1 + 0x20);
            float v_40_1 = tmpD1[1] - *(a1 + 0x28);
            float v_3c_1 = tmpD1[2] - *(a1 + 0x30);
            long double x87_r7_13 = v_50_1;
            long double f1_1 = v_44_1;
            x87_r7_13 - f1_1;
            long double x87_r7_14;

            x87_r7_14 = !(*(&((x87_r7_13 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? v_44_1 : v_50_1;

            long double x87_r6_1 = v_4c_1;
            long double f2_1 = v_40_1;
            x87_r6_1 - f2_1;
            float valA4 = v_4c_1;

            if (!(*(&((x87_r6_1 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, f2_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                valA4 = v_40_1;

            long double x87_r6_2 = v_48_1;
            long double f3_1 = v_3c_1;
            x87_r6_2 - f3_1;
            float valA6 = v_48_1;

            if (!(*(&((x87_r6_2 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                valA6 = v_3c_1;

            long double x87_r6_3 = v_50_1;
            long double f4_1 = v_44_1;
            x87_r6_3 - f4_1;
            float valA8 = v_50_1;

            if (*(&((x87_r6_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f4_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                valA8 = v_44_1;

            long double x87_r6_4 = v_4c_1;
            long double f5_1 = v_40_1;
            x87_r6_4 - f5_1;
            float valA10 = v_4c_1;

            if (*(&((x87_r6_4 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f5_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                valA10 = v_40_1;

            long double x87_r6_5 = v_48_1;
            long double f6_1 = v_3c_1;
            x87_r6_5 - f6_1;
            float valA12 = v_48_1;

            if (*(&((x87_r6_5 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, f6_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                valA12 = v_3c_1;

            float v_2c_1 = *tmpD1 - *objC1;
            float v_28_1 = tmpD1[1] - objC1[1];
            float v_24_1 = tmpD1[2] - objC1[2];
            float v_38_1 = v_50_1;
            float v_38_2 = -(v_50_1);
            float v_34_2 = -(v_4c_1);
            long double x87_r6_17 = -(v_48_1);
            long double x87_r5_1 = v_34_2;
            long double x87_r4_1 = v_38_2;
            double v_58_1 = v_24_1;
            double v_60_1 = v_28_1;
            double v_68_1 = v_2c_1;
            float v_6c_1 = x87_r6_17 * v_24_1 + v_34_2 * v_28_1 + v_38_2 * v_2c_1;
            long double x87_r6_21 = x87_r4_1 * x87_r4_1 + x87_r5_1 * x87_r5_1
                + x87_r6_17 * x87_r6_17 - 1f
                / (v_68_1 * v_68_1 + v_60_1 * v_60_1 + v_58_1 * v_58_1) * v_6c_1
                * v_6c_1;
            long double x87_r5_12 = valA1 * valA1;
            x87_r5_12 - x87_r6_21;

            if (!(*(&((x87_r5_12 < x87_r6_21 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_12, x87_r6_21) ? 1 : 0) << 0xa
                | (x87_r5_12 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f7_1 = valA1;
                x87_r7_14 - f7_1;

                if (*(&((x87_r7_14 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_15 = valA4;
                    long double f8_1 = valA1;
                    x87_r7_15 - f8_1;

                    if (*(&((x87_r7_15 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_16 = valA6;
                        long double f9_1 = valA1;
                        x87_r7_16 - f9_1;

                        if (*(&((x87_r7_16 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_16, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            float v_6c_2 = -(valA1);
                            long double x87_r7_19 = valA8;
                            long double f10_1 = v_6c_2;
                            x87_r7_19 - f10_1;

                            if (!(*(&((x87_r7_19 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_19, f10_1) ? 1 : 0) << 0xa
                                | (x87_r7_19 == f10_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double x87_r7_20 = valA10;
                                long double f11_1 = v_6c_2;
                                x87_r7_20 - f11_1;

                                if (!(*(&((x87_r7_20 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_20, f11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_20 == f11_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_21 = valA12;
                                    long double f12_1 = v_6c_2;
                                    x87_r7_21 - f12_1;

                                    if (!(*(&((x87_r7_21 < f12_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_21, f12_1) ? 1 : 0) << 0xa
                                            | (x87_r7_21 == f12_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        return 1;
                                }
                            }
                        }
                    }
                }
            }

            objC1 = &objC1[3];
            tmpD1 = &tmpD1[3];
            dstD += 1;
        } while (dstD < a4);
    }

    return 0;
}

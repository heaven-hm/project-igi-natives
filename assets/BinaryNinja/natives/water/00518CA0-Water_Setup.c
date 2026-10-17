// Original IGI.EXE function: Water_Setup (VA 0x00518CA0; static CFG gate FAIL, CFG score 0.667).
#include "Water_Setup.h"
double* Water_Setup(void* a1, int32_t* a2)

{
    int32_t* srcS = a2;
    double* i_1 = nullptr;
    void* ctxB = srcS[8];
    double* tmpD = *srcS;
    double* i = srcS[1];

    if (srcS[2] > 0)
    {
        double* v_80_1 = &i[2];

        do
        {
            long double x87_r7_1 = *tmpD;
            long double f0_1 = *(a1 + 0x4be8);
            x87_r7_1 - f0_1;

            if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_2 = *tmpD;
                long double f1_1 = *(a1 + 0x4c00);
                x87_r7_2 - f1_1;

                if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_3 = tmpD[1];
                    long double f2_1 = *(a1 + 0x4bf0);
                    x87_r7_3 - f2_1;

                    if (!(*(&((x87_r7_3 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double x87_r7_4 = tmpD[1];
                        long double f3_1 = *(a1 + 0x4c08);
                        x87_r7_4 - f3_1;

                        if (*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                            | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            void* valA1 = g_a44344;
                            int32_t v_40_1 = 0;
                            int32_t v_3c_1 = 0;
                            int32_t v_38_1 = 0x3f800000;
                            long double x87_r7_7 = *(a1 + 0x4b78) * 0.5f + *(a1 + 0x4b8c);
                            int32_t v_28_1 = *(valA1 + 0xd3c);
                            int32_t v_70_1 = *tmpD;
                            double v_60_1 = x87_r7_7;
                            long double x87_r6_2 = tmpD[2] - x87_r7_7;
                            int32_t v_2c_1 = *(valA1 + 0xd64);
                            int32_t v_68_1 = tmpD[1];
                            int32_t v_6c_1 = *(tmpD + 4);
                            long double f4_1 = 0.0;
                            x87_r6_2 - f4_1;
                            int32_t v_64_1 = *(tmpD + 0xc);

                            if (*(&((x87_r6_2 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, f4_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                x87_r6_2 = -(x87_r6_2);

                            long double f5_1 = *v_80_1;
                            x87_r7_7 - f5_1;
                            int32_t objC3;

                            objC3 = !(*(&((x87_r7_7 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, f5_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                            long double f6_1 = tmpD[2];
                            x87_r7_7 - f6_1;
                            int32_t valA6;

                            valA6 = !(*(&((x87_r7_7 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, f6_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                            if (objC3 != valA6)
                            {
                                long double f7_1;

                                if (*(ctxB + 0x58))
                                {
                                    f7_1 = *(ctxB + 0x60);
                                    x87_r6_2 - f7_1;
                                }

                                if (!*(ctxB + 0x58) || *(&((x87_r6_2 < f7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, f7_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                {
                                    long double x87_r7_8 = x87_r7_7 - tmpD[2];
                                    int32_t v_20_1 = 1;
                                    int32_t v_78 = 0;
                                    long double f8_1 = 0.0;
                                    x87_r7_8 - f8_1;

                                    if (*(&((x87_r7_8 < f8_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_8, f8_1) ? 1 : 0) << 0xa
                                            | (x87_r7_8 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        x87_r7_8 = -(x87_r7_8);

                                    double v_18_1 = x87_r7_8;
                                    memcpy(ctxB, &v_78, 0x70);
                                    srcS = a2;
                                }
                            }
                        }
                    }
                }
            }

            tmpD = &tmpD[3];
            v_80_1 = &v_80_1[3];
            ctxB += 0x70;
            i = i_1 + 1;
            i_1 = i;
        } while (i < srcS[2]);
    }

    return i;
}

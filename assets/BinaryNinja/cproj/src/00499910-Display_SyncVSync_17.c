#include "gi_platform.h"
#include "00499910-Display_SyncVSync_17.h"
int32_t Display_SyncVSync_17(void* a1, double a2)

{
    double* dstD2 = (((*(int32_t*)(uintptr_t)(a1 + 0x5644)) + (*(int32_t*)(uintptr_t)(a1 + 0x5640)) * 0x18 + 0x8b) << 5) + a1;
    float v_64 = g_c28b44;
    int32_t result_1 = 0xa;
    float v_60 = g_c28b48;
    int32_t result;
    bool cond_0_1;

    do
    {
        int32_t i_1 = 0xa;
        int32_t i;

        do
        {
            int32_t srcS1 = 0x1f;

            if (*(dstD2 + 0x1c) & 0x20)
            {
                long double x87_r7_3 = *dstD2 - g_bcab08;
                int32_t v_14_1 = *(dstD2 + 0xc);
                long double x87_r6_2 = dstD2[1] - g_bcab10;
                long double x87_r5_2 = a2 - g_bcab18;
                float v_50_1 =
                    g_bcaae8 * x87_r5_2 + g_bcaae4 * x87_r6_2 + g_bcaae0 * x87_r7_3;
                long double x87_r4_6 = g_bcaaf4 * x87_r5_2;
                long double x87_r3_6 = g_bcaaf0 * x87_r6_2;
                float v_2c = v_50_1;
                float v_4c_1 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_3;
                float v_28_1 = v_4c_1;
                long double x87_r4_12 =
                    g_bcab00 * x87_r5_2 + g_bcaafc * x87_r6_2 + g_bcaaf8 * x87_r7_3;
                float v_48_1 = x87_r4_12;
                long double f2_1 = 0.0f;
                x87_r4_12 - f2_1;
                float v_58;
                float v_54;
                int32_t valA15;
                int32_t srcS4;

                if (*(&((x87_r4_12 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_12, f2_1) ? 1 : 0) << 0xa
                    | (x87_r4_12 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_9 = v_50_1;
                    long double f4_1 = 0.0f;
                    x87_r7_9 - f4_1;
                    int32_t srcS5 = 0xfffffffe;

                    if (*(&((x87_r7_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, f4_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        srcS5 = 0xfffffffb;

                    long double x87_r7_10 = v_4c_1;
                    long double f6_1 = 0.0f;
                    x87_r7_10 - f6_1;
                    srcS4 = srcS5 & 0x3f;
                    valA15 = 0xfffffffd;

                    if (*(&((x87_r7_10 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, f6_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        valA15 = 0xfffffff7;
                }
                else
                {
                    Display_CheckCapabilities_15(&v_58, &v_2c);
                    long double x87_r7_5 = v_58;
                    long double f5_1 = 0.0f;
                    x87_r7_5 - f5_1;
                    int32_t valA7;

                    valA7 = *(&((x87_r7_5 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_6 = v_54;
                    long double f8_1 = 0.0f;
                    x87_r7_6 - f8_1;
                    int32_t valA11;

                    valA11 = *(&((x87_r7_6 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_6, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_7 = v_58;
                    long double f12_1 = v_64;
                    x87_r7_7 - f12_1;
                    int32_t valA13;

                    valA13 = !(*(&((x87_r7_7 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, f12_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == f12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_8 = v_54;
                    long double f14_1 = v_60;
                    x87_r7_8 - f14_1;
                    srcS4 = ~valA7 & 0x3f & ~(valA11 * 2) & ~(valA13 << 2);

                    if (!(*(&((x87_r7_8 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == f14_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        valA15 = 0xffffffff;
                        valA15 = 0xef;
                    }
                    else
                    {
                        valA15 = 0xfffffff7;
                        valA15 = 0xe7;
                    }
                }

                int32_t v_14_2 = *(dstD2 + 0xc);
                int32_t srcS6 = srcS4 & valA15;
                long double x87_r7_12 = *dstD2 - g_bcab08;
                long double x87_r6_7 = dstD2[1] - g_bcab10;
                long double x87_r5_5 = a2 + 73728.0 - g_bcab18;
                float v_44_1 =
                    x87_r5_5 * g_bcaae8 + x87_r6_7 * g_bcaae4 + x87_r7_12 * g_bcaae0;
                long double x87_r4_18 = x87_r5_5 * g_bcaaf4;
                long double x87_r3_18 = x87_r6_7 * g_bcaaf0;
                float v_38 = v_44_1;
                float v_40_1 = x87_r4_18 + x87_r3_18 + x87_r7_12 * g_bcaaec;
                float v_34_1 = v_40_1;
                long double x87_r7_14 =
                    x87_r5_5 * g_bcab00 + x87_r6_7 * g_bcaafc + x87_r7_12 * g_bcaaf8;
                float v_3c_1 = x87_r7_14;
                long double f7_1 = 0.0f;
                x87_r7_14 - f7_1;

                if (*(&((x87_r7_14 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_19 = v_44_1;
                    long double f9_1 = 0.0f;
                    x87_r7_19 - f9_1;
                    int32_t valA30 = 0xfffffffe;

                    if (*(&((x87_r7_19 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_19, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_19 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        valA30 = 0xfffffffb;

                    long double x87_r7_20 = v_40_1;
                    long double f11_1 = 0.0f;
                    x87_r7_20 - f11_1;
                    int32_t valA29 = 0xfffffffd;

                    if (*(&((x87_r7_20 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_20, f11_1) ? 1 : 0) << 0xa
                            | (x87_r7_20 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        valA29 = 0xfffffff7;

                    srcS1 = srcS6 & valA30 & valA29;
                }
                else
                {
                    Display_CheckCapabilities_15(&v_58, &v_38);
                    long double x87_r7_15 = v_58;
                    long double f10_1 = 0.0f;
                    x87_r7_15 - f10_1;
                    int32_t valA20;

                    valA20 = *(&((x87_r7_15 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, f10_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_16 = v_54;
                    long double f13_1 = 0.0f;
                    x87_r7_16 - f13_1;
                    int32_t valA23;

                    valA23 = *(&((x87_r7_16 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, f13_1) ? 1 : 0) << 0xa
                        | (x87_r7_16 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_17 = v_58;
                    long double f15_1 = v_64;
                    x87_r7_17 - f15_1;
                    int32_t valA25;

                    valA25 = !(*(&((x87_r7_17 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == f15_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_18 = v_54;
                    long double f16_1 = v_60;
                    x87_r7_18 - f16_1;
                    int32_t srcS9 = srcS6 & ~valA20 & ~(valA23 * 2) & ~(valA25 << 2);

                    srcS1 = !(*(&((x87_r7_18 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_18, f16_1) ? 1 : 0) << 0xa
                        | (x87_r7_18 == f16_1 ? 1 : 0) << 0xe) + 1) & 1) ? srcS9 & 0xffffffef
                        : srcS9 & 0xffffffe7;
                }

                dstD2[3] = (v_3c_1 + v_48_1) * 0.5.0f;
            }

            *(dstD2 + 0x1c) = srcS1;
            dstD2 = &dstD2[4];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        dstD2 = &dstD2[0x38];
        result = result_1 - 1;
        cond_0_1 = result_1 != 1;
        result_1 = result;
    } while (cond_0_1);
    return result;
}

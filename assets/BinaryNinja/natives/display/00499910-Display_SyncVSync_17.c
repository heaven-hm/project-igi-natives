// Original IGI.EXE function: Display_SyncVSync_17 (VA 0x00499910; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_17.h"
int32_t Display_SyncVSync_17(void* context, double param_2)

{
    double* dest_2 = ((*(context + 0x5644) + *(context + 0x5640) * 0x18 + 0x8b) << 5) + context;
    float item_64 = g_c28b44;
    int32_t result_1 = 0xa;
    float item_60 = g_c28b48;
    int32_t result;
    bool flag_0_1;

    do
    {
        int32_t i_1 = 0xa;
        int32_t i;

        do
        {
            int32_t source_1 = 0x1f;

            if (*(dest_2 + 0x1c) & 0x20)
            {
                long double fpu_val_7_3 = *dest_2 - g_bcab08;
                int32_t item_14_1 = *(dest_2 + 0xc);
                long double fpu_val_6_2 = dest_2[1] - g_bcab10;
                long double fpu_val_5_2 = param_2 - g_bcab18;
                float item_50_1 =
                    g_bcaae8 * fpu_val_5_2 + g_bcaae4 * fpu_val_6_2 + g_bcaae0 * fpu_val_7_3;
                long double fpu_val_4_6 = g_bcaaf4 * fpu_val_5_2;
                long double fpu_val_3_6 = g_bcaaf0 * fpu_val_6_2;
                float item_2c = item_50_1;
                float item_4c_1 = fpu_val_4_6 + fpu_val_3_6 + g_bcaaec * fpu_val_7_3;
                float item_28_1 = item_4c_1;
                long double fpu_val_4_12 =
                    g_bcab00 * fpu_val_5_2 + g_bcaafc * fpu_val_6_2 + g_bcaaf8 * fpu_val_7_3;
                float item_48_1 = fpu_val_4_12;
                long double f2_1 = 0.0f;
                fpu_val_4_12 - f2_1;
                float item_58;
                float item_54;
                int32_t data_15;
                int32_t source_4;

                if (*(&((fpu_val_4_12 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_12, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_12 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double fpu_val_7_9 = item_50_1;
                    long double f4_1 = 0.0f;
                    fpu_val_7_9 - f4_1;
                    int32_t source_5 = 0xfffffffe;

                    if (*(&((fpu_val_7_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_9, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_9 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        source_5 = 0xfffffffb;

                    long double fpu_val_7_10 = item_4c_1;
                    long double f6_1 = 0.0f;
                    fpu_val_7_10 - f6_1;
                    source_4 = source_5 & 0x3f;
                    data_15 = 0xfffffffd;

                    if (*(&((fpu_val_7_10 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_10, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_10 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        data_15 = 0xfffffff7;
                }
                else
                {
                    Display_CheckCapabilities_15(&item_58, &item_2c);
                    long double fpu_val_7_5 = item_58;
                    long double f5_1 = 0.0f;
                    fpu_val_7_5 - f5_1;
                    int32_t data_7;

                    data_7 = *(&((fpu_val_7_5 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_6 = item_54;
                    long double f8_1 = 0.0f;
                    fpu_val_7_6 - f8_1;
                    int32_t data_11;

                    data_11 = *(&((fpu_val_7_6 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_6, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_6 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_7 = item_58;
                    long double f12_1 = item_64;
                    fpu_val_7_7 - f12_1;
                    int32_t data_13;

                    data_13 = !(*(&((fpu_val_7_7 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_7, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_7 == f12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_8 = item_54;
                    long double f14_1 = item_60;
                    fpu_val_7_8 - f14_1;
                    source_4 = ~data_7 & 0x3f & ~(data_11 * 2) & ~(data_13 << 2);

                    if (!(*(&((fpu_val_7_8 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_8, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_8 == f14_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        data_15 = 0xffffffff;
                        data_15 = 0xef;
                    }
                    else
                    {
                        data_15 = 0xfffffff7;
                        data_15 = 0xe7;
                    }
                }

                int32_t item_14_2 = *(dest_2 + 0xc);
                int32_t source_6 = source_4 & data_15;
                long double fpu_val_7_12 = *dest_2 - g_bcab08;
                long double fpu_val_6_7 = dest_2[1] - g_bcab10;
                long double fpu_val_5_5 = param_2 + 73728.0 - g_bcab18;
                float item_44_1 =
                    fpu_val_5_5 * g_bcaae8 + fpu_val_6_7 * g_bcaae4 + fpu_val_7_12 * g_bcaae0;
                long double fpu_val_4_18 = fpu_val_5_5 * g_bcaaf4;
                long double fpu_val_3_18 = fpu_val_6_7 * g_bcaaf0;
                float item_38 = item_44_1;
                float item_40_1 = fpu_val_4_18 + fpu_val_3_18 + fpu_val_7_12 * g_bcaaec;
                float item_34_1 = item_40_1;
                long double fpu_val_7_14 =
                    fpu_val_5_5 * g_bcab00 + fpu_val_6_7 * g_bcaafc + fpu_val_7_12 * g_bcaaf8;
                float item_3c_1 = fpu_val_7_14;
                long double f7_1 = 0.0f;
                fpu_val_7_14 - f7_1;

                if (*(&((fpu_val_7_14 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_14, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double fpu_val_7_19 = item_44_1;
                    long double f9_1 = 0.0f;
                    fpu_val_7_19 - f9_1;
                    int32_t data_30 = 0xfffffffe;

                    if (*(&((fpu_val_7_19 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_19, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_19 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        data_30 = 0xfffffffb;

                    long double fpu_val_7_20 = item_40_1;
                    long double f11_1 = 0.0f;
                    fpu_val_7_20 - f11_1;
                    int32_t data_29 = 0xfffffffd;

                    if (*(&((fpu_val_7_20 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_20, f11_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_20 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        data_29 = 0xfffffff7;

                    source_1 = source_6 & data_30 & data_29;
                }
                else
                {
                    Display_CheckCapabilities_15(&item_58, &item_38);
                    long double fpu_val_7_15 = item_58;
                    long double f10_1 = 0.0f;
                    fpu_val_7_15 - f10_1;
                    int32_t data_20;

                    data_20 = *(&((fpu_val_7_15 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_15, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_15 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_16 = item_54;
                    long double f13_1 = 0.0f;
                    fpu_val_7_16 - f13_1;
                    int32_t data_23;

                    data_23 = *(&((fpu_val_7_16 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_16, f13_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_16 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double fpu_val_7_17 = item_58;
                    long double f15_1 = item_64;
                    fpu_val_7_17 - f15_1;
                    int32_t data_25;

                    data_25 = !(*(&((fpu_val_7_17 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_17, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_17 == f15_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_18 = item_54;
                    long double f16_1 = item_60;
                    fpu_val_7_18 - f16_1;
                    int32_t source_9 = source_6 & ~data_20 & ~(data_23 * 2) & ~(data_25 << 2);

                    source_1 = !(*(&((fpu_val_7_18 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_18, f16_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_18 == f16_1 ? 1 : 0) << 0xe) + 1) & 1) ? source_9 & 0xffffffef
                        : source_9 & 0xffffffe7;
                }

                dest_2[3] = (item_3c_1 + item_48_1) * 0.5f;
            }

            *(dest_2 + 0x1c) = source_1;
            dest_2 = &dest_2[4];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        dest_2 = &dest_2[0x38];
        result = result_1 - 1;
        flag_0_1 = result_1 != 1;
        result_1 = result;
    } while (flag_0_1);
    return result;
}

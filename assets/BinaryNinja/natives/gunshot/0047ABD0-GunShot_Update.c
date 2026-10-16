#include "GunShot_Update.h"
void* GunShot_Update(int32_t a1)

{
    float* dstD = a1;
    void* flagP = *dstD[0x1b];

    if (flagP)
    {
        void* valA1 = *(flagP + 0x12c);

        if (valA1 && *(valA1 + 0x20))
        {
            int32_t* i = nullptr;
            float v_c_1 = (*(valA1 + 0x14) - *(valA1 + 8)) * 0.00392156886f;
            float v_8_1 = (*(valA1 + 0x18) - *(valA1 + 0xc)) * 0.00392156886f;
            float v_4_1 = (*(valA1 + 0x1c) - *(valA1 + 0x10)) * 0.00392156886f;

            if (dstD[0x27] > 0)
            {
                int32_t* srcS2 = &dstD[0x240];

                do
                {
                    double* objC6 = *srcS2;
                    long double x87_r7_8 = objC6[7] / objC6[8];
                    a1 = *(objC6 + 0x3c) / objC6[8];
                    float v_18 = *(*(flagP + 0x12c) + 8) * 0.00392156886f + x87_r7_8 * v_c_1;
                    float v_14_1 = *(*(flagP + 0x12c) + 0xc) * 0.00392156886f + x87_r7_8 * v_8_1;
                    float v_10_1 = *(*(flagP + 0x12c) + 0x10) * 0.00392156886f + x87_r7_8 * v_4_1;
                    long double x87_r7_11 = 0f;
                    long double f1_1 = v_18;
                    x87_r7_11 - f1_1;

                    if (*(&((x87_r7_11 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_11, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_11 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_12 = 1f;
                        long double f2_1 = v_18;
                        x87_r7_12 - f2_1;

                        if (*(&((x87_r7_12 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_12, f2_1) ? 1 : 0) << 0xa
                                | (x87_r7_12 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_18 = 1f;
                    }
                    else
                        v_18 = 0f;

                    long double x87_r7_13 = 0f;
                    long double f3_1 = v_14_1;
                    x87_r7_13 - f3_1;

                    if (*(&((x87_r7_13 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_14 = 1f;
                        long double f4_1 = v_14_1;
                        x87_r7_14 - f4_1;

                        if (*(&((x87_r7_14 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_14, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_14 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_14_1 = 1f;
                    }
                    else
                        v_14_1 = 0f;

                    long double x87_r7_15 = 0f;
                    long double f5_1 = v_10_1;
                    x87_r7_15 - f5_1;

                    if (*(&((x87_r7_15 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_16 = 1f;
                        long double f6_1 = v_10_1;
                        x87_r7_16 - f6_1;

                        if (*(&((x87_r7_16 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_16, f6_1) ? 1 : 0) << 0xa
                                | (x87_r7_16 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_10_1 = 1f;
                    }
                    else
                        v_10_1 = 0f;

                    float v_24 = *(*(flagP + 0x12c) + 8) * 0.00392156886f + a1 * v_c_1;
                    float v_20_1 = *(*(flagP + 0x12c) + 0xc) * 0.00392156886f + a1 * v_8_1;
                    float v_1c_1 = *(*(flagP + 0x12c) + 0x10) * 0.00392156886f + a1 * v_4_1;
                    long double x87_r7_26 = 0f;
                    long double f7_1 = v_24;
                    x87_r7_26 - f7_1;

                    if (*(&((x87_r7_26 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_26, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_26 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_27 = 1f;
                        long double f8_1 = v_24;
                        x87_r7_27 - f8_1;

                        if (*(&((x87_r7_27 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_27, f8_1) ? 1 : 0) << 0xa
                                | (x87_r7_27 == f8_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_24 = 1f;
                    }
                    else
                        v_24 = 0f;

                    long double x87_r7_28 = 0f;
                    long double f9_1 = v_20_1;
                    x87_r7_28 - f9_1;

                    if (*(&((x87_r7_28 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_28, f9_1) ? 1 : 0) << 0xa
                        | (x87_r7_28 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_29 = 1f;
                        long double f10_1 = v_20_1;
                        x87_r7_29 - f10_1;

                        if (*(&((x87_r7_29 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_29, f10_1) ? 1 : 0) << 0xa
                                | (x87_r7_29 == f10_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_20_1 = 1f;
                    }
                    else
                        v_20_1 = 0f;

                    long double x87_r7_30 = 0f;
                    long double f11_1 = v_1c_1;
                    x87_r7_30 - f11_1;

                    if (*(&((x87_r7_30 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_31 = 1f;
                        long double f12_1 = v_1c_1;
                        x87_r7_31 - f12_1;

                        if (*(&((x87_r7_31 < f12_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_31, f12_1) ? 1 : 0) << 0xa
                                | (x87_r7_31 == f12_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_1c_1 = 1f;
                    }
                    else
                        v_1c_1 = 0f;

                    float v_40_1 = objC6[7] / objC6[8];
                    long double x87_r7_34 = 0f;
                    long double f13_1 = v_40_1;
                    x87_r7_34 - f13_1;

                    if (*(&((x87_r7_34 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_34, f13_1) ? 1 : 0) << 0xa
                        | (x87_r7_34 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_35 = 1f;
                        long double f14_1 = v_40_1;
                        x87_r7_35 - f14_1;

                        if (*(&((x87_r7_35 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_35, f14_1) ? 1 : 0) << 0xa
                                | (x87_r7_35 == f14_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_40_1 = 1f;
                    }
                    else
                        v_40_1 = 0f;

                    a1 = *(objC6 + 0x3c) / objC6[8];
                    long double x87_r7_38 = 0f;
                    long double f15_1 = a1;
                    x87_r7_38 - f15_1;

                    if (*(&((x87_r7_38 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_38, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_38 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_39 = 1f;
                        long double f16_1 = a1;
                        x87_r7_39 - f16_1;

                        if (*(&((x87_r7_39 < f16_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_39, f16_1) ? 1 : 0) << 0xa
                                | (x87_r7_39 == f16_1 ? 1 : 0) << 0xe) + 1) & 1)
                            a1 = 0x3f800000;
                    }
                    else
                        a1 = 0;

                    float v_3c;
                    float v_34;
                    Display_RestoreDevice_15(&v_34, &v_3c, objC6);
                    float v_38;
                    float v_2c;
                    Display_RestoreDevice_15(&v_2c, &v_38, *srcS2 + 0x18);
                    long double x87_r7_40 = v_38;
                    long double f17_1 = 0f;
                    x87_r7_40 - f17_1;
                    int32_t objC7;

                    objC7 = !(*(&((x87_r7_40 < f17_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, f17_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == f17_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_41 = v_3c;
                    long double f18_1 = 0f;
                    x87_r7_41 - f18_1;
                    int32_t valA12;

                    valA12 = !(*(&((x87_r7_41 < f18_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_41, f18_1) ? 1 : 0) << 0xa
                        | (x87_r7_41 == f18_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    if (objC7 == valA12)
                    {
                        long double x87_r7_43 = 0f;
                        long double f19_1 = v_38;
                        x87_r7_43 - f19_1;

                        if (*(&((x87_r7_43 < f19_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_43, f19_1) ? 1 : 0) << 0xa
                            | (x87_r7_43 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double x87_r7_44 = 2048000f;
                            long double f20_1 = v_38;
                            x87_r7_44 - f20_1;

                            if (*(&((x87_r7_44 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_44, f20_1) ? 1 : 0) << 0xa
                                    | (x87_r7_44 == f20_1 ? 1 : 0) << 0xe) + 1) & 1)
                                v_38 = 2048000f;
                        }
                        else
                            v_38 = 0f;

                        long double x87_r7_45 = 0f;
                        long double f22_1 = v_3c;
                        x87_r7_45 - f22_1;

                        if (*(&((x87_r7_45 < f22_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_45, f22_1) ? 1 : 0) << 0xa
                            | (x87_r7_45 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double x87_r7_46 = 2048000f;
                            long double f23_1 = v_3c;
                            x87_r7_46 - f23_1;

                            if (*(&((x87_r7_46 < f23_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_46, f23_1) ? 1 : 0) << 0xa
                                    | (x87_r7_46 == f23_1 ? 1 : 0) << 0xe) + 1) & 1)
                                v_3c = 2048000f;
                        }
                        else
                            v_3c = 0f;

                        long double x87_r7_51 =
                            (1f - v_3c * 4.88281273e-07f * 0.100000001f) * v_40_1;
                        float v_40_2 = x87_r7_51;
                        a1 = (1f - v_38 * 4.88281273e-07f * 0.100000001f) * a1;
                        long double f24_1 = 0.200000003f;
                        x87_r7_51 - f24_1;

                        if (*(&((x87_r7_51 < f24_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_51, f24_1) ? 1 : 0) << 0xa
                                | (x87_r7_51 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            v_40_2 = 0.200000003f;

                        long double x87_r7_52 = a1;
                        long double f25_1 = 0.200000003f;
                        x87_r7_52 - f25_1;

                        if (*(&((x87_r7_52 < f25_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_52, f25_1) ? 1 : 0) << 0xa
                                | (x87_r7_52 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            a1 = 0x3e4ccccd;

                        int32_t valA19 = *srcS2;
                        SoundSys_StopSoundSample(valA19, valA19 + 0x18, &v_18, v_40_2, &v_24, a1);
                    }
                    else if (!*(*srcS2 + 0xc0))
                    {
                        long double x87_r7_42 = v_3c;
                        long double f21_1 = 0f;
                        x87_r7_42 - f21_1;
                        int32_t* valA15;

                        valA15 = *(&((x87_r7_42 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_42, f21_1) ? 1 : 0) << 0xa
                            | (x87_r7_42 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? nullptr : 1;

                        int32_t v_70_1 = a1;
                        float v_74_1 = v_40_1;
                        Weapon_UpdateRecoil_7(dstD, i, v_18, v_14_1, v_10_1, v_24, v_20_1, v_1c_1,
                            valA15);
                    }

                    void* tmpD11 = *srcS2;
                    i += 1;
                    srcS2 = &srcS2[1];
                    *(tmpD11 + 0x34) = 0;
                } while (i < dstD[0x27]);
            }
        }
    }

    void* result = dstD[0x245];

    if (*(result + 0x9c) <= 0)
        return result;

    Display_ClearSurfaces_18(result, &dstD[0x146]);
    void* valA21 = dstD[0x245];
    int32_t tmpD12 = 0;
    tmpD12 = *(valA21 + 0x1c);
    return (*((tmpD12 << 2) + &g_a982e0))(valA21, 0);
}

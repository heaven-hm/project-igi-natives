#include "gi_platform.h"
#include "004DA300-Hazinglayers_Process.h"
void** Hazinglayers_Process(int32_t* a1, int32_t* a2, double* a3, double* a4, void** a5, int32_t a6)

{
    double* objC = a3;
    float v_14 = *a4 - *objC;
    float v_10 = a4[1] - objC[1];
    void** result = nullptr;
    float v_c = a4[2] - objC[2];
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    *a2 = 0;
    void** result_1 = nullptr;

    if (a6 > 0)
    {
        void** v_28_1 = a5;

        while (true)
        {
            float v_30_1 = 1.0f;
            void* srcS1 = *v_28_1;
            float v_2c_1 = 1.0f / ((*(srcS1 + 0x78) - *(srcS1 + 0x70)) * 0.300000012.0f);
            long double x87_r7_10 = v_c;
            long double f1_1 = 0.0f;
            x87_r7_10 - f1_1;

            if (!(*(&((x87_r7_10 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_11 = a4[2];
                long double f3_1 = *(srcS1 + 0x78);
                x87_r7_11 - f3_1;

                if (!(*(&((x87_r7_11 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    v_30_1 = (*(srcS1 + 0x78) - objC[2]) * v_2c_1;
                    long double x87_r7_15 = 0.0f;
                    long double f6_1 = v_30_1;
                    x87_r7_15 - f6_1;

                    if (*(&((x87_r7_15 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_16 = 1.0f;
                        long double f9_1 = v_30_1;
                        x87_r7_16 - f9_1;

                        if (*(&((x87_r7_16 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_16, f9_1) ? 1 : 0) << 0xa
                                | (x87_r7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_30_1 = 1.0f;
                    }
                    else
                        v_30_1 = 0.0f;
                }
            }

            long double x87_r7_17 = v_c;
            long double f2_1 = 0.0f;
            x87_r7_17 - f2_1;

            if (*(&((x87_r7_17 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_18 = a4[2];
                long double f5_1 = *(srcS1 + 0x70);
                x87_r7_18 - f5_1;

                if (*(&((x87_r7_18 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    v_30_1 = (objC[2] - *(srcS1 + 0x70)) * v_2c_1;
                    long double x87_r7_22 = 0.0f;
                    long double f8_1 = v_30_1;
                    x87_r7_22 - f8_1;

                    if (*(&((x87_r7_22 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_22, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_22 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_23 = 1.0f;
                        long double f12_1 = v_30_1;
                        x87_r7_23 - f12_1;

                        if (*(&((x87_r7_23 < f12_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_23, f12_1) ? 1 : 0) << 0xa
                                | (x87_r7_23 == f12_1 ? 1 : 0) << 0xe) + 1) & 1)
                            v_30_1 = 1.0f;
                    }
                    else
                        v_30_1 = 0.0f;
                }
            }

            long double fp0_1 = Sys_DispatchOpcode_10(&v_14);
            float v_2c_2 = fp0_1;
            long double f4_1 = 0.0f;
            fp0_1 - f4_1;

            if (!(*(&((fp0_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f4_1) ? 1 : 0) << 0xa
                | (fp0_1 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_25 = a3[2];
                long double f7_1 = *(srcS1 + 0x70);
                x87_r7_25 - f7_1;
                long double x87_r7_26;
                long double f11_1;

                if (*(&((x87_r7_25 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_25, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_25 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    x87_r7_26 = a4[2];
                    f11_1 = *(srcS1 + 0x70);
                    x87_r7_26 - f11_1;
                }

                if (!(*(&((x87_r7_25 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_25, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_25 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&(
                    (x87_r7_26 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, f11_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_27 = a3[2];
                    long double f10_1 = *(srcS1 + 0x78);
                    x87_r7_27 - f10_1;
                    long double x87_r7_28;
                    long double f14_1;

                    if (!(*(&((x87_r7_27 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_27, f10_1) ? 1 : 0) << 0xa
                        | (x87_r7_27 == f10_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        x87_r7_28 = a4[2];
                        f14_1 = *(srcS1 + 0x78);
                        x87_r7_28 - f14_1;
                    }

                    if (*(&((x87_r7_27 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_27, f10_1) ? 1 : 0) << 0xa
                        | (x87_r7_27 == f10_1 ? 1 : 0) << 0xe) + 1) & 1 || *(&(
                        (x87_r7_28 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_28, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_28 == f14_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        long double x87_r7_29 = a3[2];
                        long double f13_1 = *(srcS1 + 0x70);
                        x87_r7_29 - f13_1;
                        long double x87_r7_30;
                        long double f16_1;

                        if (*(&((x87_r7_29 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, f13_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            x87_r7_30 = a4[2];
                            f16_1 = *(srcS1 + 0x78);
                            x87_r7_30 - f16_1;
                        }

                        long double x87_r7_31;
                        long double x87_r7_32;
                        long double f15_1;
                        long double f18_1;

                        if (!(*(&((x87_r7_29 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, f13_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41) || *(&(
                            (x87_r7_30 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_30, f16_1) ? 1 : 0) << 0xa
                            | (x87_r7_30 == f16_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            x87_r7_31 = a3[2];
                            f15_1 = *(srcS1 + 0x78);
                            x87_r7_31 - f15_1;

                            if (!(*(&((x87_r7_31 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_31, f15_1) ? 1 : 0) << 0xa
                                | (x87_r7_31 == f15_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                x87_r7_32 = a4[2];
                                f18_1 = *(srcS1 + 0x70);
                                x87_r7_32 - f18_1;
                            }
                        }

                        float v_34;
                        long double x87_r6_8;
                        long double x87_r7_37;

                        if ((!(*(&((x87_r7_29 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, f13_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41) || *(&(
                            (x87_r7_30 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_30, f16_1) ? 1 : 0) << 0xa
                            | (x87_r7_30 == f16_1 ? 1 : 0) << 0xe) + 1) & 1) && (*(&(
                            (x87_r7_31 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_31, f15_1) ? 1 : 0) << 0xa
                            | (x87_r7_31 == f15_1 ? 1 : 0) << 0xe) + 1) & 1 || !(*(&(
                            (x87_r7_32 < f18_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_32, f18_1) ? 1 : 0) << 0xa
                            | (x87_r7_32 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x41)))
                        {
                            long double x87_r7_38 = a3[2];
                            long double f17_1 = *(srcS1 + 0x70);
                            x87_r7_38 - f17_1;
                            long double x87_r7_42;

                            if (*(&((x87_r7_38 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_38, f17_1) ? 1 : 0) << 0xa
                                | (x87_r7_38 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
    label_4da575: ;
                                long double x87_r7_43 = a3[2];
                                long double f20_1 = *(srcS1 + 0x70);
                                x87_r7_43 - f20_1;
                                long double x87_r6_10;
                                int16_t valA2;

                                if (*(&((x87_r7_43 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_43, f20_1) ? 1 : 0) << 0xa
                                    | (x87_r7_43 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                {
    label_4da62f: ;
                                    long double x87_r7_60 = a4[2];
                                    long double f23_1 = *(srcS1 + 0x70);
                                    x87_r7_60 - f23_1;

                                    if (*(&((x87_r7_60 < f23_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_60, f23_1) ? 1 : 0) << 0xa
                                        | (x87_r7_60 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
    label_4da780: ;
                                        Error_Show("Fog layer logic error");

                                        while (true)
                                            /* nop */
                                    }
                                    else
                                    {
                                        long double x87_r7_61 = a4[2];
                                        long double f27_1 = *(srcS1 + 0x78);
                                        x87_r7_61 - f27_1;

                                        if (!(*(&((x87_r7_61 < f27_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_61, f27_1) ? 1 : 0) << 0xa
                                                | (x87_r7_61 == f27_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            goto label_4da780;

                                        long double x87_r7_62 = a3[2];
                                        long double f30_1 = *(srcS1 + 0x70);
                                        x87_r7_62 - f30_1;
                                        long double x87_r7_63;
                                        long double f34_1;

                                        if (!(*(&((x87_r7_62 < f30_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_62, f30_1) ? 1 : 0) << 0xa
                                            | (x87_r7_62 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        {
                                            x87_r7_63 = a3[2];
                                            f34_1 = *(srcS1 + 0x78);
                                            x87_r7_63 - f34_1;
                                        }

                                        if (!(*(&((x87_r7_62 < f30_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_62, f30_1) ? 1 : 0) << 0xa
                                                | (x87_r7_62 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41) &&
                                                *(&((x87_r7_63 < f34_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_63, f34_1) ? 1 : 0) << 0xa
                                                | (x87_r7_63 == f34_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4da780;

                                        long double x87_r7_64 = a3[2];
                                        long double f33_1 = *(srcS1 + 0x70);
                                        x87_r7_64 - f33_1;
                                        long double x87_r7_65;

                                        if (!(*(&((x87_r7_64 < f33_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_64, f33_1) ? 1 : 0) << 0xa
                                                | (x87_r7_64 == f33_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                            x87_r7_65 = *(srcS1 + 0x78);
                                        else
                                            x87_r7_65 = *(srcS1 + 0x70);

                                        long double x87_r7_66 = x87_r7_65 - a4[2];
                                        long double f38_1 = 0.0;
                                        x87_r7_66 - f38_1;
                                        long double x87_r7_67 = a3[2];
                                        long double f39_1 = *(srcS1 + 0x70);
                                        x87_r7_67 - f39_1;
                                        valA2 = (x87_r7_67 < f39_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_67, f39_1) ? 1 : 0) << 0xa
                                            | (x87_r7_67 == f39_1 ? 1 : 0) << 0xe;
                                        long double x87_r7_70;

                                        if (!(*(&((x87_r7_66 < f38_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_66, f38_1) ? 1 : 0) << 0xa
                                            | (x87_r7_66 == f38_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 1))
                                        {
                                            long double x87_r7_73;

                                            if (!(*(&valA2 + 1) & 0x41))
                                                x87_r7_73 = *(srcS1 + 0x78);
                                            else
                                                x87_r7_73 = *(srcS1 + 0x70);

                                            x87_r7_70 = x87_r7_73 - a4[2];
                                        }
                                        else if (!(*(&valA2 + 1) & 0x41))
                                            x87_r7_70 = -((*(srcS1 + 0x78) - a4[2]));
                                        else
                                            x87_r7_70 = -((*(srcS1 + 0x70) - a4[2]));

                                        v_c - 0.0f;
                                        x87_r6_10 = v_2c_2 * x87_r7_70;
                                    }
                                }
                                else
                                {
                                    long double x87_r7_44 = a3[2];
                                    long double f24_1 = *(srcS1 + 0x78);
                                    x87_r7_44 - f24_1;

                                    if (!(*(&((x87_r7_44 < f24_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_44, f24_1) ? 1 : 0) << 0xa
                                            | (x87_r7_44 == f24_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        goto label_4da62f;

                                    long double x87_r7_45 = a4[2];
                                    long double f28_1 = *(srcS1 + 0x70);
                                    x87_r7_45 - f28_1;
                                    long double x87_r7_46;
                                    long double f32_1;

                                    if (!(*(&((x87_r7_45 < f28_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_45, f28_1) ? 1 : 0) << 0xa
                                        | (x87_r7_45 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                    {
                                        x87_r7_46 = a4[2];
                                        f32_1 = *(srcS1 + 0x78);
                                        x87_r7_46 - f32_1;
                                    }

                                    if (!(*(&((x87_r7_45 < f28_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_45, f28_1) ? 1 : 0) << 0xa
                                            | (x87_r7_45 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41) && *(&(
                                            (x87_r7_46 < f32_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_46, f32_1) ? 1 : 0) << 0xa
                                            | (x87_r7_46 == f32_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4da62f;

                                    long double x87_r7_47 = a4[2];
                                    long double f31_1 = *(srcS1 + 0x70);
                                    x87_r7_47 - f31_1;
                                    long double x87_r7_48;

                                    if (!(*(&((x87_r7_47 < f31_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_47, f31_1) ? 1 : 0) << 0xa
                                            | (x87_r7_47 == f31_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        x87_r7_48 = *(srcS1 + 0x78);
                                    else
                                        x87_r7_48 = *(srcS1 + 0x70);

                                    long double x87_r7_49 = x87_r7_48 - a3[2];
                                    long double f36_1 = 0.0;
                                    x87_r7_49 - f36_1;
                                    long double x87_r7_50 = a4[2];
                                    long double f37_1 = *(srcS1 + 0x70);
                                    x87_r7_50 - f37_1;
                                    valA2 = (x87_r7_50 < f37_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_50, f37_1) ? 1 : 0) << 0xa
                                        | (x87_r7_50 == f37_1 ? 1 : 0) << 0xe;
                                    long double x87_r7_53;

                                    if (!(*(&((x87_r7_49 < f36_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_49, f36_1) ? 1 : 0) << 0xa
                                        | (x87_r7_49 == f36_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        long double x87_r7_56;

                                        if (!(*(&valA2 + 1) & 0x41))
                                            x87_r7_56 = *(srcS1 + 0x78);
                                        else
                                            x87_r7_56 = *(srcS1 + 0x70);

                                        x87_r7_53 = x87_r7_56 - a3[2];
                                    }
                                    else if (!(*(&valA2 + 1) & 0x41))
                                        x87_r7_53 = -((*(srcS1 + 0x78) - a3[2]));
                                    else
                                        x87_r7_53 = -((*(srcS1 + 0x70) - a3[2]));

                                    v_c - 0.0f;
                                    x87_r6_10 = v_2c_2 * x87_r7_53;
                                }
                                x87_r7_42 = x87_r6_10 / x87_r6_10;
                            }
                            else
                            {
                                long double x87_r7_39 = a4[2];
                                long double f21_1 = *(srcS1 + 0x78);
                                x87_r7_39 - f21_1;

                                if (!(*(&((x87_r7_39 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_39, f21_1) ? 1 : 0) << 0xa
                                        | (x87_r7_39 == f21_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    goto label_4da575;

                                long double x87_r7_40 = a3[2];
                                long double f25_1 = *(srcS1 + 0x78);
                                x87_r7_40 - f25_1;

                                if (!(*(&((x87_r7_40 < f25_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_40, f25_1) ? 1 : 0) << 0xa
                                        | (x87_r7_40 == f25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    goto label_4da575;

                                long double x87_r7_41 = a4[2];
                                long double f29_1 = *(srcS1 + 0x70);
                                x87_r7_41 - f29_1;

                                if (*(&((x87_r7_41 < f29_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_41, f29_1) ? 1 : 0) << 0xa
                                        | (x87_r7_41 == f29_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    goto label_4da575;

                                x87_r7_42 = v_2c_2;
                            }

                            x87_r7_37 = x87_r7_42 * *(srcS1 + 0x6c);
                            *a2 = x87_r7_37 * v_30_1 + *a2;
                            long double f35_1 = 0.0f;
                            x87_r7_37 - f35_1;

                            if (!(*(&((x87_r7_37 < f35_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, f35_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == f35_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            {
                                x87_r6_8 = x87_r7_37 + v_34;
                                goto label_4da71f;
                            }
                        }
                        else
                        {
                            long double x87_r7_34 = *(srcS1 + 0x78) - *(srcS1 + 0x70);
                            long double f19_1 = 0.0;
                            x87_r7_34 - f19_1;

                            if (*(&((x87_r7_34 < f19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_34, f19_1) ? 1 : 0) << 0xa
                                    | (x87_r7_34 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                x87_r7_34 = -(x87_r7_34);

                            long double x87_r6_1 = v_c;
                            long double f22_1 = 0.0f;
                            x87_r6_1 - f22_1;
                            long double x87_r6_2 = v_c;

                            if (*(&((x87_r6_1 < f22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_1, f22_1) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == f22_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                x87_r6_2 = -(x87_r6_2);

                            x87_r7_37 = x87_r7_34 * v_2c_2 / x87_r6_2 * *(srcS1 + 0x6c);
                            *a2 = x87_r7_37 * v_30_1 + *a2;
                            long double f26_1 = 0.0f;
                            x87_r7_37 - f26_1;

                            if (!(*(&((x87_r7_37 < f26_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, f26_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == f26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            {
                                x87_r6_8 = v_34 + x87_r7_37;
    label_4da71f: ;
                                *a1 = (x87_r7_37 * *(srcS1 + 0x80) + v_34 * *a1) / x87_r6_8;
                                a1[1] =
                                    (x87_r7_37 * *(srcS1 + 0x84) + v_34 * a1[1]) / x87_r6_8;
                                a1[2] =
                                    (x87_r7_37 * *(srcS1 + 0x88) + v_34 * a1[2]) / x87_r6_8;
                                v_34 = x87_r6_8;
                            }
                        }
                    }
                }
            }

            result = result_1 + 1;
            result_1 = result;
            v_28_1 = &v_28_1[1];

            if (result >= a6)
                break;

            objC = a3;
        }
    }

    return result;
}

// Original IGI.EXE function: Hazinglayers_Process (VA 0x004DA300; static CFG gate PASS, CFG score 1.000).
#include "Hazinglayers_Process.h"
void** Hazinglayers_Process(int32_t* context, int32_t* param_2, double* param_3, double* param_4, void** param_5, int32_t param_6)

{
    double* entity_val = param_3;
    float item_14 = *param_4 - *entity_val;
    float item_10 = param_4[1] - entity_val[1];
    void** result = nullptr;
    float item_c = param_4[2] - entity_val[2];
    *context = 0;
    context[1] = 0;
    context[2] = 0;
    *param_2 = 0;
    void** result_1 = nullptr;

    if (param_6 > 0)
    {
        void** item_28_1 = param_5;

        while (true)
        {
            float item_30_1 = 1.0f;
            void* source_1 = *item_28_1;
            float item_2c_1 = 1.0f / ((*(source_1 + 0x78) - *(source_1 + 0x70)) * 0.300000012f);
            long double fpu_val_7_10 = item_c;
            long double f1_1 = 0.0f;
            fpu_val_7_10 - f1_1;

            if (!(*(&((fpu_val_7_10 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_10, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_10 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_11 = param_4[2];
                long double f3_1 = *(source_1 + 0x78);
                fpu_val_7_11 - f3_1;

                if (!(*(&((fpu_val_7_11 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_11, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_11 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    item_30_1 = (*(source_1 + 0x78) - entity_val[2]) * item_2c_1;
                    long double fpu_val_7_15 = 0.0f;
                    long double f6_1 = item_30_1;
                    fpu_val_7_15 - f6_1;

                    if (*(&((fpu_val_7_15 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_15, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_15 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_16 = 1.0f;
                        long double f9_1 = item_30_1;
                        fpu_val_7_16 - f9_1;

                        if (*(&((fpu_val_7_16 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_16, f9_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_30_1 = 1.0f;
                    }
                    else
                        item_30_1 = 0.0f;
                }
            }

            long double fpu_val_7_17 = item_c;
            long double f2_1 = 0.0f;
            fpu_val_7_17 - f2_1;

            if (*(&((fpu_val_7_17 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_17, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_17 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double fpu_val_7_18 = param_4[2];
                long double f5_1 = *(source_1 + 0x70);
                fpu_val_7_18 - f5_1;

                if (*(&((fpu_val_7_18 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_18, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_18 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    item_30_1 = (entity_val[2] - *(source_1 + 0x70)) * item_2c_1;
                    long double fpu_val_7_22 = 0.0f;
                    long double f8_1 = item_30_1;
                    fpu_val_7_22 - f8_1;

                    if (*(&((fpu_val_7_22 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_22, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_22 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_23 = 1.0f;
                        long double f12_1 = item_30_1;
                        fpu_val_7_23 - f12_1;

                        if (*(&((fpu_val_7_23 < f12_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_23, f12_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_23 == f12_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_30_1 = 1.0f;
                    }
                    else
                        item_30_1 = 0.0f;
                }
            }

            long double fp0_1 = Sys_DispatchOpcode_10(&item_14);
            float item_2c_2 = fp0_1;
            long double f4_1 = 0.0f;
            fp0_1 - f4_1;

            if (!(*(&((fp0_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f4_1) ? 1 : 0) << 0xa
                | (fp0_1 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_25 = param_3[2];
                long double f7_1 = *(source_1 + 0x70);
                fpu_val_7_25 - f7_1;
                long double fpu_val_7_26;
                long double f11_1;

                if (*(&((fpu_val_7_25 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_25, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_25 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    fpu_val_7_26 = param_4[2];
                    f11_1 = *(source_1 + 0x70);
                    fpu_val_7_26 - f11_1;
                }

                if (!(*(&((fpu_val_7_25 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_25, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_25 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&(
                    (fpu_val_7_26 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_26, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_26 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double fpu_val_7_27 = param_3[2];
                    long double f10_1 = *(source_1 + 0x78);
                    fpu_val_7_27 - f10_1;
                    long double fpu_val_7_28;
                    long double f14_1;

                    if (!(*(&((fpu_val_7_27 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_27, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_27 == f10_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        fpu_val_7_28 = param_4[2];
                        f14_1 = *(source_1 + 0x78);
                        fpu_val_7_28 - f14_1;
                    }

                    if (*(&((fpu_val_7_27 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_27, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_27 == f10_1 ? 1 : 0) << 0xe) + 1) & 1 || *(&(
                        (fpu_val_7_28 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_28, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_28 == f14_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        long double fpu_val_7_29 = param_3[2];
                        long double f13_1 = *(source_1 + 0x70);
                        fpu_val_7_29 - f13_1;
                        long double fpu_val_7_30;
                        long double f16_1;

                        if (*(&((fpu_val_7_29 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_29, f13_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_29 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            fpu_val_7_30 = param_4[2];
                            f16_1 = *(source_1 + 0x78);
                            fpu_val_7_30 - f16_1;
                        }

                        long double fpu_val_7_31;
                        long double fpu_val_7_32;
                        long double f15_1;
                        long double f18_1;

                        if (!(*(&((fpu_val_7_29 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_29, f13_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_29 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41) || *(&(
                            (fpu_val_7_30 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_30, f16_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_30 == f16_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            fpu_val_7_31 = param_3[2];
                            f15_1 = *(source_1 + 0x78);
                            fpu_val_7_31 - f15_1;

                            if (!(*(&((fpu_val_7_31 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_31, f15_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_31 == f15_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                fpu_val_7_32 = param_4[2];
                                f18_1 = *(source_1 + 0x70);
                                fpu_val_7_32 - f18_1;
                            }
                        }

                        float item_34;
                        long double fpu_val_6_8;
                        long double fpu_val_7_37;

                        if ((!(*(&((fpu_val_7_29 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_29, f13_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_29 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41) || *(&(
                            (fpu_val_7_30 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_30, f16_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_30 == f16_1 ? 1 : 0) << 0xe) + 1) & 1) && (*(&(
                            (fpu_val_7_31 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_31, f15_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_31 == f15_1 ? 1 : 0) << 0xe) + 1) & 1 || !(*(&(
                            (fpu_val_7_32 < f18_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_32, f18_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_32 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x41)))
                        {
                            long double fpu_val_7_38 = param_3[2];
                            long double f17_1 = *(source_1 + 0x70);
                            fpu_val_7_38 - f17_1;
                            long double fpu_val_7_42;

                            if (*(&((fpu_val_7_38 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_38, f17_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_38 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                            label_4da575:
                                long double fpu_val_7_43 = param_3[2];
                                long double f20_1 = *(source_1 + 0x70);
                                fpu_val_7_43 - f20_1;
                                long double fpu_val_6_10;
                                int16_t data_2;

                                if (*(&((fpu_val_7_43 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_43, f20_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_43 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                {
                                label_4da62f:
                                    long double fpu_val_7_60 = param_4[2];
                                    long double f23_1 = *(source_1 + 0x70);
                                    fpu_val_7_60 - f23_1;

                                    if (*(&((fpu_val_7_60 < f23_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_60, f23_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_60 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                    label_4da780:
                                        Error_Show("Fog layer logic error");

                                        while (true)
                                            /* nop */
                                    }
                                    else
                                    {
                                        long double fpu_val_7_61 = param_4[2];
                                        long double f27_1 = *(source_1 + 0x78);
                                        fpu_val_7_61 - f27_1;

                                        if (!(*(&((fpu_val_7_61 < f27_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_61, f27_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_61 == f27_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            goto label_4da780;

                                        long double fpu_val_7_62 = param_3[2];
                                        long double f30_1 = *(source_1 + 0x70);
                                        fpu_val_7_62 - f30_1;
                                        long double fpu_val_7_63;
                                        long double f34_1;

                                        if (!(*(&((fpu_val_7_62 < f30_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_62, f30_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_62 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        {
                                            fpu_val_7_63 = param_3[2];
                                            f34_1 = *(source_1 + 0x78);
                                            fpu_val_7_63 - f34_1;
                                        }

                                        if (!(*(&((fpu_val_7_62 < f30_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_62, f30_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_62 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41) &&
                                                *(&((fpu_val_7_63 < f34_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_63, f34_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_63 == f34_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4da780;

                                        long double fpu_val_7_64 = param_3[2];
                                        long double f33_1 = *(source_1 + 0x70);
                                        fpu_val_7_64 - f33_1;
                                        long double fpu_val_7_65;

                                        if (!(*(&((fpu_val_7_64 < f33_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_64, f33_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_64 == f33_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                            fpu_val_7_65 = *(source_1 + 0x78);
                                        else
                                            fpu_val_7_65 = *(source_1 + 0x70);

                                        long double fpu_val_7_66 = fpu_val_7_65 - param_4[2];
                                        long double f38_1 = 0.0;
                                        fpu_val_7_66 - f38_1;
                                        long double fpu_val_7_67 = param_3[2];
                                        long double f39_1 = *(source_1 + 0x70);
                                        fpu_val_7_67 - f39_1;
                                        data_2 = (fpu_val_7_67 < f39_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_67, f39_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_67 == f39_1 ? 1 : 0) << 0xe;
                                        long double fpu_val_7_70;

                                        if (!(*(&((fpu_val_7_66 < f38_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_66, f38_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_66 == f38_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 1))
                                        {
                                            long double fpu_val_7_73;

                                            if (!(*(&data_2 + 1) & 0x41))
                                                fpu_val_7_73 = *(source_1 + 0x78);
                                            else
                                                fpu_val_7_73 = *(source_1 + 0x70);

                                            fpu_val_7_70 = fpu_val_7_73 - param_4[2];
                                        }
                                        else if (!(*(&data_2 + 1) & 0x41))
                                            fpu_val_7_70 = -((*(source_1 + 0x78) - param_4[2]));
                                        else
                                            fpu_val_7_70 = -((*(source_1 + 0x70) - param_4[2]));

                                        item_c - 0.0f;
                                        fpu_val_6_10 = item_2c_2 * fpu_val_7_70;
                                    }
                                }
                                else
                                {
                                    long double fpu_val_7_44 = param_3[2];
                                    long double f24_1 = *(source_1 + 0x78);
                                    fpu_val_7_44 - f24_1;

                                    if (!(*(&((fpu_val_7_44 < f24_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_44, f24_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_44 == f24_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        goto label_4da62f;

                                    long double fpu_val_7_45 = param_4[2];
                                    long double f28_1 = *(source_1 + 0x70);
                                    fpu_val_7_45 - f28_1;
                                    long double fpu_val_7_46;
                                    long double f32_1;

                                    if (!(*(&((fpu_val_7_45 < f28_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_45, f28_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_45 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                    {
                                        fpu_val_7_46 = param_4[2];
                                        f32_1 = *(source_1 + 0x78);
                                        fpu_val_7_46 - f32_1;
                                    }

                                    if (!(*(&((fpu_val_7_45 < f28_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_45, f28_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_45 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41) && *(&(
                                            (fpu_val_7_46 < f32_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_46, f32_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_46 == f32_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4da62f;

                                    long double fpu_val_7_47 = param_4[2];
                                    long double f31_1 = *(source_1 + 0x70);
                                    fpu_val_7_47 - f31_1;
                                    long double fpu_val_7_48;

                                    if (!(*(&((fpu_val_7_47 < f31_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_47, f31_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_47 == f31_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        fpu_val_7_48 = *(source_1 + 0x78);
                                    else
                                        fpu_val_7_48 = *(source_1 + 0x70);

                                    long double fpu_val_7_49 = fpu_val_7_48 - param_3[2];
                                    long double f36_1 = 0.0;
                                    fpu_val_7_49 - f36_1;
                                    long double fpu_val_7_50 = param_4[2];
                                    long double f37_1 = *(source_1 + 0x70);
                                    fpu_val_7_50 - f37_1;
                                    data_2 = (fpu_val_7_50 < f37_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_50, f37_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_50 == f37_1 ? 1 : 0) << 0xe;
                                    long double fpu_val_7_53;

                                    if (!(*(&((fpu_val_7_49 < f36_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_49, f36_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_49 == f36_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        long double fpu_val_7_56;

                                        if (!(*(&data_2 + 1) & 0x41))
                                            fpu_val_7_56 = *(source_1 + 0x78);
                                        else
                                            fpu_val_7_56 = *(source_1 + 0x70);

                                        fpu_val_7_53 = fpu_val_7_56 - param_3[2];
                                    }
                                    else if (!(*(&data_2 + 1) & 0x41))
                                        fpu_val_7_53 = -((*(source_1 + 0x78) - param_3[2]));
                                    else
                                        fpu_val_7_53 = -((*(source_1 + 0x70) - param_3[2]));

                                    item_c - 0.0f;
                                    fpu_val_6_10 = item_2c_2 * fpu_val_7_53;
                                }
                                fpu_val_7_42 = fpu_val_6_10 / fpu_val_6_10;
                            }
                            else
                            {
                                long double fpu_val_7_39 = param_4[2];
                                long double f21_1 = *(source_1 + 0x78);
                                fpu_val_7_39 - f21_1;

                                if (!(*(&((fpu_val_7_39 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_39, f21_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_39 == f21_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    goto label_4da575;

                                long double fpu_val_7_40 = param_3[2];
                                long double f25_1 = *(source_1 + 0x78);
                                fpu_val_7_40 - f25_1;

                                if (!(*(&((fpu_val_7_40 < f25_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_40, f25_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_40 == f25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    goto label_4da575;

                                long double fpu_val_7_41 = param_4[2];
                                long double f29_1 = *(source_1 + 0x70);
                                fpu_val_7_41 - f29_1;

                                if (*(&((fpu_val_7_41 < f29_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_41, f29_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_41 == f29_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    goto label_4da575;

                                fpu_val_7_42 = item_2c_2;
                            }

                            fpu_val_7_37 = fpu_val_7_42 * *(source_1 + 0x6c);
                            *param_2 = fpu_val_7_37 * item_30_1 + *param_2;
                            long double f35_1 = 0.0f;
                            fpu_val_7_37 - f35_1;

                            if (!(*(&((fpu_val_7_37 < f35_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_37, f35_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_37 == f35_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            {
                                fpu_val_6_8 = fpu_val_7_37 + item_34;
                                goto label_4da71f;
                            }
                        }
                        else
                        {
                            long double fpu_val_7_34 = *(source_1 + 0x78) - *(source_1 + 0x70);
                            long double f19_1 = 0.0;
                            fpu_val_7_34 - f19_1;

                            if (*(&((fpu_val_7_34 < f19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_34, f19_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_34 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                fpu_val_7_34 = -(fpu_val_7_34);

                            long double fpu_val_6_1 = item_c;
                            long double f22_1 = 0.0f;
                            fpu_val_6_1 - f22_1;
                            long double fpu_val_6_2 = item_c;

                            if (*(&((fpu_val_6_1 < f22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_1, f22_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_1 == f22_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                fpu_val_6_2 = -(fpu_val_6_2);

                            fpu_val_7_37 = fpu_val_7_34 * item_2c_2 / fpu_val_6_2 * *(source_1 + 0x6c);
                            *param_2 = fpu_val_7_37 * item_30_1 + *param_2;
                            long double f26_1 = 0.0f;
                            fpu_val_7_37 - f26_1;

                            if (!(*(&((fpu_val_7_37 < f26_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_37, f26_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_37 == f26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            {
                                fpu_val_6_8 = item_34 + fpu_val_7_37;
                            label_4da71f:
                                *context = (fpu_val_7_37 * *(source_1 + 0x80) + item_34 * *context) / fpu_val_6_8;
                                context[1] =
                                    (fpu_val_7_37 * *(source_1 + 0x84) + item_34 * context[1]) / fpu_val_6_8;
                                context[2] =
                                    (fpu_val_7_37 * *(source_1 + 0x88) + item_34 * context[2]) / fpu_val_6_8;
                                item_34 = fpu_val_6_8;
                            }
                        }
                    }
                }
            }

            result = result_1 + 1;
            result_1 = result;
            item_28_1 = &item_28_1[1];

            if (result >= param_6)
                break;

            entity_val = param_3;
        }
    }

    return result;
}

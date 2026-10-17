// Original IGI.EXE function: FlatWater_LoadParameters (VA 0x0051C5B0; static CFG gate PASS, CFG score 0.967).
#include "FlatWater_LoadParameters.h"
void* FlatWater_LoadParameters(float context, float param_2 , float param_3 , float param_4 , float param_5, float param_6 , float param_7, float param_8, float param_9, int32_t param_10 , float param_11 , float param_12)

{
    float j_8;
    float j_5 = j_8;
    void* i = Camera_UpdateTransform_5(0x10af0);
    float arg_24 = *(context + 0x78) * 4096.0f;
    long double fpu_val_7_3 = *(context + 0x70) - g_bcab18;
    long double f1 = 0.0f;
    fpu_val_7_3 - f1;
    float arg_40 = fpu_val_7_3;
    bool c1 = /* bool c1 = unknown  {fst dword [stack_ptr+0x54], fp0} */;
    i = (fpu_val_7_3 < f1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&i + 1) & 1)
        fpu_val_7_3 = -(fpu_val_7_3);

    long double f2 = 409.600006f;
    fpu_val_7_3 - f2;
    i = (fpu_val_7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f2 ? 1 : 0) << 0xe;

    if (!(*(&i + 1) & 1))
    {
        void arg_110;
        memcpy(&arg_110, &g_bcaae0, 0x28);
        long double fpu_val_7_4 = param_11;
        long double f3_1 = 0.0f;
        fpu_val_7_4 - f3_1;
        i = (fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe;

        if (*(&i + 1) & 0x40)
        {
            long double fpu_val_7_5 = param_12;
            long double f4_1 = 0.0f;
            fpu_val_7_5 - f4_1;
            i = (fpu_val_7_5 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f4_1 ? 1 : 0) << 0xe;

            if (*(&i + 1) & 0x40)
                param_11 = 1.0f;
        }

        long double fpu_val_7_6 = param_12;
        long double fpu_val_6_1 = param_11;
        i = g_ba2018;
        float arg_130 = 0.0f;
        float arg_98 = 0.0f;
        long double fpu_val_7_8 = 1.0 / sqrtl(fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_6 * fpu_val_7_6);
        param_11 = param_11 * fpu_val_7_8;
        param_12 = param_12 * fpu_val_7_8;
        long double fpu_val_7_10 = 0.0f;
        float arg_90 = fpu_val_7_10 - param_12;
        float arg_94 = -((fpu_val_7_10 - param_11));
        i = QTask_DeleteTask_2(context, i);
        void* i_1 = i;

        if (i)
        {
            float arg_f4 = -(arg_24);

            do
            {
                void arg_2088;
                int32_t* context_1 = &arg_2088;
                float* j_10 = nullptr;
                int32_t arg_18 = 0;
                int32_t arg_148[0x7d0];
                int32_t (* source_1)[0x7d0] = &arg_148;
                arg_14c;
                int32_t* dest_1 = &arg_14c;
                float arg_b4 = g_bcabc8 + g_bcabb8;
                float arg_b8 = g_bcabcc + g_bcabbc;
                long double fpu_val_7_20 = param_11 * arg_24;
                float arg_58 = arg_90 * arg_24 + fpu_val_7_20;
                long double fpu_val_7_23 = param_12 * arg_24;
                float return_addr_2 = fpu_val_7_23;
                float arg_5c = arg_94 * arg_24 + fpu_val_7_23;
                long double fpu_val_7_26 = arg_130 * arg_24;
                float arg_28 = fpu_val_7_26;
                float arg_60 = arg_98 * arg_24 + fpu_val_7_26 + arg_40;
                bool flag_0_1;

                do
                {
                    long double fpu_val_7_28 = arg_f4;
                    float arg_a8 = fpu_val_7_28 * arg_90 + fpu_val_7_20;
                    float arg_ac = fpu_val_7_28 * arg_94 + return_addr_2;
                    long double fpu_val_7_31 = fpu_val_7_28 * arg_98 + arg_28 + arg_40;
                    float arg_e8 =
                        fpu_val_7_31 * g_bcaae8 + arg_ac * g_bcaae4 + arg_a8 * g_bcaae0;
                    long double fpu_val_6_30 = fpu_val_7_31 * g_bcaaf4;
                    long double fpu_val_5_10 = arg_ac * g_bcaaf0;
                    float arg_f8 = arg_e8;
                    float arg_fc = fpu_val_6_30 + fpu_val_5_10 + arg_a8 * g_bcaaec;
                    long double fpu_val_7_34 =
                        fpu_val_7_31 * g_bcab00 + arg_ac * g_bcaafc + arg_a8 * g_bcaaf8;
                    float arg_f0 = fpu_val_7_34;
                    long double fpu_val_6_42 = arg_60 * g_bcaaf4;
                    long double fpu_val_5_18 = arg_5c * g_bcaaf0;
                    float arg_104 =
                        arg_60 * g_bcaae8 + arg_5c * g_bcaae4 + arg_58 * g_bcaae0;
                    float arg_108 = fpu_val_6_42 + fpu_val_5_18 + arg_58 * g_bcaaec;
                    float arg_e4 =
                        arg_60 * g_bcab00 + arg_5c * g_bcaafc + arg_58 * g_bcaaf8;
                    long double f5_1 = 0.0f;
                    fpu_val_7_34 - f5_1;

                    if (!(*(&((fpu_val_7_34 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_34, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_34 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double fpu_val_7_35 = arg_e4;
                        long double f6_1 = 0.0f;
                        fpu_val_7_35 - f6_1;

                        if (!(*(&((fpu_val_7_35 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_35, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_35 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            float arg_10;
                            Display_CheckCapabilities_15(&arg_10, &arg_f8);
                            float arg_8;
                            Display_CheckCapabilities_15(&arg_8, &arg_104);
                            long double fpu_val_7_36 = arg_10;
                            long double f7_1 = arg_8;
                            fpu_val_7_36 - f7_1;
                            int32_t entity_3;

                            entity_3 = !(*(&((fpu_val_7_36 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_36, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_36 == f7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                            long double fpu_val_7_37 = arg_40;
                            long double f12_1 = 0.0f;
                            fpu_val_7_37 - f12_1;
                            int32_t data_5;

                            data_5 = !(*(&((fpu_val_7_37 < f12_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_37, f12_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_37 == f12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                            long double fpu_val_7_39 = arg_8 - arg_10;
                            param_10 = entity_3 ^ data_5;
                            context = fpu_val_7_39;
                            long double fpu_val_6_50 = arg_18 * 0.100000001f;
                            long double fpu_val_6_55 = (arg_b8 - fpu_val_7_39 * 0.5f
                                - (param_3 + param_2) * 0.5f) * fpu_val_6_50 * fpu_val_6_50;
                            param_3 = fpu_val_6_55 + param_3;
                            param_2 = fpu_val_6_55 + param_2;
                            long double fpu_val_7_43 = arg_f0;
                            long double f13_1 = 0.0f;
                            fpu_val_7_43 - f13_1;

                            if (!(*(&((fpu_val_7_43 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_43, f13_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_43 == f13_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double fpu_val_7_44 = arg_e4;
                                long double f14_1 = 0.0f;
                                fpu_val_7_44 - f14_1;

                                if (!(*(&((fpu_val_7_44 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_44, f14_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_44 == f14_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_45 = arg_10;
                                    long double f15_1 = arg_8;
                                    fpu_val_7_45 - f15_1;

                                    if (*(&((fpu_val_7_45 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_45, f15_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_45 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double fpu_val_7_54 = g_bcabc0 + g_bcabb8;
                                        return_addr = param_2 - param_3;
                                        *dest_1 = (fpu_val_7_54 - arg_10) * return_addr / context + param_3;
                                        *source_1 = fpu_val_7_54;
                                    }
                                    else
                                    {
                                        int32_t temp_3 = g_bcabb8;
                                        return_addr = param_2 - param_3;
                                        *dest_1 =
                                            (g_bcabb8 - arg_10) * return_addr / context + param_3;
                                        *source_1 = temp_3;
                                    }

                                    long double fpu_val_7_55 = *dest_1;
                                    long double f16_1 = g_bcabbc;
                                    fpu_val_7_55 - f16_1;
                                    long double fpu_val_7_57;
                                    long double f18_1;

                                    if (!(*(&((fpu_val_7_55 < f16_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_55, f16_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_55 == f16_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    {
                                        fpu_val_7_57 = g_bcabc4 + g_bcabbc;
                                        f18_1 = *dest_1;
                                        fpu_val_7_57 - f18_1;
                                    }

                                    if (*(&((fpu_val_7_55 < f16_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_55, f16_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_55 == f16_1 ? 1 : 0) << 0xe) + 1) & 1 || *(&(
                                        (fpu_val_7_57 < f18_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_57, f18_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_57 == f18_1 ? 1 : 0) << 0xe) + 1) & 1)
                                    {
                                        long double fpu_val_7_58 = param_3;
                                        long double f17_1 = param_2;
                                        fpu_val_7_58 - f17_1;

                                        if (*(&((fpu_val_7_58 < f17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_58, f17_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_58 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        {
                                            long double fpu_val_7_65 = g_bcabc4 + g_bcabbc;
                                            *source_1 =
                                                (fpu_val_7_65 - param_3) * context / return_addr + arg_10;
                                            *dest_1 = fpu_val_7_65;
                                        }
                                        else
                                        {
                                            int32_t data_7 = g_bcabbc;
                                            *source_1 = (g_bcabbc - param_3) * context / return_addr
                                                + arg_10;
                                            *dest_1 = data_7;
                                        }
                                    }

                                    if (!arg_18)
                                    {
                                    label_51cb4b:
                                        long double fpu_val_7_69 = *source_1;
                                        long double f20_1 = g_bcabb8;
                                        fpu_val_7_69 - f20_1;

                                        if (!(*(&((fpu_val_7_69 < f20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_69, f20_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_69 == f20_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double fpu_val_7_71 = g_bcabc0 + g_bcabb8;
                                            long double f25_1 = *source_1;
                                            fpu_val_7_71 - f25_1;

                                            if (!(*(&((fpu_val_7_71 < f25_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_71, f25_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_71 == f25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            {
                                                int32_t temp_4 = 0;
                                                temp_4 = !arg_18;
                                                *context_1 = temp_4;
                                                dest_1 = &dest_1[2];
                                                source_1 = &(*source_1)[2];
                                                j_10 += 1;
                                                context_1 = &context_1[1];
                                            }
                                        }
                                    }
                                    else
                                    {
                                        long double fpu_val_7_66 = *source_1;
                                        long double f21_1 = g_bcabb8;
                                        fpu_val_7_66 - f21_1;

                                        if (*(&((fpu_val_7_66 < f21_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_66, f21_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_66 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51cb4b;

                                        long double fpu_val_7_68 = g_bcabc0 + g_bcabb8;
                                        long double f26_1 = *source_1;
                                        fpu_val_7_68 - f26_1;

                                        if (*(&((fpu_val_7_68 < f26_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_68, f26_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_68 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51cb4b;
                                    }

                                    long double fpu_val_7_72 = arg_8;
                                    long double f24_1 = arg_10;
                                    fpu_val_7_72 - f24_1;

                                    if (*(&((fpu_val_7_72 < f24_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_72, f24_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_72 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double fpu_val_7_83 = g_bcabc0 + g_bcabb8;
                                        context = param_3 - param_2;
                                        return_addr = arg_10 - arg_8;
                                        *dest_1 = (fpu_val_7_83 - arg_8) * context / return_addr + param_2;
                                        *source_1 = fpu_val_7_83;
                                    }
                                    else
                                    {
                                        int32_t data_8 = g_bcabb8;
                                        context = param_3 - param_2;
                                        return_addr = arg_10 - arg_8;
                                        *dest_1 =
                                            (g_bcabb8 - arg_8) * context / return_addr + param_2;
                                        *source_1 = data_8;
                                    }

                                    long double fpu_val_7_84 = *dest_1;
                                    long double f39_1 = g_bcabbc;
                                    fpu_val_7_84 - f39_1;
                                    long double fpu_val_7_86;
                                    long double f44_1;

                                    if (!(*(&((fpu_val_7_84 < f39_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_84, f39_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_84 == f39_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    {
                                        fpu_val_7_86 = g_bcabc4 + g_bcabbc;
                                        f44_1 = *dest_1;
                                        fpu_val_7_86 - f44_1;
                                    }

                                    if (*(&((fpu_val_7_84 < f39_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_84, f39_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_84 == f39_1 ? 1 : 0) << 0xe) + 1) & 1 || *(&(
                                        (fpu_val_7_86 < f44_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_86, f44_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_86 == f44_1 ? 1 : 0) << 0xe) + 1) & 1)
                                    {
                                        long double fpu_val_7_87 = param_2;
                                        long double f43_1 = param_3;
                                        fpu_val_7_87 - f43_1;

                                        if (*(&((fpu_val_7_87 < f43_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_87, f43_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_87 == f43_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        {
                                            long double fpu_val_7_94 = g_bcabc4 + g_bcabbc;
                                            *source_1 =
                                                (fpu_val_7_94 - param_2) * return_addr / context + arg_8;
                                            *dest_1 = fpu_val_7_94;
                                        }
                                        else
                                        {
                                            int32_t temp_7 = g_bcabbc;
                                            *source_1 =
                                                (g_bcabbc - param_2) * return_addr / context + arg_8;
                                            *dest_1 = temp_7;
                                        }
                                    }

                                    if (!arg_18)
                                    {
                                    label_51ccab:
                                        long double fpu_val_7_98 = *source_1;
                                        long double f50_1 = g_bcabb8;
                                        fpu_val_7_98 - f50_1;

                                        if (!(*(&((fpu_val_7_98 < f50_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_98, f50_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_98 == f50_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double fpu_val_7_100 = g_bcabc0 + g_bcabb8;
                                            long double f52_1 = *source_1;
                                            fpu_val_7_100 - f52_1;

                                            if (!(*(&((fpu_val_7_100 < f52_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_100, f52_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_100 == f52_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            {
                                                int32_t data_9 = 0;
                                                data_9 = !arg_18;
                                                *context_1 = data_9;
                                                dest_1 = &dest_1[2];
                                                source_1 = &(*source_1)[2];
                                                j_10 += 1;
                                                context_1 = &context_1[1];
                                            }
                                        }
                                    }
                                    else
                                    {
                                        long double fpu_val_7_95 = *source_1;
                                        long double f51_1 = g_bcabb8;
                                        fpu_val_7_95 - f51_1;

                                        if (*(&((fpu_val_7_95 < f51_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_95, f51_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_95 == f51_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51ccab;

                                        long double fpu_val_7_97 = g_bcabc0 + g_bcabb8;
                                        long double f53_1 = *source_1;
                                        fpu_val_7_97 - f53_1;

                                        if (*(&((fpu_val_7_97 < f53_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_97, f53_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_97 == f53_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51ccab;
                                    }

                                    if (!arg_18)
                                    {
                                        param_4 = arg_10;
                                        param_5 = param_3;
                                        param_8 = arg_8;
                                        param_9 = param_2;
                                    }
                                }
                            }
                        }
                    }

                    flag_0_1 = arg_18 + 1 < 0xa;
                    arg_18 += 1;
                } while (flag_0_1);
                int32_t j = 0;
                float* j_7 = j_10;
                int32_t saved_target;
                int32_t* temp_11 = &(&saved_target)[j_10 + 0x827];
                float* return_addr_1 = &(&saved_target)[j_10 * 2 + 0x58];
                float arg_38 = param_8 - param_4;

                do
                {
                    long double fpu_val_7_105 = (j & 1) * g_bcabc0 + g_bcabb8;
                    long double fpu_val_6_88 = (j >> 1 & 1) * g_bcabc4 + g_bcabbc;
                    long double fpu_val_5_30 = arg_38;
                    long double f8_1 = 0.0f;
                    fpu_val_5_30 - f8_1;
                    bool c1_1 = /* bool c1_1 = unknown  {fsub fp0, dword [stack_ptr+0x40]} */;
                    long double fpu_val_5_33 = (param_9 - param_5) * (fpu_val_7_105 - param_4);
                    long double fpu_val_5_35;

                    if (*(&((fpu_val_5_30 < f8_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(fpu_val_5_30, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_30 == f8_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
                    {
                        long double f11_1 = 0.0f;
                        fpu_val_5_33 - f11_1;

                        fpu_val_5_35 = *(&((fpu_val_5_33 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_5_33, f11_1) ? 1 : 0) << 0xa
                            | (fpu_val_5_33 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41
                            ? -3.40282347e+38.0f : 3.40282347e+38.0f;
                    }
                    else
                        fpu_val_5_35 = fpu_val_5_33 / arg_38 + param_5;

                    fpu_val_6_88 - fpu_val_5_35;
                    int32_t data_20;

                    data_20 = !(*(&((fpu_val_6_88 < fpu_val_5_35 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_88, fpu_val_5_35) ? 1 : 0) << 0xa
                        | (fpu_val_6_88 == fpu_val_5_35 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                    if (data_20 != param_10)
                    {
                        return_addr_1[-1] = fpu_val_7_105;
                        *return_addr_1 = fpu_val_6_88;
                        int32_t data_22 = 0;
                        data_22 = !arg_18;
                        *temp_11 = data_22;
                        j_7 += 1;
                        return_addr_1 = &return_addr_1[2];
                        temp_11 = &temp_11[1];
                    }

                    j += 1;
                } while (j < 4);

                float* j_4 = j_7;
                int32_t context_2 = 0;
                float* j_9 = j_4;
                int32_t arg_34 = 0;

                if (j_9 > 0)
                {
                    return_addr_2 = &(&saved_target)[j_9 + 0x827];
                    context = &(&saved_target)[j_9 * 2 + 0x58];
                    return_addr = &(&saved_target)[j_9 * 2 + 0x57];

                    do
                    {
                        int32_t source_2 = 0;
                        return_addr_1 = nullptr;

                        if (j_9 > 0)
                        {
                            float* temp_13 = &arg_14c;

                            do
                            {
                                if (return_addr_1 != context_2)
                                {
                                    long double fpu_val_7_107 = *(&arg_14c + (context_2 << 3));
                                    long double f33_1 = *temp_13;
                                    fpu_val_7_107 - f33_1;

                                    if (*(&((fpu_val_7_107 < f33_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_107, f33_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_107 == f33_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                        source_2 = 1;
                                }

                                return_addr_1 += 1;
                                temp_13 = &temp_13[2];
                            } while (return_addr_1 < j_9);
                        }

                        long double fpu_val_7_108 = arg_148[context_2 * 2];
                        long double f19_1 = g_bcabb8;
                        fpu_val_7_108 - f19_1;
                        long double fpu_val_7_110;

                        if (!(*(&((fpu_val_7_108 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_108, f19_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_108 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            fpu_val_7_110 = g_bcabb8;
                        else
                            fpu_val_7_110 = g_bcabc0 + g_bcabb8;

                        long double fpu_val_6_91 = arg_38;
                        long double f30_1 = 0.0f;
                        fpu_val_6_91 - f30_1;
                        bool c1_2 = /* bool c1_2 = unknown  {fsub fp0, dword [stack_ptr+0x40]} */;
                        long double fpu_val_6_94 = (param_9 - param_5) * (fpu_val_7_110 - param_4);
                        long double fpu_val_6_96;

                        if (*(&((fpu_val_6_91 < f30_1 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                            | (FCMP_UO(fpu_val_6_91, f30_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_91 == f30_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40)
                        {
                            long double f38_1 = 0.0f;
                            fpu_val_6_94 - f38_1;

                            fpu_val_6_96 = *(&((fpu_val_6_94 < f38_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_94, f38_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_94 == f38_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                ? -3.40282347e+38.0f : 3.40282347e+38.0f;
                        }
                        else
                            fpu_val_6_96 = fpu_val_6_94 / arg_38 + param_5;

                        if (!source_2)
                        {
                            long double f47_1 = *(&arg_14c + (context_2 << 3));
                            fpu_val_6_96 - f47_1;
                            int32_t data_26;

                            data_26 = *(&((fpu_val_6_96 < f47_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_96, f47_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_96 == f47_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 ? 0 : 1;

                            int32_t data_28;

                            if (data_26 == param_10)
                            {
                                long double f54_1 = (&saved_target)[context_2 * 2 + 0x58];
                                fpu_val_6_96 - f54_1;

                                data_28 = !(*(&((fpu_val_6_96 < f54_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_96, f54_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_96 == f54_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41) ? 0
                                    : 1;
                            }

                            if (data_26 == param_10 && data_28 != param_10)
                            {
                                long double fpu_val_7_112 = arg_148[context_2 * 2];
                                long double f55_1 = g_bcabb8;
                                fpu_val_7_112 - f55_1;
                                float* return_addr_6 = 0xffffffff;
                                float* return_addr_5 = 0xffffffff;
                                j_5 = 1.40129846e-45.0f;

                                if (*(&((fpu_val_7_112 < f55_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_112, f55_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_112 == f55_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                    j_5 = 0.0f;

                                return_addr_1 = nullptr;

                                if (j_4 > 0)
                                {
                                    int32_t temp_18 = 0;
                                    arg_18 = 0;
                                    arg_28 = &arg_2088;

                                    do
                                    {
                                        if (return_addr_1 != context_2)
                                        {
                                            long double fpu_val_7_113 = *(&arg_14c + temp_18);
                                            long double f56_1 = *(&arg_14c + (context_2 << 3));
                                            fpu_val_7_113 - f56_1;

                                            if (*(&((fpu_val_7_113 < f56_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_113, f56_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_113 == f56_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            {
                                                if (return_addr_6 == 0xffffffff)
                                                {
                                                label_51d044:

                                                    if (*arg_28)
                                                        return_addr_6 = return_addr_1;
                                                }
                                                else
                                                {
                                                    long double fpu_val_7_114 = *(&arg_14c + temp_18);
                                                    long double f58_1 =
                                                        *(&arg_14c + (return_addr_6 << 3));
                                                    fpu_val_7_114 - f58_1;

                                                    if (!(*(&((fpu_val_7_114 < f58_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_114, f58_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_7_114 == f58_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double fpu_val_7_115 =
                                                            *(&arg_14c + temp_18);
                                                        long double f61_1 =
                                                            *(&arg_14c + (return_addr_6 << 3));
                                                        fpu_val_7_115 - f61_1;

                                                        if (!(*(&(
                                                                (fpu_val_7_115 < f61_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_115, f61_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_115 == f61_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x40))
                                                            goto label_51d044;

                                                        long double fpu_val_7_116 =
                                                            *(&arg_148 + temp_18);
                                                        long double f64_1 =
                                                            arg_148[return_addr_6 * 2];
                                                        fpu_val_7_116 - f64_1;
                                                        int32_t data_35;

                                                        data_35 = *(&(
                                                            (fpu_val_7_116 < f64_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_116, f64_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_7_116 == f64_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41 ? 0 : 1;

                                                        int32_t temp_19 = 0;
                                                        context_2 = arg_34;
                                                        temp_19 = data_35 != j_5;
                                                        temp_18 = arg_18;

                                                        if (temp_19)
                                                            goto label_51d044;
                                                    }
                                                }
                                            }

                                            long double fpu_val_7_117 = *(&arg_14c + temp_18);
                                            long double f57_1 = *(&arg_14c + (context_2 << 3));
                                            fpu_val_7_117 - f57_1;

                                            if (!(*(&((fpu_val_7_117 < f57_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_117, f57_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_117 == f57_1 ? 1 : 0) << 0xe) + 1)
                                                & 0x41))
                                            {
                                                if (return_addr_5 == 0xffffffff)
                                                {
                                                label_51d0ca:

                                                    if (*arg_28)
                                                        return_addr_5 = return_addr_1;
                                                }
                                                else
                                                {
                                                    long double fpu_val_7_118 = *(&arg_14c + temp_18);
                                                    long double f60_1 =
                                                        *(&arg_14c + (return_addr_5 << 3));
                                                    fpu_val_7_118 - f60_1;

                                                    if (*(&((fpu_val_7_118 < f60_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_118, f60_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_7_118 == f60_1 ? 1 : 0) << 0xe) + 1)
                                                        & 0x41)
                                                    {
                                                        long double fpu_val_7_119 =
                                                            *(&arg_14c + temp_18);
                                                        long double f63_1 =
                                                            *(&arg_14c + (return_addr_5 << 3));
                                                        fpu_val_7_119 - f63_1;

                                                        if (!(*(&(
                                                                (fpu_val_7_119 < f63_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_119, f63_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_119 == f63_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x40))
                                                            goto label_51d0ca;

                                                        long double fpu_val_7_120 =
                                                            *(&arg_148 + temp_18);
                                                        long double f65_1 =
                                                            arg_148[return_addr_5 * 2];
                                                        fpu_val_7_120 - f65_1;
                                                        int32_t data_38;

                                                        data_38 = *(&(
                                                            (fpu_val_7_120 < f65_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_120, f65_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_7_120 == f65_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41 ? 0 : 1;

                                                        int32_t temp_20 = 0;
                                                        context_2 = arg_34;
                                                        temp_20 = data_38 != j_5;
                                                        temp_18 = arg_18;

                                                        if (temp_20)
                                                            goto label_51d0ca;
                                                    }
                                                }
                                            }
                                        }

                                        return_addr_1 += 1;
                                        temp_18 += 8;
                                        arg_28 += 4;
                                        arg_18 = temp_18;
                                    } while (return_addr_1 < j_4);

                                    if (return_addr_6 != 0xffffffff
                                        && return_addr_5 != 0xffffffff)
                                    {
                                        long double fpu_val_7_121 = arg_148[return_addr_6 * 2];
                                        long double f59_1 = arg_148[return_addr_5 * 2];
                                        fpu_val_7_121 - f59_1;
                                        return_addr_1 =
                                            &(&saved_target)[return_addr_6 * 2 + 0x57];

                                        if (!(*(&((fpu_val_7_121 < f59_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_121, f59_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_121 == f59_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        {
                                            long double fpu_val_7_125 = (arg_148[return_addr_5 * 2]
                                                - *return_addr_1) * (*(&arg_14c + (context_2 << 3))
                                                - *(&arg_14c + (return_addr_6 << 3))) / (
                                                *(&arg_14c + (return_addr_5 << 3))
                                                - (&saved_target)[return_addr_6 * 2 + 0x58]);
                                            long double fpu_val_7_126 = fpu_val_7_125 + *return_addr_1;
                                            return_addr_1 = return_addr;
                                            *return_addr_1 = fpu_val_7_126;
                                            fpu_val_7_110 = *(&arg_14c + (context_2 << 3));
                                            *context = fpu_val_7_110;
                                            long double f62_1 = g_bcabbc;
                                            fpu_val_7_110 - f62_1;

                                            if (!(*(&((fpu_val_7_110 < f62_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_110, f62_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_110 == f62_1 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 1))
                                            {
                                                long double fpu_val_6_104 = g_bcabc4 + g_bcabbc;
                                                fpu_val_7_110 - fpu_val_6_104;

                                                if (*(&((fpu_val_7_110 < fpu_val_6_104 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_110, fpu_val_6_104) ? 1 : 0)
                                                    << 0xa | (fpu_val_7_110 == fpu_val_6_104 ? 1 : 0) << 0xe)
                                                    + 1) & 0x41)
                                                {
                                                    return_addr_1 = 8;
                                                    *return_addr_2 = 0;
                                                    j_4 += 1;
                                                    return_addr = &return_addr[2];
                                                    context += 8;
                                                    return_addr_2 += 4;
                                                    context_2 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                j_4 = j_9 + 1;
                                *return_addr = fpu_val_7_110;
                                *context = (&saved_target)[context_2 * 2 + 0x58];
                                return_addr_1 = context + 8;
                                return_addr = &return_addr[2];
                                *return_addr_2 = 0;
                                context = return_addr_1;
                                return_addr_2 += 4;
                                context_2 = 0;
                            }
                        }

                        context_2 += 1;
                        arg_34 = context_2;
                        j_9 = j_4;
                    } while (context_2 < j_4);
                }

                float return_addr_4 = -3.40282347e+38.0f;
                float arg_7c = -3.40282347e+38.0f;
                void arg_3fc8;

                if (j_9 > 0)
                {
                    int32_t* context_5 = &arg_3fc8;
                    j_5 = j_4;
                    bool flag_6_1;

                    do
                    {
                        int32_t source_5 = 0xffffffff;
                        float return_addr_3 = 3.40282347e+38.0f;
                        float arg_48 = 3.40282347e+38.0f;
                        int32_t temp_23 = 0;
                        float* entity_11 = &arg_14c;

                        do
                        {
                            long double fpu_val_7_129 = arg_7c;
                            long double f23_1 = *entity_11;
                            fpu_val_7_129 - f23_1;

                            if (*(&((fpu_val_7_129 < f23_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_129, f23_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_129 == f23_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                            label_51d250:
                                long double fpu_val_7_132 = *entity_11;
                                long double f28_1 = arg_48;
                                fpu_val_7_132 - f28_1;

                                if (*(&((fpu_val_7_132 < f28_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_132, f28_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_132 == f28_1 ? 1 : 0) << 0xe) + 1) & 1)
                                {
                                label_51d27b:
                                    source_5 = temp_23;
                                    return_addr_3 = entity_11[-1];
                                    arg_48 = *entity_11;
                                }
                                else
                                {
                                    long double fpu_val_7_133 = entity_11[-1];
                                    long double f36_1 = return_addr_3;
                                    fpu_val_7_133 - f36_1;

                                    if (*(&((fpu_val_7_133 < f36_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_133, f36_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_133 == f36_1 ? 1 : 0) << 0xe) + 1) & 1)
                                    {
                                        long double fpu_val_7_134 = *entity_11;
                                        long double f41_1 = arg_48;
                                        fpu_val_7_134 - f41_1;

                                        if (*(&((fpu_val_7_134 < f41_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_134, f41_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_134 == f41_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                            goto label_51d27b;
                                    }
                                }
                            }
                            else
                            {
                                long double fpu_val_7_130 = return_addr_4;
                                long double f29_1 = entity_11[-1];
                                fpu_val_7_130 - f29_1;

                                if (*(&((fpu_val_7_130 < f29_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_130, f29_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_130 == f29_1 ? 1 : 0) << 0xe) + 1) & 1)
                                {
                                    long double fpu_val_7_131 = arg_7c;
                                    long double f37_1 = *entity_11;
                                    fpu_val_7_131 - f37_1;

                                    if (*(&((fpu_val_7_131 < f37_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_131, f37_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_131 == f37_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                        goto label_51d250;
                                }
                            }

                            temp_23 += 1;
                            entity_11 = &entity_11[2];
                        } while (temp_23 < j_4);

                        return_addr_1 = return_addr_3;
                        *context_5 = source_5;
                        context_5 = &context_5[1];
                        flag_6_1 = j_5 != 1;
                        return_addr_4 = return_addr_1;
                        arg_7c = arg_48;
                        j_5 -= 1;
                    } while (flag_6_1);
                }

                int32_t source_6 = 0;
                int32_t arg_3028[0x3e8];
                int32_t arg_4f68[0x7d0];
                arg_4f6c;
                int32_t arg_6ea8[0x3e8];

                if (j_4 > 0)
                {
                    j_5 = -(arg_40);

                    do
                    {
                        long double fpu_val_7_139 = (arg_148[source_6 * 2] - arg_b4) / g_bcab28;
                        long double fpu_val_6_109 =
                            (*(&arg_14c + (source_6 << 3)) - arg_b8) / g_bcab2c;
                        float arg_4c =
                            fpu_val_6_109 * g_bcaaec + fpu_val_7_139 * g_bcaae0 + g_bcaaf8;
                        long double fpu_val_5_44 = fpu_val_6_109 * g_bcaaf0;
                        long double fpu_val_4_8 = fpu_val_7_139 * g_bcaae4;
                        float arg_9c = arg_4c;
                        float arg_50 = fpu_val_5_44 + fpu_val_4_8 + g_bcaafc;
                        float arg_54 =
                            fpu_val_6_109 * g_bcaaf4 + fpu_val_7_139 * g_bcaae8 + g_bcab00;
                        long double fpu_val_7_143 = arg_4c;
                        long double f22_1 = 0.0f;
                        fpu_val_7_143 - f22_1;

                        if (!(*(&((fpu_val_7_143 < f22_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_143, f22_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_143 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                        label_51d39f:
                            long double fpu_val_7_146 = arg_54;
                            long double fpu_val_6_113 = arg_50;
                            long double fpu_val_5_47 = arg_4c;
                            long double fpu_val_7_148 = 1.0 / sqrtl(fpu_val_5_47 * fpu_val_5_47
                                + fpu_val_6_113 * fpu_val_6_113 + fpu_val_7_146 * fpu_val_7_146);
                            arg_9c = arg_4c * fpu_val_7_148;
                            float arg_a0 = arg_50 * fpu_val_7_148;
                            float arg_a4 = arg_54 * fpu_val_7_148;
                        }
                        else
                        {
                            long double fpu_val_7_144 = arg_50;
                            long double f27_1 = 0.0f;
                            fpu_val_7_144 - f27_1;

                            if (!(*(&((fpu_val_7_144 < f27_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_144, f27_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_144 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_51d39f;

                            long double fpu_val_7_145 = arg_54;
                            long double f35_1 = 0.0f;
                            fpu_val_7_145 - f35_1;

                            if (!(*(&((fpu_val_7_145 < f35_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_145, f35_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_145 == f35_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                goto label_51d39f;
                        }

                        float arg_d0 = 0.0f;
                        float arg_d4 = 0.0f;
                        long double fpu_val_7_150 = j_5;
                        long double f34_1 = 0.0f;
                        fpu_val_7_150 - f34_1;
                        float arg_80 = 0.0f;
                        float arg_84 = 0.0f;

                        if (!(*(&((fpu_val_7_150 < f34_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_150, f34_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_150 == f34_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            long double fpu_val_7_151 = j_5;
                            long double fpu_val_6_122 = 0.0f;
                            arg_80 = fpu_val_6_122;
                            arg_84 = fpu_val_6_122;
                            float arg_88 = j_5 * 1.0 / sqrtl(fpu_val_7_151 * fpu_val_7_151);
                        }

                        float arg_64;
                        Sys_PopStack_10(&arg_64, &arg_d0, &arg_9c, &arg_80);
                        arg_64 = arg_64 - arg_d0;
                        param_6 = param_6 - arg_d4;
                        param_7 = param_7 - j_5;
                        long double fpu_val_7_164 = (g_bcab08 + 1073741824.0) * *(i_1 + 0x248);
                        double arg_140 = (g_bcab10 + 1073741824.0) * *(i_1 + 0x248);
                        return_addr_2 = fpu_val_7_164;
                        return_addr_1 = return_addr_2;
                        return_addr_2 = return_addr_1;
                        long double fpu_val_7_165 = fpu_val_7_164 - return_addr_2;
                        return_addr_2 = arg_140;

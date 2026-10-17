// IGI native provenance: Env_ActivateEntity_11 - 0x0044A670 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044A670-Env_ActivateEntity_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_ActivateEntity_11.h"
void* Env_ActivateEntity_11(float* context, float* param_2, float* param_3)

{
    long double fpu_val_7_1 = g_57c258 - context[2];
    float item_60 = 0.0f;
    float item_7c = 0.0f;
    float item_8c = 0.0f;
    float item_70 = fpu_val_7_1;
    long double fpu_val_6_1 = g_57c254 - context[1];
    float item_30 = fpu_val_6_1;
    long double fpu_val_5_1 = g_57c250 - *context;
    float item_20 = fpu_val_5_1;
    long double fpu_val_4_3 = fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1;
    long double fpu_val_6_4 = g_57c258 - param_2[2];
    float item_78 = fpu_val_6_4;
    long double fpu_val_5_4 = g_57c254 - param_2[1];
    float item_18 = fpu_val_5_4;
    long double fpu_val_4_5 = g_57c250 - *param_2;
    float item_8 = fpu_val_4_5;
    float item_5c = fpu_val_4_5 * fpu_val_4_5 + fpu_val_5_4 * fpu_val_5_4 + fpu_val_6_4 * fpu_val_6_4;
    long double fpu_val_6_7 = g_57c258 - param_3[2];
    long double fpu_val_5_7 = g_57c254 - param_3[1];
    long double fpu_val_4_8 = g_57c250 - *param_3;
    float item_4c = fpu_val_4_8 * fpu_val_4_8 + fpu_val_5_7 * fpu_val_5_7 + fpu_val_6_7 * fpu_val_6_7;
    long double fpu_val_6_10 = param_2[2] - context[2];
    long double fpu_val_4_11 = param_2[1] - context[1];
    float item_4 = fpu_val_4_11;
    long double fpu_val_3_13 = *param_2 - *context;
    float item_38 = fpu_val_3_13 * fpu_val_3_13 + fpu_val_4_11 * fpu_val_4_11 + fpu_val_6_10 * fpu_val_6_10;
    long double fpu_val_5_12 = param_3[2] - param_2[2];
    float item_1c = fpu_val_5_12;
    long double fpu_val_4_14 = param_3[1] - param_2[1];
    float item_c = fpu_val_4_14;
    long double fpu_val_3_16 = *param_3 - *param_2;
    float item_34 = fpu_val_4_14 * fpu_val_4_14 + fpu_val_5_12 * fpu_val_5_12 + fpu_val_3_16 * fpu_val_3_16;
    long double fpu_val_5_15 = context[2] - param_3[2];
    long double fpu_val_4_17 = context[1] - param_3[1];
    long double fpu_val_3_19 = *context - *param_3;
    float item_6c = fpu_val_3_13;
    float item_48 = fpu_val_3_16;
    float item_3c = fpu_val_3_19 * fpu_val_3_19 + fpu_val_4_17 * fpu_val_4_17 + fpu_val_5_15 * fpu_val_5_15;
    char entity_val = 1;
    float item_68 = item_4;
    float item_88 = *param_3 - *context;
    float item_84 = param_3[1] - context[1];
    float item_80 = param_3[2] - context[2];
    float item_64 = fpu_val_6_10;
    long double fpu_val_6_11 = g_57c264;
    long double f1 = 0.0f;
    fpu_val_6_11 - f1;
    long double fpu_val_6_12 = g_57c264;

    if (1 & *(&((fpu_val_6_11 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_11, f1) ? 1 : 0) << 0xa
            | (fpu_val_6_11 == f1 ? 1 : 0) << 0xe | 0x3000) + 1))
        fpu_val_6_12 = -(fpu_val_6_12);

    long double fpu_val_5_23 = g_57c260;
    long double f2 = 0.0f;
    fpu_val_5_23 - f2;
    long double fpu_val_5_24 = g_57c260;

    if (*(&((fpu_val_5_23 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_23, f2) ? 1 : 0) << 0xa
            | (fpu_val_5_23 == f2 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        fpu_val_5_24 = -(fpu_val_5_24);

    fpu_val_6_12 - fpu_val_5_24;
    long double fpu_val_5_27;
    long double fpu_val_6_16;

    if (!(*(&((fpu_val_6_12 < fpu_val_5_24 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_5_24) ? 1 : 0) << 0xa
        | (fpu_val_6_12 == fpu_val_5_24 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        long double fpu_val_6_15 = g_57c264;
        long double f4_1 = 0.0f;
        fpu_val_6_15 - f4_1;
        fpu_val_6_16 = g_57c264;

        if (*(&((fpu_val_6_15 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_15, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_6_15 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            fpu_val_6_16 = -(fpu_val_6_16);

        long double fpu_val_5_26 = g_57c268;
        long double f6_1 = 0.0f;
        fpu_val_5_26 - f6_1;
        fpu_val_5_27 = g_57c268;

        if (*(&((fpu_val_5_26 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_26, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_5_26 == f6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            fpu_val_5_27 = -(fpu_val_5_27);

        fpu_val_6_16 - fpu_val_5_27;
    }

    long double fpu_val_5_44;
    long double fpu_val_6_26;

    if (!(*(&((fpu_val_6_12 < fpu_val_5_24 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_5_24) ? 1 : 0) << 0xa
        | (fpu_val_6_12 == fpu_val_5_24 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) && !(*(&(
        (fpu_val_6_16 < fpu_val_5_27 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_16, fpu_val_5_27) ? 1 : 0) << 0xa
        | (fpu_val_6_16 == fpu_val_5_27 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        long double fpu_val_6_29 = item_64 * item_88 - item_6c * item_80;
        long double f9_1 = 0.0f;
        fpu_val_6_29 - f9_1;

        if (*(&((fpu_val_6_29 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_29, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_6_29 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
            entity_val = 0;

        long double fpu_val_5_50 = item_70 * item_88 - item_20 * item_80;
        fpu_val_6_26 = fpu_val_5_50 / fpu_val_5_50;
        long double f12_1 = 0.0f;
        fpu_val_6_26 - f12_1;
        long double f15_1;

        if (!(*(&((fpu_val_6_26 < f12_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_26, f12_1) ? 1 : 0) << 0xa
            | (fpu_val_6_26 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            f15_1 = 1.0f;
            fpu_val_6_26 - f15_1;
        }

        if (*(&((fpu_val_6_26 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_26, f12_1) ? 1 : 0) << 0xa
                | (fpu_val_6_26 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                (fpu_val_6_26 < f15_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_26, f15_1) ? 1 : 0) << 0xa
                | (fpu_val_6_26 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            entity_val = 0;

        long double fpu_val_5_51 = item_88;
        long double f18_1 = 0.0f;
        fpu_val_5_51 - f18_1;
        long double fpu_val_5_52 = item_88;

        if (*(&((fpu_val_5_51 < f18_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_51, f18_1) ? 1 : 0) << 0xa
                | (fpu_val_5_51 == f18_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            fpu_val_5_52 = -(fpu_val_5_52);

        long double fpu_val_4_26 = item_80;
        long double f21_1 = 0.0f;
        fpu_val_4_26 - f21_1;
        long double fpu_val_4_27 = item_80;

        if (*(&((fpu_val_4_26 < f21_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_26, f21_1) ? 1 : 0) << 0xa
                | (fpu_val_4_26 == f21_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
            fpu_val_4_27 = -(fpu_val_4_27);

        fpu_val_5_52 - fpu_val_4_27;

        if (*(&((fpu_val_5_52 < fpu_val_4_27 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_5_52, fpu_val_4_27) ? 1 : 0) << 0xa
            | (fpu_val_5_52 == fpu_val_4_27 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double fpu_val_5_58 = item_80;
            long double f24_1 = 0.0f;
            fpu_val_5_58 - f24_1;

            if (!(*(&((fpu_val_5_58 < f24_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_58, f24_1) ? 1 : 0) << 0xa
                | (fpu_val_5_58 == f24_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            {
                fpu_val_5_44 = (item_70 - fpu_val_6_26 * item_64) / item_80;
                goto label_44aaa6;
            }

        label_44aa96:
            entity_val = 0;
            fpu_val_5_44 = (item_70 - fpu_val_6_26 * item_64) / item_80;
            goto label_44aaa6;
        }

        fpu_val_5_44 = (item_20 - fpu_val_6_26 * item_6c) / item_88;
    label_44aaa6:
        long double f26_1 = 0.0f;
        fpu_val_5_44 - f26_1;

        if (*(&((fpu_val_5_44 < f26_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_44, f26_1) ? 1 : 0) << 0xa
            | (fpu_val_5_44 == f26_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
        {
        label_44abbc:
            long double fpu_val_6_36 = item_4c;
            fpu_val_6_36 - fpu_val_4_3;
            float item_60_1;

            item_60_1 = !(*(&((fpu_val_6_36 < fpu_val_4_3 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_36, fpu_val_4_3) ? 1 : 0) << 0xa
                | (fpu_val_6_36 == fpu_val_4_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? fpu_val_4_3 : item_4c;

            long double fpu_val_6_37 = item_5c;
            fpu_val_6_37 - fpu_val_4_3;
            float item_7c_1;

            item_7c_1 = !(*(&((fpu_val_6_37 < fpu_val_4_3 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_37, fpu_val_4_3) ? 1 : 0) << 0xa
                | (fpu_val_6_37 == fpu_val_4_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? fpu_val_4_3 : item_5c;

            long double fpu_val_7_4 = item_4c;
            long double f31_1 = item_5c;
            fpu_val_7_4 - f31_1;
            long double fpu_val_7_5;

            fpu_val_7_5 = !(*(&((fpu_val_7_4 < f31_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_4, f31_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f31_1 ? 1 : 0) << 0xe) + 1) & 1) ? item_5c : item_4c;

            long double fpu_val_6_38 = item_20;
            long double fpu_val_5_81 = item_70;
            long double fpu_val_4_34 = item_30;
            float item_5c_1 =
                sqrtl(fpu_val_6_38 * fpu_val_6_38 + fpu_val_4_34 * fpu_val_4_34 + fpu_val_5_81 * fpu_val_5_81);
            float item_8c_1 = 1.0f / item_5c_1;
            long double fpu_val_4_38 = item_80;
            long double fpu_val_3_23 = item_84;
            long double fpu_val_2_25 = item_88;
            float item_4c_1 =
                sqrtl(fpu_val_2_25 * fpu_val_2_25 + fpu_val_3_23 * fpu_val_3_23 + fpu_val_4_38 * fpu_val_4_38);
            long double fpu_val_4_42 = 1.0f / item_4c_1;
            item_88 = fpu_val_4_42 * item_88;
            item_84 = fpu_val_4_42 * item_84;
            item_80 = fpu_val_4_42 * item_80;
            long double fpu_val_6_42 = (item_70 * item_8c_1 * item_80 + item_30 * item_8c_1 * item_84
                + fpu_val_6_38 * item_8c_1 * item_88) * item_5c_1;
            float item_8c_2 = fpu_val_6_42;
            long double f39_1 = 0.0f;
            fpu_val_6_42 - f39_1;

            if (!(*(&((fpu_val_6_42 < f39_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_42, f39_1) ? 1 : 0) << 0xa
                | (fpu_val_6_42 == f39_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double fpu_val_6_43 = item_8c_2;
                long double f47_1 = item_4c_1;
                fpu_val_6_43 - f47_1;

                if (*(&((fpu_val_6_43 < f47_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_43, f47_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_43 == f47_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    item_88 = item_8c_2 * item_88;
                    item_84 = item_8c_2 * item_84;
                    item_80 = item_8c_2 * item_80;
                    long double fpu_val_6_56 = item_80 + context[2] - g_57c258;
                    long double fpu_val_5_92 = item_84 + context[1] - g_57c254;
                    long double fpu_val_4_49 = item_88 + *context - g_57c250;
                    long double fpu_val_3_32 =
                        fpu_val_4_49 * fpu_val_4_49 + fpu_val_5_92 * fpu_val_5_92 + fpu_val_6_56 * fpu_val_6_56;
                    long double fpu_val_5_94 = item_60_1;
                    fpu_val_5_94 - fpu_val_3_32;

                    if (!(*(&((fpu_val_5_94 < fpu_val_3_32 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_5_94, fpu_val_3_32) ? 1 : 0) << 0xa
                            | (fpu_val_5_94 == fpu_val_3_32 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                        item_60_1 = fpu_val_3_32;
                }
            }

            item_60 = sqrtl(item_60_1) * 0.000195312503f;
            long double fpu_val_6_62 = 0.0f;
            long double f46_1 = item_60;
            fpu_val_6_62 - f46_1;

            if (*(&((fpu_val_6_62 < f46_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_62, f46_1) ? 1 : 0) << 0xa
                | (fpu_val_6_62 == f46_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_6_63 = 1.0f;
                long double f52_1 = item_60;
                fpu_val_6_63 - f52_1;

                if (*(&((fpu_val_6_63 < f52_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_63, f52_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_63 == f52_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    item_60 = 1.0f;
            }
            else
                item_60 = 0.0f;

            long double fpu_val_6_64 = item_20;
            long double fpu_val_5_95 = item_70;
            long double fpu_val_4_51 = item_30;
            float item_5c_2 =
                sqrtl(fpu_val_6_64 * fpu_val_6_64 + fpu_val_4_51 * fpu_val_4_51 + fpu_val_5_95 * fpu_val_5_95);
            float item_8c_3 = 1.0f / item_5c_2;
            long double fpu_val_4_55 = item_64;
            long double fpu_val_3_35 = item_68;
            long double fpu_val_2_36 = item_6c;
            float item_4c_2 =
                sqrtl(fpu_val_2_36 * fpu_val_2_36 + fpu_val_3_35 * fpu_val_3_35 + fpu_val_4_55 * fpu_val_4_55);
            long double fpu_val_4_59 = 1.0f / item_4c_2;
            item_6c = fpu_val_4_59 * item_6c;
            item_68 = fpu_val_4_59 * item_68;
            item_64 = fpu_val_4_59 * item_64;
            long double fpu_val_6_68 = (item_70 * item_8c_3 * item_64 + item_30 * item_8c_3 * item_68
                + fpu_val_6_64 * item_8c_3 * item_6c) * item_5c_2;
            float item_8c_4 = fpu_val_6_68;
            long double f55_1 = 0.0f;
            fpu_val_6_68 - f55_1;

            if (!(*(&((fpu_val_6_68 < f55_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_68, f55_1) ? 1 : 0) << 0xa
                | (fpu_val_6_68 == f55_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double fpu_val_6_69 = item_8c_4;
                long double f58_1 = item_4c_2;
                fpu_val_6_69 - f58_1;

                if (*(&((fpu_val_6_69 < f58_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_69, f58_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_69 == f58_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    item_6c = item_8c_4 * item_6c;
                    item_68 = item_8c_4 * item_68;
                    item_64 = item_8c_4 * item_64;
                    long double fpu_val_6_82 = item_64 + context[2] - g_57c258;
                    long double fpu_val_5_106 = item_68 + context[1] - g_57c254;
                    long double fpu_val_4_66 = item_6c + *context - g_57c250;
                    long double fpu_val_3_44 =
                        fpu_val_4_66 * fpu_val_4_66 + fpu_val_5_106 * fpu_val_5_106 + fpu_val_6_82 * fpu_val_6_82;
                    long double fpu_val_5_108 = item_7c_1;
                    fpu_val_5_108 - fpu_val_3_44;

                    if (!(*(&((fpu_val_5_108 < fpu_val_3_44 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_5_108, fpu_val_3_44) ? 1 : 0) << 0xa
                            | (fpu_val_5_108 == fpu_val_3_44 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                        item_7c_1 = fpu_val_3_44;
                }
            }

            item_7c = sqrtl(item_7c_1) * 0.000195312503f;
            long double fpu_val_6_88 = 0.0f;
            long double f57_1 = item_7c;
            fpu_val_6_88 - f57_1;

            if (*(&((fpu_val_6_88 < f57_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_88, f57_1) ? 1 : 0) << 0xa
                | (fpu_val_6_88 == f57_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_6_89 = 1.0f;
                long double f60_1 = item_7c;
                fpu_val_6_89 - f60_1;

                if (*(&((fpu_val_6_89 < f60_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_89, f60_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_89 == f60_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    item_7c = 1.0f;
            }
            else
                item_7c = 0.0f;

            long double fpu_val_6_90 = item_8;
            long double fpu_val_5_109 = item_78;
            long double fpu_val_4_68 = item_18;
            float item_5c_3 =
                sqrtl(fpu_val_6_90 * fpu_val_6_90 + fpu_val_4_68 * fpu_val_4_68 + fpu_val_5_109 * fpu_val_5_109);
            float item_8c_5 = 1.0f / item_5c_3;
            float item_24_6 = item_78 * item_8c_5;
            long double fpu_val_4_72 = item_1c;
            long double fpu_val_3_47 = item_c;
            long double fpu_val_2_47 = item_48;
            float item_4c_3 =
                sqrtl(fpu_val_2_47 * fpu_val_2_47 + fpu_val_3_47 * fpu_val_3_47 + fpu_val_4_72 * fpu_val_4_72);
            long double fpu_val_4_76 = 1.0f / item_4c_3;
            item_48 = fpu_val_4_76 * item_48;
            float item_44_1 = fpu_val_4_76 * item_c;
            float item_40_1 = fpu_val_4_76 * item_1c;
            long double fpu_val_6_94 = (item_24_6 * item_40_1 + item_18 * item_8c_5 * item_44_1
                + fpu_val_6_90 * item_8c_5 * item_48) * item_5c_3;
            float item_8c_6 = fpu_val_6_94;
            long double f62_1 = 0.0f;
            fpu_val_6_94 - f62_1;

            if (!(*(&((fpu_val_6_94 < f62_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_94, f62_1) ? 1 : 0) << 0xa
                | (fpu_val_6_94 == f62_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            {
                long double fpu_val_6_95 = item_8c_6;
                long double f65_1 = item_4c_3;
                fpu_val_6_95 - f65_1;

                if (*(&((fpu_val_6_95 < f65_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_95, f65_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_95 == f65_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double fpu_val_6_103 = item_8c_6 * item_40_1 + param_2[2] - g_57c258;
                    long double fpu_val_5_124 = item_8c_6 * item_44_1 + param_2[1] - g_57c254;
                    long double fpu_val_4_83 = item_8c_6 * item_48 + *param_2 - g_57c250;
                    float item_78_2 =
                        fpu_val_4_83 * fpu_val_4_83 + fpu_val_5_124 * fpu_val_5_124 + fpu_val_6_103 * fpu_val_6_103;
                    long double f68_1 = item_78_2;
                    fpu_val_7_5 - f68_1;

                    if (!(*(&((fpu_val_7_5 < f68_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_5, f68_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_5 == f68_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        fpu_val_7_5 = item_78_2;
                }
            }

            item_8c = sqrtl(fpu_val_7_5) * 0.000195312503f;
            long double fpu_val_7_9 = 0.0f;
            long double f64_1 = item_8c;
            fpu_val_7_9 - f64_1;

            if (*(&((fpu_val_7_9 < f64_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_9, f64_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f64_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                long double fpu_val_7_10 = 1.0f;
                long double f67_1 = item_8c;
                fpu_val_7_10 - f67_1;

                if (*(&((fpu_val_7_10 < f67_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_10, f67_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_10 == f67_1 ? 1 : 0) << 0xe) + 1) & 1)
                    item_8c = 1.0f;
            }
            else
                item_8c = 0.0f;
        }
        else
        {
            long double fpu_val_5_62 = fpu_val_5_44 + fpu_val_6_26;
            long double f28_1 = 1.0f;
            fpu_val_5_62 - f28_1;

            if (!(*(&((fpu_val_5_62 < f28_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_62, f28_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_62 == f28_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) || !entity_val)
                goto label_44abbc;
        }
    }
    else
    {
        long double fpu_val_6_19 = g_57c268;
        long double f3_1 = 0.0f;
        fpu_val_6_19 - f3_1;
        long double fpu_val_6_20 = g_57c268;

        if (*(&((fpu_val_6_19 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_19, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_6_19 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            fpu_val_6_20 = -(fpu_val_6_20);

        long double fpu_val_5_29 = g_57c260;
        long double f5_1 = 0.0f;
        fpu_val_5_29 - f5_1;
        long double fpu_val_5_30 = g_57c260;

        if (*(&((fpu_val_5_29 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_29, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_5_29 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            fpu_val_5_30 = -(fpu_val_5_30);

        fpu_val_6_20 - fpu_val_5_30;

        if (*(&((fpu_val_6_20 < fpu_val_5_30 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_20, fpu_val_5_30) ? 1 : 0) << 0xa
            | (fpu_val_6_20 == fpu_val_5_30 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double fpu_val_6_25 = item_64 * item_84 - item_68 * item_80;
            long double f8_1 = 0.0f;
            fpu_val_6_25 - f8_1;

            if (*(&((fpu_val_6_25 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_25, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_25 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                entity_val = 0;

            long double fpu_val_5_36 = item_70 * item_84 - item_30 * item_80;
            fpu_val_6_26 = fpu_val_5_36 / fpu_val_5_36;
            long double f11_1 = 0.0f;
            fpu_val_6_26 - f11_1;
            long double f14_1;

            if (!(*(&((fpu_val_6_26 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_26, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_6_26 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                f14_1 = 1.0f;
                fpu_val_6_26 - f14_1;
            }

            if (*(&((fpu_val_6_26 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_26, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_26 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                    (fpu_val_6_26 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_26, f14_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_26 == f14_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                entity_val = 0;

            long double fpu_val_5_37 = item_84;
            long double f17_1 = 0.0f;
            fpu_val_5_37 - f17_1;
            long double fpu_val_5_38 = item_84;

            if (*(&((fpu_val_5_37 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_37, f17_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_37 == f17_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                fpu_val_5_38 = -(fpu_val_5_38);

            long double fpu_val_4_21 = item_80;
            long double f20_1 = 0.0f;
            fpu_val_4_21 - f20_1;
            long double fpu_val_4_22 = item_80;

            if (*(&((fpu_val_4_21 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_21, f20_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_21 == f20_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                fpu_val_4_22 = -(fpu_val_4_22);

            fpu_val_5_38 - fpu_val_4_22;

            if (!(*(&((fpu_val_5_38 < fpu_val_4_22 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_38, fpu_val_4_22) ? 1 : 0) << 0xa
                | (fpu_val_5_38 == fpu_val_4_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
            {
                fpu_val_5_44 = (item_30 - fpu_val_6_26 * item_68) / item_84;
                goto label_44aaa6;
            }

            long double fpu_val_5_45 = item_80;
            long double f23_1 = 0.0f;
            fpu_val_5_45 - f23_1;

            if (*(&((fpu_val_5_45 < f23_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_45, f23_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_45 == f23_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                goto label_44aa96;

            fpu_val_5_44 = (item_70 - fpu_val_6_26 * item_64) / item_80;
            goto label_44aaa6;
        }

        long double fpu_val_6_33 = item_68 * item_88 - item_6c * item_84;
        long double f7_1 = 0.0f;
        fpu_val_6_33 - f7_1;

        if (*(&((fpu_val_6_33 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_33, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_33 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
            entity_val = 0;

        long double fpu_val_5_67 = item_30 * item_88 - item_20 * item_84;
        fpu_val_6_26 = fpu_val_5_67 / fpu_val_5_67;
        long double f10_1 = 0.0f;
        fpu_val_6_26 - f10_1;
        long double f13_1;

        if (!(*(&((fpu_val_6_26 < f10_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_26, f10_1) ? 1 : 0) << 0xa
            | (fpu_val_6_26 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
        {
            f13_1 = 1.0f;
            fpu_val_6_26 - f13_1;
        }

        if (*(&((fpu_val_6_26 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_26, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_6_26 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1 || !(*(&(
                (fpu_val_6_26 < f13_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_26, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_6_26 == f13_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            entity_val = 0;

        long double fpu_val_5_68 = item_88;
        long double f16_1 = 0.0f;
        fpu_val_5_68 - f16_1;
        long double fpu_val_5_69 = item_88;

        if (*(&((fpu_val_5_68 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_68, f16_1) ? 1 : 0) << 0xa
                | (fpu_val_5_68 == f16_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            fpu_val_5_69 = -(fpu_val_5_69);

        long double fpu_val_4_31 = item_84;
        long double f19_1 = 0.0f;
        fpu_val_4_31 - f19_1;
        long double fpu_val_4_32 = item_84;

        if (*(&((fpu_val_4_31 < f19_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_31, f19_1) ? 1 : 0) << 0xa
                | (fpu_val_4_31 == f19_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
            fpu_val_4_32 = -(fpu_val_4_32);

        fpu_val_5_69 - fpu_val_4_32;

        if (*(&((fpu_val_5_69 < fpu_val_4_32 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_5_69, fpu_val_4_32) ? 1 : 0) << 0xa
            | (fpu_val_5_69 == fpu_val_4_32 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double fpu_val_5_75 = item_84;
            long double f22_1 = 0.0f;
            fpu_val_5_75 - f22_1;

            if (*(&((fpu_val_5_75 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_75, f22_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_75 == f22_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                entity_val = 0;

            fpu_val_5_44 = (item_30 - fpu_val_6_26 * item_68) / item_84;
        }
        else
            fpu_val_5_44 = (item_20 - fpu_val_6_26 * item_6c) / item_88;

        long double f25_1 = 0.0f;
        fpu_val_5_44 - f25_1;

        if (*(&((fpu_val_5_44 < f25_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_44, f25_1) ? 1 : 0) << 0xa
                | (fpu_val_5_44 == f25_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            goto label_44abbc;

        long double fpu_val_5_79 = fpu_val_5_44 + fpu_val_6_26;
        long double f27_1 = 1.0f;
        fpu_val_5_79 - f27_1;

        if (!(*(&((fpu_val_5_79 < f27_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_79, f27_1) ? 1 : 0) << 0xa
                | (fpu_val_5_79 == f27_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41) || !entity_val)
            goto label_44abbc;
    }
    long double fpu_val_7_14 = item_60 * 4505.6001f + 409.600006f;
    float item_78_3 = item_7c * 4505.6001f + 409.600006f;
    float item_18_1 = item_8c * 4505.6001f + 409.600006f;
    long double fpu_val_6_112 = fpu_val_7_14 * fpu_val_7_14;
    long double fpu_val_5_126 = item_38;
    fpu_val_5_126 - fpu_val_6_112;

    if (!(*(&((fpu_val_5_126 < fpu_val_6_112 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_5_126, fpu_val_6_112) ? 1 : 0) << 0xa
        | (fpu_val_5_126 == fpu_val_6_112 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
    label_44b1e0:
        Sys_AllocateMemory_14(0x57c230);
        long double fpu_val_7_22 = item_38;
        long double f29_1 = item_34;
        fpu_val_7_22 - f29_1;

        if (!(*(&((fpu_val_7_22 < f29_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_22, f29_1) ? 1 : 0) << 0xa
            | (fpu_val_7_22 == f29_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fpu_val_7_23 = item_38;
            long double f33_1 = item_3c;
            fpu_val_7_23 - f33_1;

            if (!(*(&((fpu_val_7_23 < f33_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_23, f33_1) ? 1 : 0) << 0xa
                | (fpu_val_7_23 == f33_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double fpu_val_7_24 = item_3c;
                long double f37 = item_34;
                fpu_val_7_24 - f37;
                long double fpu_val_7_33;

                if (!(*(&((fpu_val_7_24 < f37 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_24, f37) ? 1 : 0) << 0xa
                    | (fpu_val_7_24 == f37 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_7_39 = 1.0f - sqrtl(item_34) / sqrtl(item_38);
                    long double f42_1 = 0.5f;
                    fpu_val_7_39 - f42_1;
                    float item_78_5;

                    item_78_5 = *(&((fpu_val_7_39 < f42_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_39, f42_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_39 == f42_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : fpu_val_7_39;

                    fpu_val_7_33 = item_78_5 - Sys_AllocateMemory_14(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double fpu_val_7_29 = sqrtl(item_3c) / sqrtl(item_38);
                    long double f43_1 = 0.5f;
                    fpu_val_7_29 - f43_1;
                    float item_78_4;

                    item_78_4 = !(*(&((fpu_val_7_29 < f43_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_29, f43_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_29 == f43_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : fpu_val_7_29;

                    fpu_val_7_33 = Sys_AllocateMemory_14(0x57c230) * 0.100000001f + item_78_4;
                }

                item_48 = (*param_2 - *context) * fpu_val_7_33 + *context;
                float item_44_3 = (param_2[1] - context[1]) * fpu_val_7_33 + context[1];
                float item_40_3 = (param_2[2] - context[2]) * fpu_val_7_33 + context[2];
                Env_ActivateEntity_11(param_2, param_3, &item_48);
                return Env_ActivateEntity_11(&item_48, param_3, context);
            }
        }

        long double fpu_val_7_44 = item_34;
        long double f32_1 = item_38;
        fpu_val_7_44 - f32_1;

        if (!(*(&((fpu_val_7_44 < f32_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_44, f32_1) ? 1 : 0) << 0xa
            | (fpu_val_7_44 == f32_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fpu_val_7_45 = item_34;
            long double f36_1 = item_3c;
            fpu_val_7_45 - f36_1;

            if (!(*(&((fpu_val_7_45 < f36_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_45, f36_1) ? 1 : 0) << 0xa
                | (fpu_val_7_45 == f36_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double fpu_val_7_46 = item_38;
                long double f41 = item_3c;
                fpu_val_7_46 - f41;
                long double fpu_val_7_55;

                if (!(*(&((fpu_val_7_46 < f41 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_46, f41) ? 1 : 0) << 0xa
                    | (fpu_val_7_46 == f41 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_7_61 = 1.0f - sqrtl(item_3c) / sqrtl(item_34);
                    long double f49_1 = 0.5f;
                    fpu_val_7_61 - f49_1;
                    float item_78_7;

                    item_78_7 = *(&((fpu_val_7_61 < f49_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_61, f49_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_61 == f49_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : fpu_val_7_61;

                    fpu_val_7_55 = item_78_7 - Sys_AllocateMemory_14(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double fpu_val_7_51 = sqrtl(item_38) / sqrtl(item_34);
                    long double f50_1 = 0.5f;
                    fpu_val_7_51 - f50_1;
                    float item_78_6;

                    item_78_6 = !(*(&((fpu_val_7_51 < f50_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_51, f50_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_51 == f50_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : fpu_val_7_51;

                    fpu_val_7_55 = Sys_AllocateMemory_14(0x57c230) * 0.100000001f + item_78_6;
                }

                item_48 = (*param_3 - *param_2) * fpu_val_7_55 + *param_2;
                float item_44_4 = (param_3[1] - param_2[1]) * fpu_val_7_55 + param_2[1];
                float item_40_4 = (param_3[2] - param_2[2]) * fpu_val_7_55 + param_2[2];
                Env_ActivateEntity_11(param_3, context, &item_48);
                return Env_ActivateEntity_11(&item_48, context, param_2);
            }
        }

        long double fpu_val_7_66 = item_3c;
        long double f35_1 = item_38;
        fpu_val_7_66 - f35_1;

        if (!(*(&((fpu_val_7_66 < f35_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_66, f35_1) ? 1 : 0) << 0xa
            | (fpu_val_7_66 == f35_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fpu_val_7_67 = item_3c;
            long double f40_1 = item_34;
            fpu_val_7_67 - f40_1;

            if (!(*(&((fpu_val_7_67 < f40_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_67, f40_1) ? 1 : 0) << 0xa
                | (fpu_val_7_67 == f40_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double fpu_val_7_68 = item_34;
                long double f48 = item_38;
                fpu_val_7_68 - f48;
                long double fpu_val_7_77;

                if (!(*(&((fpu_val_7_68 < f48 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_68, f48) ? 1 : 0) << 0xa
                    | (fpu_val_7_68 == f48 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_7_83 = 1.0f - sqrtl(item_38) / sqrtl(item_3c);
                    long double f53_1 = 0.5f;
                    fpu_val_7_83 - f53_1;
                    float item_78_9;

                    item_78_9 = *(&((fpu_val_7_83 < f53_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_83, f53_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_83 == f53_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.5f
                        : fpu_val_7_83;

                    fpu_val_7_77 = item_78_9 - Sys_AllocateMemory_14(0x57c230) * 0.100000001f;
                }
                else
                {
                    long double fpu_val_7_73 = sqrtl(item_34) / sqrtl(item_3c);
                    long double f54_1 = 0.5f;
                    fpu_val_7_73 - f54_1;
                    float item_78_8;

                    item_78_8 = !(*(&((fpu_val_7_73 < f54_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_73, f54_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_73 == f54_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0.5f
                        : fpu_val_7_73;

                    fpu_val_7_77 = Sys_AllocateMemory_14(0x57c230) * 0.100000001f + item_78_8;
                }

                item_48 = (*context - *param_3) * fpu_val_7_77 + *param_3;
                float item_44_5 = (context[1] - param_3[1]) * fpu_val_7_77 + param_3[1];
                float item_40_5 = (context[2] - param_3[2]) * fpu_val_7_77 + param_3[2];
                Env_ActivateEntity_11(context, param_2, &item_48);
                return Env_ActivateEntity_11(&item_48, param_2, param_3);
            }
        }
    }
    else
    {
        long double fpu_val_7_17 = item_78_3 * item_78_3;
        long double f30_1 = item_34;
        fpu_val_7_17 - f30_1;

        if (*(&((fpu_val_7_17 < f30_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_17, f30_1) ? 1 : 0) << 0xa
                | (fpu_val_7_17 == f30_1 ? 1 : 0) << 0xe) + 1) & 1)
            goto label_44b1e0;

        long double fpu_val_7_19 = item_18_1 * item_18_1;
        long double f34_1 = item_3c;
        fpu_val_7_19 - f34_1;

        if (*(&((fpu_val_7_19 < f34_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f34_1) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == f34_1 ? 1 : 0) << 0xe) + 1) & 1)
            goto label_44b1e0;
    }

    int32_t data_14 = g_57c244;
    void* result;
    void* entity_28;

    if (!data_14)
    {
        long double fpu_val_7_147 = item_7c;
        long double f44_1 = item_8c;
        fpu_val_7_147 - f44_1;
        long double fpu_val_7_148;

        fpu_val_7_148 = !(*(&((fpu_val_7_147 < f44_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_147, f44_1) ? 1 : 0) << 0xa
            | (fpu_val_7_147 == f44_1 ? 1 : 0) << 0xe) + 1) & 1) ? item_8c : item_7c;

        long double fpu_val_6_190 = item_60;
        fpu_val_6_190 - fpu_val_7_148;
        float item_70_2;

        if (!(*(&((fpu_val_6_190 < fpu_val_7_148 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_190, fpu_val_7_148) ? 1 : 0) << 0xa
            | (fpu_val_6_190 == fpu_val_7_148 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double fpu_val_7_150 = item_7c;
            long double f56_1 = item_8c;
            fpu_val_7_150 - f56_1;

            item_70_2 = !(*(&((fpu_val_7_150 < f56_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_150, f56_1) ? 1 : 0) << 0xa
                | (fpu_val_7_150 == f56_1 ? 1 : 0) << 0xe) + 1) & 1) ? item_8c : item_7c;
        }
        else
            item_70_2 = item_60;

        result = g_57c25c;

        if (*(result + 0xb8) < 0x3e8)
        {
            float* entity_31 = g_57c27c + 0x24;
            float item_58_6 = (*context + *param_2 + *param_3) * 0.333333343f;
            float item_54_6 = (param_2[1] + context[1] + param_3[1]) * 0.333333343f;
            long double fpu_val_7_161 = param_2[2] + context[2] + param_3[2];
            *entity_31 = *context;
            entity_31[1] = context[1];
            entity_31[2] = context[2];
            float* data_48 = g_57c27c + 0x30;
            *data_48 = *param_2;
            data_48[1] = param_2[1];
            float item_50_3 = fpu_val_7_161 * 0.333333343f;
            data_48[2] = param_2[2];
            float* temp_34 = g_57c27c + 0x3c;
            *temp_34 = *param_3;
            temp_34[1] = param_3[1];
            temp_34[2] = param_3[2];
            item_78_3 = (Sys_AllocateMemory_14(0x57c230) + 1.0f - item_70_2) * 0.5f * 30.0f;
            *(g_57c27c + 0x48) = item_78_3;
            int32_t* data_52 = g_57c27c + 0x18;
            *data_52 = item_58_6;
            data_52[1] = item_54_6;
            data_52[2] = item_50_3;
            int32_t* temp_37 = g_57c228;
            int32_t* data_53 = g_57c27c;
            *data_53 = *temp_37;
            data_53[1] = temp_37[1];
            data_53[2] = temp_37[2];
            int32_t* data_54 = g_57c27c;
            data_54[3] = *data_54;
            data_54[4] = data_54[1];
            data_54[5] = data_54[2];
            long double fpu_val_7_167 = g_57c23c;
            long double f61_1 = 0.0f;
            fpu_val_7_167 - f61_1;

            if (*(&((fpu_val_7_167 < f61_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_167, f61_1) ? 1 : 0) << 0xa
                | (fpu_val_7_167 == f61_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *(g_57c27c + 0x4c) = 0;
                *(g_57c27c + 0x50) = 0;
                *(g_57c27c + 0x54) = 0;
            }
            else
            {
                *(g_57c27c + 0x4c) = item_58_6 - g_57c270;
                *(g_57c27c + 0x50) = item_54_6 - g_57c274;
                *(g_57c27c + 0x54) = item_50_3 - g_57c278;
                void* data_58 = g_57c27c;
                long double fpu_val_7_174 = *(data_58 + 0x54);
                long double fpu_val_6_193 = *(data_58 + 0x50);
                long double fpu_val_5_129 = *(data_58 + 0x4c);
                long double fpu_val_7_176 = g_57c23c / sqrtl(fpu_val_5_129 * fpu_val_5_129
                    + fpu_val_6_193 * fpu_val_6_193 + fpu_val_7_174 * fpu_val_7_174);
                *(data_58 + 0x4c) = *(data_58 + 0x4c) * fpu_val_7_176;
                void* data_59 = g_57c27c;
                *(data_59 + 0x50) = *(data_59 + 0x50) * fpu_val_7_176;
                void* data_60 = g_57c27c;
                *(data_60 + 0x54) = *(data_60 + 0x54) * fpu_val_7_176;
            }

            float* source_4 = g_57c27c + 0x4c;
            *source_4 = (Sys_AllocateMemory_14(0x57c230) * 4096.0f - 2048.0f) * 0.0333333351f + *source_4;
            float* source_5 = g_57c27c + 0x50;
            *source_5 = (Sys_AllocateMemory_14(0x57c230) * 4096.0f - 2048.0f) * 0.0333333351f + *source_5;
            float* source_6 = g_57c27c + 0x54;
            *source_6 = (Sys_AllocateMemory_14(0x57c230) * 4096.0f - 2048.0f) * 0.0333333351f + *source_6;
            *(g_57c27c + 0x5c) = 1;
            **&g_57c26c = g_57c27c + 0x24;
            *(g_57c26c + 4) = g_57c27c + 0x30;
            *(g_57c26c + 8) = g_57c27c + 0x3c;
            *(g_57c26c + 0xc) = g_57c27c + 0xc;
            *(g_57c26c + 0x10) = g_57c27c + 0xc;
            *(g_57c26c + 0x14) = g_57c27c + 0xc;
            *(g_57c26c + 0x48) = 0;
            *(g_57c26c + 0x4c) = 0;
            float* entity_52 = g_57c26c + 0x3c;
            *entity_52 = item_64 * item_84 - item_68 * item_80;
            entity_52[1] = -((item_64 * item_88 - item_6c * item_80));
            entity_52[2] = item_68 * item_88 - item_6c * item_84;
            entity_28 = g_57c26c;
            long double fpu_val_7_203 = *(entity_28 + 0x3c);
            long double f66_1 = 0.0f;
            fpu_val_7_203 - f66_1;

            if (*(&((fpu_val_7_203 < f66_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_203, f66_1) ? 1 : 0) << 0xa
                | (fpu_val_7_203 == f66_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                long double fpu_val_7_204 = *(entity_28 + 0x40);
                long double f69_1 = 0.0f;
                fpu_val_7_204 - f69_1;

                if (!(*(&((fpu_val_7_204 < f69_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_204, f69_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_204 == f69_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_44bceb;

                long double fpu_val_7_205 = *(entity_28 + 0x44);
                long double f71_1 = 0.0f;
                fpu_val_7_205 - f71_1;

                if (*(&((fpu_val_7_205 < f71_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_205, f71_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_205 == f71_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    goto label_44bd42;

                goto label_44bceb;
            }

        label_44bceb:
            long double fpu_val_7_206 = *(entity_28 + 0x44);
            long double fpu_val_6_207 = *(entity_28 + 0x40);
            long double fpu_val_5_131 = *(entity_28 + 0x3c);
            long double fpu_val_7_208 = 1.0 /
                sqrtl(fpu_val_5_131 * fpu_val_5_131 + fpu_val_6_207 * fpu_val_6_207 + fpu_val_7_206 * fpu_val_7_206);
            *(entity_28 + 0x3c) = *(entity_28 + 0x3c) * fpu_val_7_208;
            void* data_72 = g_57c26c;
            *(data_72 + 0x40) = *(data_72 + 0x40) * fpu_val_7_208;
            void* data_73 = g_57c26c;
            *(data_73 + 0x44) = *(data_73 + 0x44) * fpu_val_7_208;
            entity_28 = g_57c26c;
        label_44bd42:
            result = g_57c25c;
            g_57c27c += 0x60;
            g_57c26c = entity_28 + 0x50;
            *(result + 0xb8) += 1;
        }
    }
    else
    {
        result = data_14 - 1;

        if (data_14 == 1)
        {
            long double fpu_val_7_88 = item_7c;

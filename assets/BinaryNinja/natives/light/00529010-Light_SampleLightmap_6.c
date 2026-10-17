// Original IGI.EXE function: Light_SampleLightmap_6 (VA 0x00529010; static CFG gate FAIL, CFG score 0.733).
#include "Light_SampleLightmap_6.h"
float Light_SampleLightmap_6(void* context) {
    void* data_val = *(context + 0x108);
    char item_161 = 0;
    int32_t item_b8;
    memset(&item_b8, 0, 0x30);
    float item_13c;
    memset(&item_13c, 0, 0x18);
    void item_60;

    if (data_val < 0)
    {
        item_161 = 1;
        memcpy(&item_b8, context + 0x148, 0x18);
    }
    else
    {
        data_val = Script_ExecuteLevelScript_4(data_val);

        if (data_val)
        {
            int32_t entity_1 = 0;
            int32_t item_10_1 = 0;
            entity_1 = *(data_val + 0x1c);
            int32_t entity_2 = *((entity_1 << 2) + &g_a994e0);

            if (entity_2)
            {
                entity_2(data_val, &item_60);
                memcpy(&item_b8, &item_60, 0x18);
            }
        }
    }

    if (!*(context + 0x140) || !*(context + 0x19c))
    {
        *(context + 0x140) = 1;
        memcpy(context + 0x110, &item_b8, 0x18);
    }
    else
        memcpy(&item_b8, context + 0x110, 0x18);

    void* data_2 = *(context + 0x10c);

    if (data_2 >= 0)
    {
        data_2 = Script_ExecuteLevelScript_4(data_2);

        if (data_2)
        {
            int32_t entity_3 = 0;
            int32_t item_10_2 = 0;
            entity_3 = *(data_2 + 0x1c);
            int32_t entity_4 = *((entity_3 << 2) + &g_a994e0);

            if (entity_4)
            {
                entity_4(data_2, &item_60);
                memcpy(&item_13c, &item_60, 0x18);
            }
        }
    }

    int16_t data_3;
    data_3 = *(context + 0x141);

    if (!data_3)
    {
        *(context + 0x141) = 1;
        memcpy(context + 0x128, &item_13c, 0x18);
    }
    else
    {
        data_3 = *(context + 0x19d);

        if (!data_3)
        {
            *(context + 0x141) = 1;
            memcpy(context + 0x128, &item_13c, 0x18);
        }
        else
            memcpy(&item_13c, context + 0x128, 0x18);
    }

    float item_160 = item_13c - item_b8;
    int32_t item_134;
    int32_t item_b0;
    long double fpu_val_7_4 = item_134 - item_b0;
    int32_t item_12c;
    int32_t item_a8;
    float item_158 = item_12c - item_a8;
    long double fpu_val_6_7 = item_160;
    long double f1 = 0.0f;
    fpu_val_6_7 - f1;

    if (!(*(&((fpu_val_6_7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_7, f1) ? 1 : 0) << 0xa
        | (fpu_val_6_7 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_5292c9:
        long double fpu_val_6_10 = item_158;
        long double fpu_val_4_1 = item_160;
        long double fpu_val_6_12 =
            1.0 / sqrtl(fpu_val_4_1 * fpu_val_4_1 + fpu_val_7_4 * fpu_val_7_4 + fpu_val_6_10 * fpu_val_6_10);
        item_160 = item_160 * fpu_val_6_12;
        fpu_val_7_4 = fpu_val_7_4 * fpu_val_6_12;
        item_158 = item_158 * fpu_val_6_12;
    }
    else
    {
        long double f2_1 = 0.0f;
        fpu_val_7_4 - f2_1;
        long double fpu_val_6_8;
        long double f5_1;

        if (*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            fpu_val_6_8 = item_158;
            f5_1 = 0.0f;
            fpu_val_6_8 - f5_1;
        }

        if (!(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
            (fpu_val_6_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_6_8 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
            long double f4_1 = 0.0f;
            fpu_val_7_4 - f4_1;

            if (!(*(&((fpu_val_7_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5292c9;

            long double fpu_val_6_9 = item_158;
            long double f7_1 = 0.0f;
            fpu_val_6_9 - f7_1;

            if (!(*(&((fpu_val_6_9 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_9, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_9 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5292c9;
        }
        else
            item_160 = 1.0f;
    }

    long double fpu_val_6_17 = 0.0f;
    float item_168 = 0.0f;
    float item_14c_1 = 0.0f;
    float item_170 = fpu_val_7_4 - fpu_val_6_17;
    float item_154 = item_170;
    float item_16c = -((item_160 - fpu_val_6_17));
    float item_150_1 = item_16c;
    float item_ec = item_16c * item_158 - item_168 * fpu_val_7_4;
    item_13c = item_ec;
    float item_e8 = -((item_170 * item_158 - item_168 * item_160));
    float item_138_1 = item_e8;
    float item_e4 = item_170 * fpu_val_7_4 - item_16c * item_160;
    long double fpu_val_7_7 = item_170;
    long double f3 = 0.0f;
    fpu_val_7_7 - f3;
    float item_134_2 = item_e4;

    if (!(*(&((fpu_val_7_7 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f3 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_5293e8:
        long double fpu_val_7_10 = item_170;
        long double fpu_val_6_29 = item_168;
        long double fpu_val_5_19 = item_16c;
        long double fpu_val_7_12 =
            1.0 / sqrtl(fpu_val_5_19 * fpu_val_5_19 + fpu_val_6_29 * fpu_val_6_29 + fpu_val_7_10 * fpu_val_7_10);
        item_154 = item_170 * fpu_val_7_12;
        item_14c_1 = item_14c_1 * fpu_val_7_12;
    }
    else
    {
        long double fpu_val_7_8 = item_16c;
        long double f6_1 = 0.0f;
        fpu_val_7_8 - f6_1;

        if (!(*(&((fpu_val_7_8 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_5293e8;

        long double fpu_val_7_9 = item_168;
        long double f9_1 = 0.0f;
        fpu_val_7_9 - f9_1;

        if (!(*(&((fpu_val_7_9 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_5293e8;
    }

    long double fpu_val_7_14 = item_ec;
    long double f8 = 0.0f;
    fpu_val_7_14 - f8;

    if (!(*(&((fpu_val_7_14 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f8) ? 1 : 0) << 0xa
        | (fpu_val_7_14 == f8 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_529464:
        long double fpu_val_7_17 = item_e4;
        long double fpu_val_6_35 = item_e8;
        long double fpu_val_5_21 = item_ec;
        long double fpu_val_7_19 =
            1.0 / sqrtl(fpu_val_5_21 * fpu_val_5_21 + fpu_val_6_35 * fpu_val_6_35 + fpu_val_7_17 * fpu_val_7_17);
        item_13c = item_ec * fpu_val_7_19;
        item_134_2 = item_134_2 * fpu_val_7_19;
    }
    else
    {
        long double fpu_val_7_15 = item_e8;
        long double f10_1 = 0.0f;
        fpu_val_7_15 - f10_1;

        if (!(*(&((fpu_val_7_15 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_15, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_7_15 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_529464;

        long double fpu_val_7_16 = item_e4;
        long double f12_1 = 0.0f;
        fpu_val_7_16 - f12_1;

        if (!(*(&((fpu_val_7_16 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_16, f12_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_529464;
    }

    float data_7 = item_154;
    float temp_1 = item_13c;
    float item_e0;
    Sys_CloseFileStream_12(&item_e0, -1.57079637f);
    long double fpu_val_7_21 = item_154;
    long double f11 = 0.0f;
    fpu_val_7_21 - f11;
    float item_114 = data_7;
    float item_110 = item_160;
    long double fpu_val_7_27;

    if (!(*(&((fpu_val_7_21 < f11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f11) ? 1 : 0) << 0xa
        | (fpu_val_7_21 == f11 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_52953a:
        long double fpu_val_7_24 = item_13c;
        long double fpu_val_6_41 = item_160;
        long double fpu_val_5_23 = item_154;
        long double fpu_val_7_26 =
            1.0 / sqrtl(fpu_val_5_23 * fpu_val_5_23 + fpu_val_6_41 * fpu_val_6_41 + fpu_val_7_24 * fpu_val_7_24);
        item_114 = data_7 * fpu_val_7_26;
        item_110 = item_110 * fpu_val_7_26;
        fpu_val_7_27 = fpu_val_7_26 * temp_1;
    }
    else
    {
        long double fpu_val_7_22 = item_160;
        long double f13_1 = 0.0f;
        fpu_val_7_22 - f13_1;

        if (!(*(&((fpu_val_7_22 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_22, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_7_22 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_52953a;

        long double fpu_val_7_23 = item_13c;
        long double f15_1 = 0.0f;
        fpu_val_7_23 - f15_1;

        if (!(*(&((fpu_val_7_23 < f15_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_23, f15_1) ? 1 : 0) << 0xa
                | (fpu_val_7_23 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_52953a;

        fpu_val_7_27 = temp_1;
    }

    float item_170_1 = item_13c * item_158 - item_134_2 * item_160;
    float item_108 = item_170_1;
    item_16c = -((item_14c_1 * item_13c - item_154 * item_134_2));
    float item_104 = item_16c;
    float item_168_1 = item_14c_1 * item_160 - item_154 * item_158;
    item_154 = item_168_1 * item_110 - item_16c * fpu_val_7_27;
    float item_fc = item_154;
    float item_150_2 = -((item_168_1 * item_114 - item_170_1 * fpu_val_7_27));
    float item_f8 = item_150_2;
    float result_1 = item_16c * item_114 - item_170_1 * item_110;
    long double fpu_val_6_67 = item_170_1;
    long double f14 = 0.0f;
    fpu_val_6_67 - f14;
    float result = result_1;
    float result_2 = result;
    result = (fpu_val_6_67 < f14 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_67, f14) ? 1 : 0) << 0xa
        | (fpu_val_6_67 == f14 ? 1 : 0) << 0xe | 0x3800;
    long double fpu_val_6_73;

    if (!(*(&result + 1) & 0x40))
    {
    label_529678:
        long double fpu_val_6_70 = item_170_1;
        long double fpu_val_5_37 = item_16c;
        long double fpu_val_4_18 = item_168_1;
        long double fpu_val_6_72 =
            1.0 / sqrtl(fpu_val_4_18 * fpu_val_4_18 + fpu_val_5_37 * fpu_val_5_37 + fpu_val_6_70 * fpu_val_6_70);
        item_108 = item_170_1 * fpu_val_6_72;
        item_104 = item_104 * fpu_val_6_72;
        fpu_val_6_73 = fpu_val_6_72 * item_168_1;
    }
    else
    {
        long double fpu_val_6_68 = item_16c;
        long double f16_1 = 0.0f;
        fpu_val_6_68 - f16_1;
        result = (fpu_val_6_68 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_68, f16_1) ? 1 : 0) << 0xa
            | (fpu_val_6_68 == f16_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x40))
            goto label_529678;

        long double fpu_val_6_69 = item_168_1;
        long double f18_1 = 0.0f;
        fpu_val_6_69 - f18_1;
        result = (fpu_val_6_69 < f18_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_69, f18_1) ? 1 : 0) << 0xa
            | (fpu_val_6_69 == f18_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x40))
            goto label_529678;

        fpu_val_6_73 = item_168_1;
    }

    long double fpu_val_5_43 = item_154;
    long double f17 = 0.0f;
    fpu_val_5_43 - f17;
    result = (fpu_val_5_43 < f17 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_43, f17) ? 1 : 0) << 0xa
        | (fpu_val_5_43 == f17 ? 1 : 0) << 0xe | 0x3000;
    long double fpu_val_5_49;

    if (!(*(&result + 1) & 0x40))
    {
    label_5296f9:
        long double fpu_val_5_46 = result_1;
        long double fpu_val_4_20 = item_150_2;
        long double fpu_val_3_23 = item_154;
        long double fpu_val_5_48 =
            1.0 / sqrtl(fpu_val_3_23 * fpu_val_3_23 + fpu_val_4_20 * fpu_val_4_20 + fpu_val_5_46 * fpu_val_5_46);
        item_fc = item_154 * fpu_val_5_48;
        item_f8 = item_f8 * fpu_val_5_48;
        fpu_val_5_49 = fpu_val_5_48 * result_2;
    }
    else
    {
        long double fpu_val_5_44 = item_150_2;
        long double f19_1 = 0.0f;
        fpu_val_5_44 - f19_1;
        result = (fpu_val_5_44 < f19_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_44, f19_1) ? 1 : 0) << 0xa
            | (fpu_val_5_44 == f19_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x40))
            goto label_5296f9;

        long double fpu_val_5_45 = result_1;
        long double f20_1 = 0.0f;
        fpu_val_5_45 - f20_1;
        result = (fpu_val_5_45 < f20_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_45, f20_1) ? 1 : 0) << 0xa
            | (fpu_val_5_45 == f20_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x40))
            goto label_5296f9;

        fpu_val_5_49 = result_2;
    }

    float item_d4;
    float item_c8;
    item_13c = item_c8 * fpu_val_7_27 + item_d4 * item_110 + item_e0 * item_114;
    float item_130 = item_e0 * item_108 + item_d4 * item_104 + item_c8 * fpu_val_6_73;
    float item_dc;
    float item_d0;
    float item_c4;
    float item_12c_1 = item_dc * item_108 + item_d0 * item_104 + item_c4 * fpu_val_6_73;
    float item_d8;
    float item_cc;
    float item_c0;
    float item_128 = item_d8 * item_108 + item_cc * item_104 + item_c0 * fpu_val_6_73;
    float item_124 = item_c8 * fpu_val_5_49 + item_d4 * item_f8 + item_e0 * item_fc;
    float item_120 = item_c4 * fpu_val_5_49 + item_d0 * item_f8 + item_dc * item_fc;
    result = item_161;
    int32_t item_bc;
    int32_t item_118 = item_bc + 1;
    float item_11c = item_c0 * fpu_val_5_49 + item_cc * item_f8 + item_d8 * item_fc;
    int32_t item_a0;

    if (!result)
    {
        long double fpu_val_7_31 =
            (item_c4 * fpu_val_7_27 + item_d0 * item_110 + item_dc * item_114) * *(context + 0x150)
            + (item_c0 * fpu_val_7_27 + item_cc * item_110 + item_d8 * item_114) * *(context + 0x158);
        item_154 = fpu_val_7_31 + item_13c * *(context + 0x148);
        result_1 =
            item_12c_1 * *(context + 0x150) + item_128 * *(context + 0x158) + item_130 * *(context + 0x148);
        double item_144_1 =
            item_120 * *(context + 0x150) + item_11c * *(context + 0x158) + item_124 * *(context + 0x148);
        memcpy(&item_a0, &item_154, 0x18);
    }

    long double fpu_val_7_42 = item_b8 + item_a0;
    *(context + 0xd0) = 0x3f800000;
    memcpy(context + 0x8c, &item_13c, 0x28);
    item_a0 = fpu_val_7_42;
    int32_t item_98;
    item_98 = item_b0 + item_98;
    int32_t item_90;
    item_90 = item_a8 + item_90;
    long double fpu_val_7_48 = *(context + 0x160) + *(context + 0x148);
    memcpy(context + 0xb8, &item_a0, 0x18);
    *(context + 0x148) = fpu_val_7_48;
    *(context + 0x150) = *(context + 0x168) + *(context + 0x150);
    *(context + 0x158) = *(context + 0x170) + *(context + 0x158);
    return result;
}

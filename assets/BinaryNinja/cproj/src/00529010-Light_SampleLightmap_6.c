#include "gi_platform.h"
#include "00529010-Light_SampleLightmap_6.h"
float Light_SampleLightmap_6(void* a1) __location("valA")

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    char v_161 = 0;
    int32_t v_b8;
    __builtin_memset(&v_b8, 0, 0x30);
    float v_13c;
    __builtin_memset(&v_13c, 0, 0x18);
    char v_60;

    if (valA < 0)
    {
        v_161 = 1;
        memcpy(&v_b8, a1 + 0x148, 0x18);
    }
    else
    {
        valA = Script_ExecuteLevelScript_4(valA);

        if (valA)
        {
            int32_t objC1 = 0;
            int32_t v_10_1 = 0;
            objC1 = (*(int32_t*)(uintptr_t)(valA + 0x1c));
            int32_t objC2 = *((objC1 << 2) + &g_a994e0);

            if (objC2)
            {
                objC2(valA, &v_60);
                memcpy(&v_b8, &v_60, 0x18);
            }
        }
    }

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x140)) || !(*(int32_t*)(uintptr_t)(a1 + 0x19c)))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x140)) = 1;
        memcpy(a1 + 0x110, &v_b8, 0x18);
    }
    else
        memcpy(&v_b8, a1 + 0x110, 0x18);

    void* valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x10c));

    if (valA2 >= 0)
    {
        valA2 = Script_ExecuteLevelScript_4(valA2);

        if (valA2)
        {
            int32_t objC3 = 0;
            int32_t v_10_2 = 0;
            objC3 = *(valA2 + 0x1c);
            int32_t objC4 = *((objC3 << 2) + &g_a994e0);

            if (objC4)
            {
                objC4(valA2, &v_60);
                memcpy(&v_13c, &v_60, 0x18);
            }
        }
    }

    int16_t valA3;
    valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x141));

    if (!valA3)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x141)) = 1;
        memcpy(a1 + 0x128, &v_13c, 0x18);
    }
    else
    {
        valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x19d));

        if (!valA3)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x141)) = 1;
            memcpy(a1 + 0x128, &v_13c, 0x18);
        }
        else
            memcpy(&v_13c, a1 + 0x128, 0x18);
    }

    float v_160 = v_13c - v_b8;
    int32_t v_134;
    int32_t v_b0;
    long double x87_r7_4 = v_134 - v_b0;
    int32_t v_12c;
    int32_t v_a8;
    float v_158 = v_12c - v_a8;
    long double x87_r6_7 = v_160;
    long double f1 = 0.0f;
    x87_r6_7 - f1;

    if (!(*(&((x87_r6_7 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, f1) ? 1 : 0) << 0xa
        | (x87_r6_7 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_5292c9: ;
        long double x87_r6_10 = v_158;
        long double x87_r4_1 = v_160;
        long double x87_r6_12 =
            1.0 / sqrtl(x87_r4_1 * x87_r4_1 + x87_r7_4 * x87_r7_4 + x87_r6_10 * x87_r6_10);
        v_160 = v_160 * x87_r6_12;
        x87_r7_4 = x87_r7_4 * x87_r6_12;
        v_158 = v_158 * x87_r6_12;
    }
    else
    {
        long double f2_1 = 0.0f;
        x87_r7_4 - f2_1;
        long double x87_r6_8;
        long double f5_1;

        if (*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        {
            x87_r6_8 = v_158;
            f5_1 = 0.0f;
            x87_r6_8 - f5_1;
        }

        if (!(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
            (x87_r6_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, f5_1) ? 1 : 0) << 0xa
            | (x87_r6_8 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
            long double f4_1 = 0.0f;
            x87_r7_4 - f4_1;

            if (!(*(&((x87_r7_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5292c9;

            long double x87_r6_9 = v_158;
            long double f7_1 = 0.0f;
            x87_r6_9 - f7_1;

            if (!(*(&((x87_r6_9 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_9, f7_1) ? 1 : 0) << 0xa
                    | (x87_r6_9 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5292c9;
        }
        else
            v_160 = 1.0f;
    }

    long double x87_r6_17 = 0.0f;
    float v_168 = 0.0f;
    float v_14c_1 = 0.0f;
    float v_170 = x87_r7_4 - x87_r6_17;
    float v_154 = v_170;
    float v_16c = -((v_160 - x87_r6_17));
    float v_150_1 = v_16c;
    float v_ec = v_16c * v_158 - v_168 * x87_r7_4;
    v_13c = v_ec;
    float v_e8 = -((v_170 * v_158 - v_168 * v_160));
    float v_138_1 = v_e8;
    float v_e4 = v_170 * x87_r7_4 - v_16c * v_160;
    long double x87_r7_7 = v_170;
    long double f3 = 0.0f;
    x87_r7_7 - f3;
    float v_134_2 = v_e4;

    if (!(*(&((x87_r7_7 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f3) ? 1 : 0) << 0xa
        | (x87_r7_7 == f3 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_5293e8: ;
        long double x87_r7_10 = v_170;
        long double x87_r6_29 = v_168;
        long double x87_r5_19 = v_16c;
        long double x87_r7_12 =
            1.0 / sqrtl(x87_r5_19 * x87_r5_19 + x87_r6_29 * x87_r6_29 + x87_r7_10 * x87_r7_10);
        v_154 = v_170 * x87_r7_12;
        v_14c_1 = v_14c_1 * x87_r7_12;
    }
    else
    {
        long double x87_r7_8 = v_16c;
        long double f6_1 = 0.0f;
        x87_r7_8 - f6_1;

        if (!(*(&((x87_r7_8 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_5293e8;

        long double x87_r7_9 = v_168;
        long double f9_1 = 0.0f;
        x87_r7_9 - f9_1;

        if (!(*(&((x87_r7_9 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_5293e8;
    }

    long double x87_r7_14 = v_ec;
    long double f8 = 0.0f;
    x87_r7_14 - f8;

    if (!(*(&((x87_r7_14 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f8) ? 1 : 0) << 0xa
        | (x87_r7_14 == f8 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_529464: ;
        long double x87_r7_17 = v_e4;
        long double x87_r6_35 = v_e8;
        long double x87_r5_21 = v_ec;
        long double x87_r7_19 =
            1.0 / sqrtl(x87_r5_21 * x87_r5_21 + x87_r6_35 * x87_r6_35 + x87_r7_17 * x87_r7_17);
        v_13c = v_ec * x87_r7_19;
        v_134_2 = v_134_2 * x87_r7_19;
    }
    else
    {
        long double x87_r7_15 = v_e8;
        long double f10_1 = 0.0f;
        x87_r7_15 - f10_1;

        if (!(*(&((x87_r7_15 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_15, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_529464;

        long double x87_r7_16 = v_e4;
        long double f12_1 = 0.0f;
        x87_r7_16 - f12_1;

        if (!(*(&((x87_r7_16 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, f12_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_529464;
    }

    float valA7 = v_154;
    float tmpD1 = v_13c;
    float v_e0;
    Sys_CloseFileStream_12(&v_e0, -1.57079637.0f);
    long double x87_r7_21 = v_154;
    long double f11 = 0.0f;
    x87_r7_21 - f11;
    float v_114 = valA7;
    float v_110 = v_160;
    long double x87_r7_27;

    if (!(*(&((x87_r7_21 < f11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f11) ? 1 : 0) << 0xa
        | (x87_r7_21 == f11 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_52953a: ;
        long double x87_r7_24 = v_13c;
        long double x87_r6_41 = v_160;
        long double x87_r5_23 = v_154;
        long double x87_r7_26 =
            1.0 / sqrtl(x87_r5_23 * x87_r5_23 + x87_r6_41 * x87_r6_41 + x87_r7_24 * x87_r7_24);
        v_114 = valA7 * x87_r7_26;
        v_110 = v_110 * x87_r7_26;
        x87_r7_27 = x87_r7_26 * tmpD1;
    }
    else
    {
        long double x87_r7_22 = v_160;
        long double f13_1 = 0.0f;
        x87_r7_22 - f13_1;

        if (!(*(&((x87_r7_22 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, f13_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_52953a;

        long double x87_r7_23 = v_13c;
        long double f15_1 = 0.0f;
        x87_r7_23 - f15_1;

        if (!(*(&((x87_r7_23 < f15_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, f15_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_52953a;

        x87_r7_27 = tmpD1;
    }

    float v_170_1 = v_13c * v_158 - v_134_2 * v_160;
    float v_108 = v_170_1;
    v_16c = -((v_14c_1 * v_13c - v_154 * v_134_2));
    float v_104 = v_16c;
    float v_168_1 = v_14c_1 * v_160 - v_154 * v_158;
    v_154 = v_168_1 * v_110 - v_16c * x87_r7_27;
    float v_fc = v_154;
    float v_150_2 = -((v_168_1 * v_114 - v_170_1 * x87_r7_27));
    float v_f8 = v_150_2;
    float result_1 = v_16c * v_114 - v_170_1 * v_110;
    long double x87_r6_67 = v_170_1;
    long double f14 = 0.0f;
    x87_r6_67 - f14;
    float result = result_1;
    float result_2 = result;
    result = (x87_r6_67 < f14 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_67, f14) ? 1 : 0) << 0xa
        | (x87_r6_67 == f14 ? 1 : 0) << 0xe | 0x3800;
    long double x87_r6_73;

    if (!(*(&result + 1) & 0x40))
    {
    label_529678: ;
        long double x87_r6_70 = v_170_1;
        long double x87_r5_37 = v_16c;
        long double x87_r4_18 = v_168_1;
        long double x87_r6_72 =
            1.0 / sqrtl(x87_r4_18 * x87_r4_18 + x87_r5_37 * x87_r5_37 + x87_r6_70 * x87_r6_70);
        v_108 = v_170_1 * x87_r6_72;
        v_104 = v_104 * x87_r6_72;
        x87_r6_73 = x87_r6_72 * v_168_1;
    }
    else
    {
        long double x87_r6_68 = v_16c;
        long double f16_1 = 0.0f;
        x87_r6_68 - f16_1;
        result = (x87_r6_68 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_68, f16_1) ? 1 : 0) << 0xa
            | (x87_r6_68 == f16_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x40))
            goto label_529678;

        long double x87_r6_69 = v_168_1;
        long double f18_1 = 0.0f;
        x87_r6_69 - f18_1;
        result = (x87_r6_69 < f18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_69, f18_1) ? 1 : 0) << 0xa
            | (x87_r6_69 == f18_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x40))
            goto label_529678;

        x87_r6_73 = v_168_1;
    }

    long double x87_r5_43 = v_154;
    long double f17 = 0.0f;
    x87_r5_43 - f17;
    result = (x87_r5_43 < f17 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_43, f17) ? 1 : 0) << 0xa
        | (x87_r5_43 == f17 ? 1 : 0) << 0xe | 0x3000;
    long double x87_r5_49;

    if (!(*(&result + 1) & 0x40))
    {
    label_5296f9: ;
        long double x87_r5_46 = result_1;
        long double x87_r4_20 = v_150_2;
        long double x87_r3_23 = v_154;
        long double x87_r5_48 =
            1.0 / sqrtl(x87_r3_23 * x87_r3_23 + x87_r4_20 * x87_r4_20 + x87_r5_46 * x87_r5_46);
        v_fc = v_154 * x87_r5_48;
        v_f8 = v_f8 * x87_r5_48;
        x87_r5_49 = x87_r5_48 * result_2;
    }
    else
    {
        long double x87_r5_44 = v_150_2;
        long double f19_1 = 0.0f;
        x87_r5_44 - f19_1;
        result = (x87_r5_44 < f19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, f19_1) ? 1 : 0) << 0xa
            | (x87_r5_44 == f19_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x40))
            goto label_5296f9;

        long double x87_r5_45 = result_1;
        long double f20_1 = 0.0f;
        x87_r5_45 - f20_1;
        result = (x87_r5_45 < f20_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_45, f20_1) ? 1 : 0) << 0xa
            | (x87_r5_45 == f20_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x40))
            goto label_5296f9;

        x87_r5_49 = result_2;
    }

    float v_d4;
    float v_c8;
    v_13c = v_c8 * x87_r7_27 + v_d4 * v_110 + v_e0 * v_114;
    float v_130 = v_e0 * v_108 + v_d4 * v_104 + v_c8 * x87_r6_73;
    float v_dc;
    float v_d0;
    float v_c4;
    float v_12c_1 = v_dc * v_108 + v_d0 * v_104 + v_c4 * x87_r6_73;
    float v_d8;
    float v_cc;
    float v_c0;
    float v_128 = v_d8 * v_108 + v_cc * v_104 + v_c0 * x87_r6_73;
    float v_124 = v_c8 * x87_r5_49 + v_d4 * v_f8 + v_e0 * v_fc;
    float v_120 = v_c4 * x87_r5_49 + v_d0 * v_f8 + v_dc * v_fc;
    result = v_161;
    int32_t v_bc;
    int32_t v_118 = v_bc + 1;
    float v_11c = v_c0 * x87_r5_49 + v_cc * v_f8 + v_d8 * v_fc;
    int32_t v_a0;

    if (!result)
    {
        long double x87_r7_31 =
            (v_c4 * x87_r7_27 + v_d0 * v_110 + v_dc * v_114) * (*(int32_t*)(uintptr_t)(a1 + 0x150))
            + (v_c0 * x87_r7_27 + v_cc * v_110 + v_d8 * v_114) * (*(int32_t*)(uintptr_t)(a1 + 0x158));
        v_154 = x87_r7_31 + v_13c * (*(int32_t*)(uintptr_t)(a1 + 0x148));
        result_1 =
            v_12c_1 * (*(int32_t*)(uintptr_t)(a1 + 0x150)) + v_128 * (*(int32_t*)(uintptr_t)(a1 + 0x158)) + v_130 * (*(int32_t*)(uintptr_t)(a1 + 0x148));
        double v_144_1 =
            v_120 * (*(int32_t*)(uintptr_t)(a1 + 0x150)) + v_11c * (*(int32_t*)(uintptr_t)(a1 + 0x158)) + v_124 * (*(int32_t*)(uintptr_t)(a1 + 0x148));
        memcpy(&v_a0, &v_154, 0x18);
    }

    long double x87_r7_42 = v_b8 + v_a0;
    (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = 0x3f800000;
    memcpy(a1 + 0x8c, &v_13c, 0x28);
    v_a0 = x87_r7_42;
    int32_t v_98;
    v_98 = v_b0 + v_98;
    int32_t v_90;
    v_90 = v_a8 + v_90;
    long double x87_r7_48 = (*(int32_t*)(uintptr_t)(a1 + 0x160)) + (*(int32_t*)(uintptr_t)(a1 + 0x148));
    memcpy(a1 + 0xb8, &v_a0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = x87_r7_48;
    (*(int32_t*)(uintptr_t)(a1 + 0x150)) = (*(int32_t*)(uintptr_t)(a1 + 0x168)) + (*(int32_t*)(uintptr_t)(a1 + 0x150));
    (*(int32_t*)(uintptr_t)(a1 + 0x158)) = (*(int32_t*)(uintptr_t)(a1 + 0x170)) + (*(int32_t*)(uintptr_t)(a1 + 0x158));
    return result;
}

#include "Light_CalculateAttenuation_12.h"
float* Light_CalculateAttenuation_12(float* a1, float* a2, double* a3, int32_t* a4)

{
    float* result = a1;

    if (result[0x12b0])
    {
        double v_90 = *a3 - *(result + 0x4870);
        double v_88_1 = a3[1] - *(result + 0x4878);
        double v_80_1 = a3[2] - *(result + 0x4880) + 819200.0;
        Sys_FreeMemory_11(&v_90);
        float v_9c = v_90;
        float v_98_1 = v_88_1;
        float v_94_1 = v_80_1;
        float v_50[0xa];
        Sys_ResolveSymbol_12(&v_50, a4);
        float v_28[0xa];
        Sys_ResolveSymbol_12(&v_28, &v_9c);
        float v_cc;
        float v_c8;
        float v_c4;
        Sys_Atan2UndefinedInOrig(&v_50, &v_cc, &v_c4, &v_c8);
        float v_ac;
        float v_a8;
        float v_a0;
        Sys_Atan2UndefinedInOrig(&v_28, &v_ac, &v_a8, &v_a0);
        v_cc = v_cc - v_ac;
        float tmpD1 = v_cc;
        v_c4 = v_c4 - v_a8;
        float objC2 = v_c4;
        v_c8 = v_c8 - v_a0;
        float v_78;
        Sys_ReadFileBlock_12(&v_78, tmpD1, objC2, v_c8);
        float v_6c;
        float v_60;
        float v_d8_1 = v_78 * *a4 + v_60 * a4[2] + v_6c * a4[1];
        float v_c0_1 = v_d8_1;
        float v_74;
        float v_68;
        float v_5c;
        float v_d4_1 = v_74 * *a4 + v_5c * a4[2] + v_68 * a4[1];
        float v_70;
        float v_64;
        float v_58;
        float v_d0_1 = v_70 * *a4 + v_58 * a4[2] + v_64 * a4[1];
        long double x87_r7_29 = v_d8_1;
        long double f0_1 = 0f;
        x87_r7_29 - f0_1;
        float v_b8_1 = v_d0_1;
        long double x87_r7_35;

        if (!(*(&((x87_r7_29 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_29, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_29 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_52f58c:
            long double x87_r7_32 = v_d0_1;
            long double x87_r6_13 = v_d4_1;
            long double x87_r5_1 = v_d8_1;
            long double x87_r7_34 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_13 * x87_r6_13 + x87_r7_32 * x87_r7_32);
            v_c0_1 = v_d8_1 * x87_r7_34;
            x87_r7_35 = x87_r7_34 * v_d4_1;
        }
        else
        {
            long double x87_r7_30 = v_d4_1;
            long double f1_1 = 0f;
            x87_r7_30 - f1_1;

            if (!(*(&((x87_r7_30 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_30, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_30 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52f58c;

            long double x87_r7_31 = v_d0_1;
            long double f2_1 = 0f;
            x87_r7_31 - f2_1;

            if (!(*(&((x87_r7_31 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52f58c;

            x87_r7_35 = v_d4_1;
        }

        float v_b0_1 = x87_r7_35;
        float v_b4 = v_c0_1;
        float v_a4_1 = sqrtl(x87_r7_35 * x87_r7_35 + v_c0_1 * v_c0_1);
        Sys_CheckHeap_9(&v_b4);
        result = a2;
        *result = fabs0f(Sys_DispatchOpcode_9(v_b4)) * 81.1690216f;
        result[1] = v_a4_1 * 255f;
    }

    return result;
}

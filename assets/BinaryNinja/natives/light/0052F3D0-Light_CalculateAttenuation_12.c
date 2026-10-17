// Original IGI.EXE function: Light_CalculateAttenuation_12 (VA 0x0052F3D0; static CFG gate PASS, CFG score 1.000).
#include "Light_CalculateAttenuation_12.h"
float* Light_CalculateAttenuation_12(float* context, float* param_2, double* param_3, int32_t* param_4)

{
    float* result = context;

    if (result[0x12b0])
    {
        double item_90 = *param_3 - *(result + 0x4870);
        double item_88_1 = param_3[1] - *(result + 0x4878);
        double item_80_1 = param_3[2] - *(result + 0x4880) + 819200.0;
        Sys_FreeMemory_11(&item_90);
        float item_9c = item_90;
        float item_98_1 = item_88_1;
        float item_94_1 = item_80_1;
        float item_50[0xa];
        Sys_ResolveSymbol_12(&item_50, param_4);
        float item_28[0xa];
        Sys_ResolveSymbol_12(&item_28, &item_9c);
        float item_cc;
        float item_c8;
        float item_c4;
        Sys_Atan2UndefinedInOrig(&item_50, &item_cc, &item_c4, &item_c8);
        float item_ac;
        float item_a8;
        float item_a0;
        Sys_Atan2UndefinedInOrig(&item_28, &item_ac, &item_a8, &item_a0);
        item_cc = item_cc - item_ac;
        float temp_1 = item_cc;
        item_c4 = item_c4 - item_a8;
        float entity_2 = item_c4;
        item_c8 = item_c8 - item_a0;
        float item_78;
        Sys_ReadFileBlock_12(&item_78, temp_1, entity_2, item_c8);
        float item_6c;
        float item_60;
        float item_d8_1 = item_78 * *param_4 + item_60 * param_4[2] + item_6c * param_4[1];
        float item_c0_1 = item_d8_1;
        float item_74;
        float item_68;
        float item_5c;
        float item_d4_1 = item_74 * *param_4 + item_5c * param_4[2] + item_68 * param_4[1];
        float item_70;
        float item_64;
        float item_58;
        float item_d0_1 = item_70 * *param_4 + item_58 * param_4[2] + item_64 * param_4[1];
        long double fpu_val_7_29 = item_d8_1;
        long double f0_1 = 0.0f;
        fpu_val_7_29 - f0_1;
        float item_b8_1 = item_d0_1;
        long double fpu_val_7_35;

        if (!(*(&((fpu_val_7_29 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_29, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_29 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_52f58c:
            long double fpu_val_7_32 = item_d0_1;
            long double fpu_val_6_13 = item_d4_1;
            long double fpu_val_5_1 = item_d8_1;
            long double fpu_val_7_34 =
                1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_13 * fpu_val_6_13 + fpu_val_7_32 * fpu_val_7_32);
            item_c0_1 = item_d8_1 * fpu_val_7_34;
            fpu_val_7_35 = fpu_val_7_34 * item_d4_1;
        }
        else
        {
            long double fpu_val_7_30 = item_d4_1;
            long double f1_1 = 0.0f;
            fpu_val_7_30 - f1_1;

            if (!(*(&((fpu_val_7_30 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_30, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_30 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52f58c;

            long double fpu_val_7_31 = item_d0_1;
            long double f2_1 = 0.0f;
            fpu_val_7_31 - f2_1;

            if (!(*(&((fpu_val_7_31 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52f58c;

            fpu_val_7_35 = item_d4_1;
        }

        float item_b0_1 = fpu_val_7_35;
        float item_b4 = item_c0_1;
        float item_a4_1 = sqrtl(fpu_val_7_35 * fpu_val_7_35 + item_c0_1 * item_c0_1);
        Sys_CheckHeap_9(&item_b4);
        result = param_2;
        *result = fabs0f(Sys_DispatchOpcode_9(item_b4)) * 81.1690216f;
        result[1] = item_a4_1 * 255.0f;
    }

    return result;
}

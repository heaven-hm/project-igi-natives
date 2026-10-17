// Original IGI.EXE function: Script_ParseEnumInt32_31 (VA 0x004FE210; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_31.h"
int32_t Script_ParseEnumInt32_31(void* context, int32_t param_2, int32_t* param_3, float param_4, float param_5, float param_6, int32_t param_7, int32_t param_8, int32_t param_9, int32_t param_10, int16_t param_11, int32_t param_12)

{
    float item_84 = *param_3;
    long double fpu7 = item_84;
    long double f1 = 0.0f;
    fpu7 - f1;
    float item_80 = param_3[1];
    float item_7c = param_3[2];

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4fe264:
        long double fpu_val_7_3 = item_7c;
        long double fpu_val_6_1 = item_80;
        long double fpu_val_5_1 = item_84;
        long double fpu_val_7_5 =
            1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_3 * fpu_val_7_3);
        item_84 = item_84 * fpu_val_7_5;
        item_80 = item_80 * fpu_val_7_5;
        item_7c = item_7c * fpu_val_7_5;
    }
    else
    {
        long double fpu_val_7_1 = item_80;
        long double f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;

        if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe264;

        long double fpu_val_7_2 = item_7c;
        long double f4_1 = 0.0f;
        fpu_val_7_2 - f4_1;

        if (!(*(&((fpu_val_7_2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe264;
    }

    long double fpu_val_7_8 = 1.0f;
    long double fpu_val_6_9 = 0.0f;
    long double fpu_val_5_4 = fabsl(item_84);
    long double f3 = 0.75;
    fpu_val_5_4 - f3;

    if (!(*(&((fpu_val_5_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_4, f3) ? 1 : 0) << 0xa
        | (fpu_val_5_4 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        fpu_val_7_8 = 0.0f;
        fpu_val_6_9 = 1.0f;
    }

    float item_78 = fpu_val_6_9 * item_7c;
    float item_6c = item_78;
    float item_74 = -((fpu_val_7_8 * item_7c));
    float item_68 = item_74;
    float item_70 = fpu_val_7_8 * item_80 - fpu_val_6_9 * item_84;
    long double fpu_val_7_12 = item_78;
    long double f5 = 0.0f;
    fpu_val_7_12 - f5;
    float item_64 = item_70;

    if (!(*(&((fpu_val_7_12 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_12 == f5 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4fe350:
        long double fpu_val_7_15 = item_70;
        long double fpu_val_6_15 = item_74;
        long double fpu_val_5_10 = item_78;
        long double fpu_val_7_17 =
            1.0 / sqrtl(fpu_val_5_10 * fpu_val_5_10 + fpu_val_6_15 * fpu_val_6_15 + fpu_val_7_15 * fpu_val_7_15);
        item_6c = item_78 * fpu_val_7_17;
        item_68 = item_68 * fpu_val_7_17;
        item_64 = item_64 * fpu_val_7_17;
    }
    else
    {
        long double fpu_val_7_13 = item_74;
        long double f6_1 = 0.0f;
        fpu_val_7_13 - f6_1;

        if (!(*(&((fpu_val_7_13 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_13 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe350;

        long double fpu_val_7_14 = item_70;
        long double f8_1 = 0.0f;
        fpu_val_7_14 - f8_1;

        if (!(*(&((fpu_val_7_14 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_7_14 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe350;
    }

    float item_60 = item_68 * item_7c - item_64 * item_80;
    float item_5c = -((item_6c * item_7c - item_64 * item_84));
    float item_58 = item_6c * item_80 - item_68 * item_84;
    float item_54 = Sys_AllocateMemory_14(0xa7a4c0) * param_4;
    int32_t entity_2;
    long double fp0_1;
    fp0_1 = Sys_AllocateMemory_14(0xa7a4c0);
    int32_t item_90 = entity_2;
    float item_28;
    Sys_ReadFileBlock_12(&item_28, param_4 * 0.5f - item_54, 0.0f, 3.14159274f - fp0_1 * 6.28318548f);
    int32_t item_4;
    int32_t item_2c = item_4 + 2;
    float item_20;
    float item_14;
    float item_8;
    float item_48 = item_20 * item_60 + item_14 * item_6c + item_8 * item_84;
    float item_3c = item_20 * item_5c + item_14 * item_68 + item_8 * item_80;
    float item_30 = item_20 * item_58 + item_14 * item_64 + item_8 * item_7c;
    long double fp0_2 = Sys_AllocateMemory_14(0xa7a4c0);
    item_78 = item_48;
    float item_74_1 = item_3c;
    long double fpu_val_7_51 = fp0_2 * (param_6 - param_5) + param_5;
    long double fpu_val_6_45 = item_30;
    long double fpu_val_5_12 = item_48;
    long double f7 = 0.0f;
    fpu_val_5_12 - f7;

    if (!(*(&((fpu_val_5_12 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_12, f7) ? 1 : 0) << 0xa
        | (fpu_val_5_12 == f7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4fe521:
        long double fpu_val_6_47 = item_30;
        long double fpu_val_5_15 = item_3c;
        long double fpu_val_4_11 = item_48;
        long double fpu_val_6_49 =
            1.0 / sqrtl(fpu_val_4_11 * fpu_val_4_11 + fpu_val_5_15 * fpu_val_5_15 + fpu_val_6_47 * fpu_val_6_47);
        item_78 = item_48 * fpu_val_6_49;
        item_74_1 = item_3c * fpu_val_6_49;
        fpu_val_6_45 = fpu_val_6_49 * item_30;
    }
    else
    {
        long double fpu_val_5_13 = item_3c;
        long double f9_1 = 0.0f;
        fpu_val_5_13 - f9_1;

        if (!(*(&((fpu_val_5_13 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_13, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_5_13 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4fe521;

        long double fpu_val_5_14 = item_30;
        long double f10_1 = 0.0f;
        fpu_val_5_14 - f10_1;

        if (!(*(&((fpu_val_5_14 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_14, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_5_14 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4fe521;
    }

    item_78 = item_78 * fpu_val_7_51;
    float item_74_2 = item_74_1 * fpu_val_7_51;
    float item_70_1 = fpu_val_6_45 * fpu_val_7_51;
    return Script_SpawnNewTask_31(context, param_2, &item_78, param_7, param_8, param_9, param_10, param_11, param_12);
}

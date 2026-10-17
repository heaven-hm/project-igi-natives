// Original IGI.EXE function: Wheel_FrictionDrive (VA 0x00430960; static CFG gate PASS, CFG score 1.000).
#include "Wheel_FrictionDrive.h"
void* Wheel_FrictionDrive(float* context, float* param_2, float* param_3, float* param_4, float param_5, float param_6, float param_7)

{
    float item_7c = *context * 44.6008873f * param_4[2];
    float item_4c = *param_2 * *param_3 + param_3[1] * param_2[1] + param_3[2] * param_2[2];
    long double fpu_val_7_8 = param_2[5] * param_3[2];
    long double fpu_val_6_5 = param_2[3] * *param_3;
    float item_34 = item_4c;
    float item_30 = fpu_val_7_8 + fpu_val_6_5 + param_2[4] * param_3[1];
    float item_2c = param_3[2] * param_2[8] + param_3[1] * param_2[7] + *param_3 * param_2[6];
    float item_58;
    SoundSys_SetMasterVolume_17(&item_58, context, &item_34);
    float item_54;
    float item_50;
    long double fpu_val_7_18 = item_50 * param_4[2] + item_54 * param_4[1] + item_58 * *param_4;
    long double fpu_val_7_21 = *param_4 * fpu_val_7_18 - item_58;
    long double fpu_val_6_23 = param_4[1] * fpu_val_7_18 - item_54;
    long double fpu_val_5_1 = param_4[2] * fpu_val_7_18 - item_50;
    float item_74 = sqrtl(fpu_val_7_21 * fpu_val_7_21 + fpu_val_6_23 * fpu_val_6_23 + fpu_val_5_1 * fpu_val_5_1);
    long double f1 = 0.0f;
    fpu_val_7_21 - f1;

    if (!(*(&((fpu_val_7_21 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_21 == f1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
    {
    label_430ac5:
        long double fpu_val_4_5 = 1.0 / item_74;
        fpu_val_7_21 = fpu_val_7_21 * fpu_val_4_5;
        fpu_val_6_23 = fpu_val_6_23 * fpu_val_4_5;
        fpu_val_5_1 = fpu_val_5_1 * fpu_val_4_5;
    }
    else
    {
        long double f2_1 = 0.0f;
        fpu_val_6_23 - f2_1;

        if (!(*(&((fpu_val_6_23 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_23, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_6_23 == f2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_430ac5;

        long double f4_1 = 0.0f;
        fpu_val_5_1 - f4_1;

        if (!(*(&((fpu_val_5_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_1, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_5_1 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_430ac5;
    }

    float item_64 = fpu_val_6_23 * param_2[3] + fpu_val_7_21 * *param_2 + fpu_val_5_1 * param_2[6];
    float item_60 = fpu_val_6_23 * param_2[4] + fpu_val_5_1 * param_2[7] + fpu_val_7_21 * param_2[1];
    float item_5c = fpu_val_6_23 * param_2[5] + fpu_val_7_21 * param_2[2] + fpu_val_5_1 * param_2[8];
    float item_28;
    Sys_DispatchOpcode_12(&item_28, param_5);
    float item_24;
    float item_20;
    item_4c = item_20 * item_5c + item_24 * item_60 + item_28 * item_64;
    float item_70_2 = item_4c;
    float item_10;
    float item_c;
    float item_8;
    float item_44_1 = item_8 * item_5c + item_c * item_60 + item_10 * item_64;
    long double fpu_val_7_39 = item_4c * param_6;
    float item_1c;
    float item_18;
    float item_14;
    long double fpu_val_6_40 = (item_14 * item_5c + item_18 * item_60 + item_1c * item_64) * param_7;
    float item_64_1 = item_10 * item_44_1 + item_1c * fpu_val_6_40 + item_28 * fpu_val_7_39;
    float item_70_3 = item_64_1;
    float item_60_1 = item_c * item_44_1 + item_18 * fpu_val_6_40 + item_24 * fpu_val_7_39;
    float item_5c_1 = item_8 * item_44_1 + item_14 * fpu_val_6_40 + item_20 * fpu_val_7_39;
    long double fpu_val_7_43 = item_7c * 4.0f / *context;
    long double f3 = item_74;
    fpu_val_7_43 - f3;
    long double fpu_val_7_44 = item_64_1;
    float item_70_4;
    float item_6c_4;
    long double fpu_val_7_52;

    if (!(*(&((fpu_val_7_43 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_43, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_43 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        item_70_4 = fpu_val_7_44 * item_74 * *context * 0.100000001f;
        item_6c_4 = item_74 * item_60_1 * *context * 0.100000001f;
        fpu_val_7_52 = item_74 * item_5c_1 * *context * 0.100000001f;
    }
    else
    {
        item_70_4 = fpu_val_7_44 * item_7c * 0.239999995f;
        item_6c_4 = item_60_1 * item_7c * 0.239999995f;
        fpu_val_7_52 = item_5c_1 * item_7c * 0.239999995f;
    }

    item_4c = item_70_4;
    float item_48_2 = item_6c_4;
    float item_40 = *param_3;
    float item_44_2 = fpu_val_7_52;
    int32_t item_3c = param_3[1];
    int32_t item_38 = param_3[2];
    return ForceAccumulator_Add(context, &item_4c);
}

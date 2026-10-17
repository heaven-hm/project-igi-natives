// Original IGI.EXE function: Terrain_UpdateWaterWaves_10 (VA 0x0051A4A0; static CFG gate FAIL, CFG score 0.833).
#include "Terrain_UpdateWaterWaves_10.h"
float* Terrain_UpdateWaterWaves_10(float context, float* param_2, float param_3, float param_4)

{
    char item_75;
    float item_74;
    float item_6c;
    Sys_CloseFileStream_13(&item_75, &item_74, &item_6c, *(context + (param_3 << 2) + 0x68) + 0x60,
        *(context + (param_3 << 2) + 0x6c) + 0x60);
    int16_t data_3;
    data_3 = item_75;
    float item_50;
    float item_4c;
    float item_48;
    float item_44;

    if (!data_3)
        memcpy(&item_50, *(context + (param_3 << 2) + 0x6c) + 0x60, 0x14);
    else
    {
        void* data_4 = *(context + (param_3 << 2) + 0x6c);
        item_50 = -(*(data_4 + 0x60));
        item_4c = -(*(data_4 + 0x64));
        item_48 = -(*(data_4 + 0x68));
        item_44 = -(*(data_4 + 0x6c));
    }

    long double fpu_val_7_9 = item_74;
    long double f1 = 0.0f;
    fpu_val_7_9 - f1;
    float item_3c;
    float item_38;
    float item_34;
    long double fpu_val_7_10;

    if (!(*(&((fpu_val_7_9 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_9 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_11 = item_74;
        long double f2_1 = 0.00999999978f;
        fpu_val_7_11 - f2_1;
        long double fpu_val_6_1;
        long double fpu_val_7_13;

        if (!(*(&((fpu_val_7_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            float item_70_1 = item_74 * param_4;
            long double fp0_1;
            bool c1_1;
            bool c2_2;
            fp0_1 = __fsin(item_74 - item_70_1);
            fpu_val_7_13 = fp0_1 * item_6c;
            long double fp0_2;
            bool c1_2;
            bool c2_3;
            fp0_2 = __fsin(item_70_1);
            fpu_val_6_1 = fp0_2 * item_6c;
        }
        else
        {
            fpu_val_7_13 = 1.0f - param_4;
            fpu_val_6_1 = param_4;
        }

        void* data_5 = *(context + (param_3 << 2) + 0x68);
        item_3c = fpu_val_7_13 * *(data_5 + 0x60) + fpu_val_6_1 * item_50;
        item_38 = fpu_val_7_13 * *(data_5 + 0x64) + fpu_val_6_1 * item_4c;
        item_34 = fpu_val_7_13 * *(data_5 + 0x68) + fpu_val_6_1 * item_48;
        fpu_val_7_10 = fpu_val_7_13 * *(data_5 + 0x6c) + fpu_val_6_1 * item_44;
    }
    else
    {
        memcpy(&item_3c, *(context + (param_3 << 2) + 0x68) + 0x60, 0x14);
        float item_30;
        fpu_val_7_10 = item_30;
    }

    long double fpu_val_6_9 = fpu_val_7_10 * item_38;
    long double fpu_val_5_11 = item_34 * item_3c;
    float item_20 = fpu_val_6_9 + fpu_val_6_9 + fpu_val_5_11 + fpu_val_5_11;
    long double fpu_val_6_13 = item_34 * item_38;
    long double fpu_val_6_16 = fpu_val_7_10 * item_3c;
    float item_14 = fpu_val_6_13 + fpu_val_6_13 - (fpu_val_6_16 + fpu_val_6_16);
    long double fpu_val_7_24 = item_3c * item_3c;
    long double fpu_val_6_19 = item_38 * item_38;
    float item_8 = 1.0f - (fpu_val_7_24 + fpu_val_7_24) - (fpu_val_6_19 + fpu_val_6_19);
    float* data_6 = SplinePathDynCubeObj_Process(&item_3c, context, param_3, param_4);
    long double fpu_val_7_28 = *data_6;
    long double f3 = 0.0f;
    fpu_val_7_28 - f3;
    float item_60 = data_6[2];
    float item_64 = data_6[1];

    if (!(*(&((fpu_val_7_28 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_28, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_28 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a696:
        long double fpu_val_6_23 = item_60;
        long double fpu_val_5_13 = item_64;
        long double fpu_val_6_25 =
            1.0 / sqrtl(fpu_val_7_28 * fpu_val_7_28 + fpu_val_5_13 * fpu_val_5_13 + fpu_val_6_23 * fpu_val_6_23);
        fpu_val_7_28 = fpu_val_7_28 * fpu_val_6_25;
        item_64 = item_64 * fpu_val_6_25;
        item_60 = item_60 * fpu_val_6_25;
    }
    else
    {
        long double fpu_val_6_21 = item_64;
        long double f4_1 = 0.0f;
        fpu_val_6_21 - f4_1;

        if (!(*(&((fpu_val_6_21 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_21, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_6_21 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a696;

        long double fpu_val_6_22 = item_60;
        long double f6_1 = 0.0f;
        fpu_val_6_22 - f6_1;

        if (!(*(&((fpu_val_6_22 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_22, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_6_22 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a696;
    }

    item_50 = item_64 * item_8 - item_60 * item_14;
    float item_5c = item_50;
    float item_4c_1 = -((fpu_val_7_28 * item_8 - item_60 * item_20));
    float item_58 = item_4c_1;
    float item_48_1 = fpu_val_7_28 * item_14 - item_64 * item_20;
    long double fpu_val_6_40 = item_50;
    long double f5 = 0.0f;
    fpu_val_6_40 - f5;
    long double fpu_val_6_46;

    if (!(*(&((fpu_val_6_40 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_40, f5) ? 1 : 0) << 0xa
        | (fpu_val_6_40 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a765:
        long double fpu_val_6_43 = item_48_1;
        long double fpu_val_5_25 = item_4c_1;
        long double fpu_val_4_9 = item_50;
        long double fpu_val_6_45 =
            1.0 / sqrtl(fpu_val_4_9 * fpu_val_4_9 + fpu_val_5_25 * fpu_val_5_25 + fpu_val_6_43 * fpu_val_6_43);
        item_5c = item_50 * fpu_val_6_45;
        item_58 = item_58 * fpu_val_6_45;
        fpu_val_6_46 = fpu_val_6_45 * item_48_1;
    }
    else
    {
        long double fpu_val_6_41 = item_4c_1;
        long double f7_1 = 0.0f;
        fpu_val_6_41 - f7_1;

        if (!(*(&((fpu_val_6_41 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_41, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_41 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a765;

        long double fpu_val_6_42 = item_48_1;
        long double f9_1 = 0.0f;
        fpu_val_6_42 - f9_1;

        if (!(*(&((fpu_val_6_42 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_42, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_6_42 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a765;

        fpu_val_6_46 = item_48_1;
    }

    item_50 = item_58 * item_60 - fpu_val_6_46 * item_64;
    item_3c = item_50;
    float item_4c_2 = -((item_5c * item_60 - fpu_val_6_46 * fpu_val_7_28));
    float item_38_1 = item_4c_2;
    float item_48_2 = item_5c * item_64 - item_58 * fpu_val_7_28;
    long double fpu_val_5_41 = item_50;
    long double f8 = 0.0f;
    fpu_val_5_41 - f8;
    long double fpu_val_5_47;

    if (!(*(&((fpu_val_5_41 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_41, f8) ? 1 : 0) << 0xa
        | (fpu_val_5_41 == f8 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_51a834:
        long double fpu_val_5_44 = item_48_2;
        long double fpu_val_4_17 = item_4c_2;
        long double fpu_val_3_11 = item_50;
        long double fpu_val_5_46 =
            1.0 / sqrtl(fpu_val_3_11 * fpu_val_3_11 + fpu_val_4_17 * fpu_val_4_17 + fpu_val_5_44 * fpu_val_5_44);
        item_3c = item_50 * fpu_val_5_46;
        item_38_1 = item_38_1 * fpu_val_5_46;
        fpu_val_5_47 = fpu_val_5_46 * item_48_2;
    }
    else
    {
        long double fpu_val_5_42 = item_4c_2;
        long double f10_1 = 0.0f;
        fpu_val_5_42 - f10_1;

        if (!(*(&((fpu_val_5_42 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_42, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_5_42 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_51a834;

        long double fpu_val_5_43 = item_48_2;
        long double f11_1 = 0.0f;
        fpu_val_5_43 - f11_1;

        if (!(*(&((fpu_val_5_43 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_43, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_5_43 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_51a834;

        fpu_val_5_47 = item_48_2;
    }

    float temp_4 = item_64;
    *param_2 = item_5c;
    param_2[6] = fpu_val_6_46;
    param_2[3] = item_58;
    param_2[1] = fpu_val_7_28;
    param_2[4] = temp_4;
    float temp_5 = item_3c;
    param_2[8] = fpu_val_5_47;
    param_2[7] = item_60;
    param_2[2] = temp_5;
    param_2[5] = item_38_1;
    return param_2;
}

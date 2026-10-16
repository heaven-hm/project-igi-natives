#include "gi_platform.h"
#include "00430960-Wheel_FrictionDrive.h"
void* Wheel_FrictionDrive(float* a1, float* a2, float* a3, float* a4, float a5, float a6, float a7)

{
    float v_7c = *a1 * 44.6008873.0f * a4[2];
    float v_4c = *a2 * *a3 + a3[1] * a2[1] + a3[2] * a2[2];
    long double x87_r7_8 = a2[5] * a3[2];
    long double x87_r6_5 = a2[3] * *a3;
    float v_34 = v_4c;
    float v_30 = x87_r7_8 + x87_r6_5 + a2[4] * a3[1];
    float v_2c = a3[2] * a2[8] + a3[1] * a2[7] + *a3 * a2[6];
    float v_58;
    SoundSys_SetMasterVolume_17(&v_58, a1, &v_34);
    float v_54;
    float v_50;
    long double x87_r7_18 = v_50 * a4[2] + v_54 * a4[1] + v_58 * *a4;
    long double x87_r7_21 = *a4 * x87_r7_18 - v_58;
    long double x87_r6_23 = a4[1] * x87_r7_18 - v_54;
    long double x87_r5_1 = a4[2] * x87_r7_18 - v_50;
    float v_74 = sqrtl(x87_r7_21 * x87_r7_21 + x87_r6_23 * x87_r6_23 + x87_r5_1 * x87_r5_1);
    long double f1 = 0.0f;
    x87_r7_21 - f1;

    if (!(*(&((x87_r7_21 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f1) ? 1 : 0) << 0xa
        | (x87_r7_21 == f1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
    {
    label_430ac5: ;
        long double x87_r4_5 = 1.0 / v_74;
        x87_r7_21 = x87_r7_21 * x87_r4_5;
        x87_r6_23 = x87_r6_23 * x87_r4_5;
        x87_r5_1 = x87_r5_1 * x87_r4_5;
    }
    else
    {
        long double f2_1 = 0.0f;
        x87_r6_23 - f2_1;

        if (!(*(&((x87_r6_23 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_23, f2_1) ? 1 : 0) << 0xa
                | (x87_r6_23 == f2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_430ac5;

        long double f4_1 = 0.0f;
        x87_r5_1 - f4_1;

        if (!(*(&((x87_r5_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_1, f4_1) ? 1 : 0) << 0xa
                | (x87_r5_1 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_430ac5;
    }

    float v_64 = x87_r6_23 * a2[3] + x87_r7_21 * *a2 + x87_r5_1 * a2[6];
    float v_60 = x87_r6_23 * a2[4] + x87_r5_1 * a2[7] + x87_r7_21 * a2[1];
    float v_5c = x87_r6_23 * a2[5] + x87_r7_21 * a2[2] + x87_r5_1 * a2[8];
    float v_28;
    Sys_DispatchOpcode_12(&v_28, a5);
    float v_24;
    float v_20;
    v_4c = v_20 * v_5c + v_24 * v_60 + v_28 * v_64;
    float v_70_2 = v_4c;
    float v_10;
    float v_c;
    float v_8;
    float v_44_1 = v_8 * v_5c + v_c * v_60 + v_10 * v_64;
    long double x87_r7_39 = v_4c * a6;
    float v_1c;
    float v_18;
    float v_14;
    long double x87_r6_40 = (v_14 * v_5c + v_18 * v_60 + v_1c * v_64) * a7;
    float v_64_1 = v_10 * v_44_1 + v_1c * x87_r6_40 + v_28 * x87_r7_39;
    float v_70_3 = v_64_1;
    float v_60_1 = v_c * v_44_1 + v_18 * x87_r6_40 + v_24 * x87_r7_39;
    float v_5c_1 = v_8 * v_44_1 + v_14 * x87_r6_40 + v_20 * x87_r7_39;
    long double x87_r7_43 = v_7c * 4.0f / *a1;
    long double f3 = v_74;
    x87_r7_43 - f3;
    long double x87_r7_44 = v_64_1;
    float v_70_4;
    float v_6c_4;
    long double x87_r7_52;

    if (!(*(&((x87_r7_43 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_43, f3) ? 1 : 0) << 0xa
        | (x87_r7_43 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        v_70_4 = x87_r7_44 * v_74 * *a1 * 0.100000001.0f;
        v_6c_4 = v_74 * v_60_1 * *a1 * 0.100000001.0f;
        x87_r7_52 = v_74 * v_5c_1 * *a1 * 0.100000001.0f;
    }
    else
    {
        v_70_4 = x87_r7_44 * v_7c * 0.239999995.0f;
        v_6c_4 = v_60_1 * v_7c * 0.239999995.0f;
        x87_r7_52 = v_5c_1 * v_7c * 0.239999995.0f;
    }

    v_4c = v_70_4;
    float v_48_2 = v_6c_4;
    float v_40 = *a3;
    float v_44_2 = x87_r7_52;
    int32_t v_3c = a3[1];
    int32_t v_38 = a3[2];
    return ForceAccumulator_Add(a1, &v_4c);
}

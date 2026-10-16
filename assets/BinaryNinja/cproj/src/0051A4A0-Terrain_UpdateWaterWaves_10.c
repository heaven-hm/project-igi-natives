#include "gi_platform.h"
#include "0051A4A0-Terrain_UpdateWaterWaves_10.h"
float* Terrain_UpdateWaterWaves_10(float a1, float* a2, float a3, float a4)

{
    char v_75;
    float v_74;
    float v_6c;
    Sys_CloseFileStream_13(&v_75, &v_74, &v_6c, (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0x68)) + 0x60,
        (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0x6c)) + 0x60);
    int16_t valA3;
    valA3 = v_75;
    float v_50;
    float v_4c;
    float v_48;
    float v_44;

    if (!valA3)
        memcpy(&v_50, (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0x6c)) + 0x60, 0x14);
    else
    {
        void* valA4 = (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0x6c));
        v_50 = -(*(valA4 + 0x60));
        v_4c = -(*(valA4 + 0x64));
        v_48 = -(*(valA4 + 0x68));
        v_44 = -(*(valA4 + 0x6c));
    }

    long double x87_r7_9 = v_74;
    long double f1 = 0.0f;
    x87_r7_9 - f1;
    float v_3c;
    float v_38;
    float v_34;
    long double x87_r7_10;

    if (!(*(&((x87_r7_9 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f1) ? 1 : 0) << 0xa
        | (x87_r7_9 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_11 = v_74;
        long double f2_1 = 0.00999999978.0f;
        x87_r7_11 - f2_1;
        long double x87_r6_1;
        long double x87_r7_13;

        if (!(*(&((x87_r7_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            float v_70_1 = v_74 * a4;
            long double fp0_1;
            bool c1_1;
            bool c2_2;
            fp0_1 = __fsin(v_74 - v_70_1);
            x87_r7_13 = fp0_1 * v_6c;
            long double fp0_2;
            bool c1_2;
            bool c2_3;
            fp0_2 = __fsin(v_70_1);
            x87_r6_1 = fp0_2 * v_6c;
        }
        else
        {
            x87_r7_13 = 1.0f - a4;
            x87_r6_1 = a4;
        }

        void* valA5 = (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0x68));
        v_3c = x87_r7_13 * *(valA5 + 0x60) + x87_r6_1 * v_50;
        v_38 = x87_r7_13 * *(valA5 + 0x64) + x87_r6_1 * v_4c;
        v_34 = x87_r7_13 * *(valA5 + 0x68) + x87_r6_1 * v_48;
        x87_r7_10 = x87_r7_13 * *(valA5 + 0x6c) + x87_r6_1 * v_44;
    }
    else
    {
        memcpy(&v_3c, (*(int32_t*)(uintptr_t)(a1 + (a3 << 2) + 0x68)) + 0x60, 0x14);
        float v_30;
        x87_r7_10 = v_30;
    }

    long double x87_r6_9 = x87_r7_10 * v_38;
    long double x87_r5_11 = v_34 * v_3c;
    float v_20 = x87_r6_9 + x87_r6_9 + x87_r5_11 + x87_r5_11;
    long double x87_r6_13 = v_34 * v_38;
    long double x87_r6_16 = x87_r7_10 * v_3c;
    float v_14 = x87_r6_13 + x87_r6_13 - (x87_r6_16 + x87_r6_16);
    long double x87_r7_24 = v_3c * v_3c;
    long double x87_r6_19 = v_38 * v_38;
    float v_8 = 1.0f - (x87_r7_24 + x87_r7_24) - (x87_r6_19 + x87_r6_19);
    float* valA6 = SplinePathDynCubeObj_Process(&v_3c, a1, a3, a4);
    long double x87_r7_28 = *valA6;
    long double f3 = 0.0f;
    x87_r7_28 - f3;
    float v_60 = valA6[2];
    float v_64 = valA6[1];

    if (!(*(&((x87_r7_28 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_28, f3) ? 1 : 0) << 0xa
        | (x87_r7_28 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a696: ;
        long double x87_r6_23 = v_60;
        long double x87_r5_13 = v_64;
        long double x87_r6_25 =
            1.0 / sqrtl(x87_r7_28 * x87_r7_28 + x87_r5_13 * x87_r5_13 + x87_r6_23 * x87_r6_23);
        x87_r7_28 = x87_r7_28 * x87_r6_25;
        v_64 = v_64 * x87_r6_25;
        v_60 = v_60 * x87_r6_25;
    }
    else
    {
        long double x87_r6_21 = v_64;
        long double f4_1 = 0.0f;
        x87_r6_21 - f4_1;

        if (!(*(&((x87_r6_21 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_21, f4_1) ? 1 : 0) << 0xa
                | (x87_r6_21 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a696;

        long double x87_r6_22 = v_60;
        long double f6_1 = 0.0f;
        x87_r6_22 - f6_1;

        if (!(*(&((x87_r6_22 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_22, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_22 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a696;
    }

    v_50 = v_64 * v_8 - v_60 * v_14;
    float v_5c = v_50;
    float v_4c_1 = -((x87_r7_28 * v_8 - v_60 * v_20));
    float v_58 = v_4c_1;
    float v_48_1 = x87_r7_28 * v_14 - v_64 * v_20;
    long double x87_r6_40 = v_50;
    long double f5 = 0.0f;
    x87_r6_40 - f5;
    long double x87_r6_46;

    if (!(*(&((x87_r6_40 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_40, f5) ? 1 : 0) << 0xa
        | (x87_r6_40 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a765: ;
        long double x87_r6_43 = v_48_1;
        long double x87_r5_25 = v_4c_1;
        long double x87_r4_9 = v_50;
        long double x87_r6_45 =
            1.0 / sqrtl(x87_r4_9 * x87_r4_9 + x87_r5_25 * x87_r5_25 + x87_r6_43 * x87_r6_43);
        v_5c = v_50 * x87_r6_45;
        v_58 = v_58 * x87_r6_45;
        x87_r6_46 = x87_r6_45 * v_48_1;
    }
    else
    {
        long double x87_r6_41 = v_4c_1;
        long double f7_1 = 0.0f;
        x87_r6_41 - f7_1;

        if (!(*(&((x87_r6_41 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_41, f7_1) ? 1 : 0) << 0xa
                | (x87_r6_41 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a765;

        long double x87_r6_42 = v_48_1;
        long double f9_1 = 0.0f;
        x87_r6_42 - f9_1;

        if (!(*(&((x87_r6_42 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_42, f9_1) ? 1 : 0) << 0xa
                | (x87_r6_42 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a765;

        x87_r6_46 = v_48_1;
    }

    v_50 = v_58 * v_60 - x87_r6_46 * v_64;
    v_3c = v_50;
    float v_4c_2 = -((v_5c * v_60 - x87_r6_46 * x87_r7_28));
    float v_38_1 = v_4c_2;
    float v_48_2 = v_5c * v_64 - v_58 * x87_r7_28;
    long double x87_r5_41 = v_50;
    long double f8 = 0.0f;
    x87_r5_41 - f8;
    long double x87_r5_47;

    if (!(*(&((x87_r5_41 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_41, f8) ? 1 : 0) << 0xa
        | (x87_r5_41 == f8 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_51a834: ;
        long double x87_r5_44 = v_48_2;
        long double x87_r4_17 = v_4c_2;
        long double x87_r3_11 = v_50;
        long double x87_r5_46 =
            1.0 / sqrtl(x87_r3_11 * x87_r3_11 + x87_r4_17 * x87_r4_17 + x87_r5_44 * x87_r5_44);
        v_3c = v_50 * x87_r5_46;
        v_38_1 = v_38_1 * x87_r5_46;
        x87_r5_47 = x87_r5_46 * v_48_2;
    }
    else
    {
        long double x87_r5_42 = v_4c_2;
        long double f10_1 = 0.0f;
        x87_r5_42 - f10_1;

        if (!(*(&((x87_r5_42 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_42, f10_1) ? 1 : 0) << 0xa
                | (x87_r5_42 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_51a834;

        long double x87_r5_43 = v_48_2;
        long double f11_1 = 0.0f;
        x87_r5_43 - f11_1;

        if (!(*(&((x87_r5_43 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_43, f11_1) ? 1 : 0) << 0xa
                | (x87_r5_43 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_51a834;

        x87_r5_47 = v_48_2;
    }

    float tmpD4 = v_64;
    *a2 = v_5c;
    a2[6] = x87_r6_46;
    a2[3] = v_58;
    a2[1] = x87_r7_28;
    a2[4] = tmpD4;
    float tmpD5 = v_3c;
    a2[8] = x87_r5_47;
    a2[7] = v_60;
    a2[2] = tmpD5;
    a2[5] = v_38_1;
    return a2;
}

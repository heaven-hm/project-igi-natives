#include "gi_platform.h"
#include "004FE210-Script_ParseEnumInt32_31.h"
int32_t Script_ParseEnumInt32_31(void* a1, int32_t a2, int32_t* a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int16_t a11, int32_t a12)

{
    float v_84 = *a3;
    long double fpu7 = v_84;
    long double f1 = 0.0f;
    fpu7 - f1;
    float v_80 = a3[1];
    float v_7c = a3[2];

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4fe264: ;
        long double x87_r7_3 = v_7c;
        long double x87_r6_1 = v_80;
        long double x87_r5_1 = v_84;
        long double x87_r7_5 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_3 * x87_r7_3);
        v_84 = v_84 * x87_r7_5;
        v_80 = v_80 * x87_r7_5;
        v_7c = v_7c * x87_r7_5;
    }
    else
    {
        long double x87_r7_1 = v_80;
        long double f2_1 = 0.0f;
        x87_r7_1 - f2_1;

        if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe264;

        long double x87_r7_2 = v_7c;
        long double f4_1 = 0.0f;
        x87_r7_2 - f4_1;

        if (!(*(&((x87_r7_2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe264;
    }

    long double x87_r7_8 = 1.0f;
    long double x87_r6_9 = 0.0f;
    long double x87_r5_4 = fabsl(v_84);
    long double f3 = 0.75;
    x87_r5_4 - f3;

    if (!(*(&((x87_r5_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_4, f3) ? 1 : 0) << 0xa
        | (x87_r5_4 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        x87_r7_8 = 0.0f;
        x87_r6_9 = 1.0f;
    }

    float v_78 = x87_r6_9 * v_7c;
    float v_6c = v_78;
    float v_74 = -((x87_r7_8 * v_7c));
    float v_68 = v_74;
    float v_70 = x87_r7_8 * v_80 - x87_r6_9 * v_84;
    long double x87_r7_12 = v_78;
    long double f5 = 0.0f;
    x87_r7_12 - f5;
    float v_64 = v_70;

    if (!(*(&((x87_r7_12 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f5) ? 1 : 0) << 0xa
        | (x87_r7_12 == f5 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4fe350: ;
        long double x87_r7_15 = v_70;
        long double x87_r6_15 = v_74;
        long double x87_r5_10 = v_78;
        long double x87_r7_17 =
            1.0 / sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_15 * x87_r6_15 + x87_r7_15 * x87_r7_15);
        v_6c = v_78 * x87_r7_17;
        v_68 = v_68 * x87_r7_17;
        v_64 = v_64 * x87_r7_17;
    }
    else
    {
        long double x87_r7_13 = v_74;
        long double f6_1 = 0.0f;
        x87_r7_13 - f6_1;

        if (!(*(&((x87_r7_13 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe350;

        long double x87_r7_14 = v_70;
        long double f8_1 = 0.0f;
        x87_r7_14 - f8_1;

        if (!(*(&((x87_r7_14 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe350;
    }

    float v_60 = v_68 * v_7c - v_64 * v_80;
    float v_5c = -((v_6c * v_7c - v_64 * v_84));
    float v_58 = v_6c * v_80 - v_68 * v_84;
    float v_54 = Sys_AllocateMemory_14(0xa7a4c0) * a4;
    int32_t objC2;
    long double fp0_1;
    fp0_1 = Sys_AllocateMemory_14(0xa7a4c0);
    int32_t v_90 = objC2;
    float v_28;
    Sys_ReadFileBlock_12(&v_28, a4 * 0.5.0f - v_54, 0.0f, 3.14159274.0f - fp0_1 * 6.28318548.0f);
    int32_t v_4;
    int32_t v_2c = v_4 + 2;
    float v_20;
    float v_14;
    float v_8;
    float v_48 = v_20 * v_60 + v_14 * v_6c + v_8 * v_84;
    float v_3c = v_20 * v_5c + v_14 * v_68 + v_8 * v_80;
    float v_30 = v_20 * v_58 + v_14 * v_64 + v_8 * v_7c;
    long double fp0_2 = Sys_AllocateMemory_14(0xa7a4c0);
    v_78 = v_48;
    float v_74_1 = v_3c;
    long double x87_r7_51 = fp0_2 * (a6 - a5) + a5;
    long double x87_r6_45 = v_30;
    long double x87_r5_12 = v_48;
    long double f7 = 0.0f;
    x87_r5_12 - f7;

    if (!(*(&((x87_r5_12 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_12, f7) ? 1 : 0) << 0xa
        | (x87_r5_12 == f7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4fe521: ;
        long double x87_r6_47 = v_30;
        long double x87_r5_15 = v_3c;
        long double x87_r4_11 = v_48;
        long double x87_r6_49 =
            1.0 / sqrtl(x87_r4_11 * x87_r4_11 + x87_r5_15 * x87_r5_15 + x87_r6_47 * x87_r6_47);
        v_78 = v_48 * x87_r6_49;
        v_74_1 = v_3c * x87_r6_49;
        x87_r6_45 = x87_r6_49 * v_30;
    }
    else
    {
        long double x87_r5_13 = v_3c;
        long double f9_1 = 0.0f;
        x87_r5_13 - f9_1;

        if (!(*(&((x87_r5_13 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, f9_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4fe521;

        long double x87_r5_14 = v_30;
        long double f10_1 = 0.0f;
        x87_r5_14 - f10_1;

        if (!(*(&((x87_r5_14 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, f10_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4fe521;
    }

    v_78 = v_78 * x87_r7_51;
    float v_74_2 = v_74_1 * x87_r7_51;
    float v_70_1 = x87_r6_45 * x87_r7_51;
    return Script_SpawnNewTask_31(a1, a2, &v_78, a7, a8, a9, a10, a11, a12);
}

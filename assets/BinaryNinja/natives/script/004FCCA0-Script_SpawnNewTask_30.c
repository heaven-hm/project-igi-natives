#include "Script_SpawnNewTask_30.h"
int32_t Script_SpawnNewTask_30(void* a1, float a2, float a3, float a4, float a5)

{
    float* objC5 = a2;
    long double x87_r7_1 = a3 * objC5[2];
    long double f1 = 0f;
    x87_r7_1 - f1;

    if (*(&((x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    long double f2 = 0f;
    x87_r7_1 - f2;
    int16_t result = (x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 0x40)
        return result;

    long double x87_r7_2 = x87_r7_1 * a4;
    float tmpD = *(a1 + 0x24);
    float tmpD1 = *(a1 + 0x28);
    float valA1 = *(a1 + 0x2c);
    float v_c = tmpD1 * objC5[2] - valA1 * objC5[1];
    float v_8 = -((tmpD * objC5[2] - valA1 * *objC5));
    float v_18_1 = v_c;
    float v_14_1 = v_8;
    float v_4 = tmpD * objC5[1] - tmpD1 * *objC5;
    long double x87_r6_10 = v_c;
    long double x87_r5_6 = v_4;
    long double fpu4 = v_8;
    a2 = sqrtl(fpu4 * fpu4 + x87_r5_6 * x87_r5_6 + x87_r6_10 * x87_r6_10);
    long double x87_r6_12 = a2;
    long double f3 = 9.99999975e-06f;
    x87_r6_12 - f3;
    float v_18_2;
    float v_14_2;
    float v_10_2;

    if (!(*(&((x87_r6_12 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, f3) ? 1 : 0) << 0xa
        | (x87_r6_12 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_13 = v_c;
        long double f4_1 = 0f;
        x87_r6_13 - f4_1;
        long double x87_r6_18;

        if (!(*(&((x87_r6_13 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, f4_1) ? 1 : 0) << 0xa
            | (x87_r6_13 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_4fcdd0:
            long double x87_r6_17 = 1.0 / a2;
            v_18_1 = v_c * x87_r6_17;
            v_14_1 = v_14_1 * x87_r6_17;
            x87_r6_18 = x87_r6_17 * v_4;
        }
        else
        {
            long double x87_r6_14 = v_8;
            long double f5_1 = 0f;
            x87_r6_14 - f5_1;

            if (!(*(&((x87_r6_14 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_14, f5_1) ? 1 : 0) << 0xa
                    | (x87_r6_14 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_4fcdd0;

            long double x87_r6_15 = v_4;
            long double f7_1 = 0f;
            x87_r6_15 - f7_1;

            if (!(*(&((x87_r6_15 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, f7_1) ? 1 : 0) << 0xa
                    | (x87_r6_15 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_4fcdd0;

            x87_r6_18 = v_4;
        }

        v_18_2 = v_14_1 * objC5[2] - x87_r6_18 * objC5[1];
        v_14_2 = -((v_18_1 * objC5[2] - x87_r6_18 * *objC5));
        v_10_2 = v_18_1 * objC5[1] - v_14_1 * *objC5;
    }
    else
    {
        v_18_2 = 0f;
        v_14_2 = 0f;
        v_10_2 = 0f;
    }

    long double x87_r6_28 =
        v_18_2 * *(a1 + 0x18) + v_10_2 * *(a1 + 0x20) + v_14_2 * *(a1 + 0x1c);
    long double f6 = 0f;
    x87_r6_28 - f6;
    a2 = x87_r6_28;
    bool c1 = /* bool c1 = unknown  {fst dword [esp+0x24], fp0} */;

    if (*(&((x87_r6_28 < f6 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(x87_r6_28, f6) ? 1 : 0) << 0xa | (x87_r6_28 == f6 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1)
        x87_r6_28 = -(x87_r6_28);

    x87_r7_2 - x87_r6_28;

    if (!(*(&((x87_r7_2 < x87_r6_28 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, x87_r6_28) ? 1 : 0) << 0xa
        | (x87_r7_2 == x87_r6_28 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        long double x87_r7_4 = a2;
        long double f8_1 = 0f;
        x87_r7_4 - f8_1;
        x87_r7_2 = a2;

        if (*(&((x87_r7_4 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_2 = -(x87_r7_2);
    }

    float v_8_2 = v_14_2 * x87_r7_2 + *(a1 + 0x1c);
    long double x87_r7_6 = x87_r7_2 * v_10_2 + *(a1 + 0x20);
    *(a1 + 0x18) = v_18_2 * x87_r7_2 + *(a1 + 0x18);
    *(a1 + 0x1c) = v_8_2;
    *(a1 + 0x20) = x87_r7_6;
    SoundSys_InitSoundSys_17(a1);
    float objC3 = *(a1 + 0x38);
    long double x87_r7_10 = *(a1 + 0x34) * a5;
    *(a1 + 0x30) = *(a1 + 0x30) * a5;
    *(a1 + 0x34) = x87_r7_10;
    *(a1 + 0x38) = objC3 * a5;
    return a1 + 0x30;
}

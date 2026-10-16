#include "004EC4D0-SoundSys_SetFrequency_16.h"
/* 0x004ec4d0 SoundSys_SetFrequency_16 full linked: callers=1 callees=0 */
int32_t* sub_4ec4d0(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, float a6, float a7, float a8)

{
    long double x87_r7 = a6;
    long double temp0 = 0f;
    x87_r7 - temp0;
    float var_c = a6;
    float var_8 = a7;
    float var_4 = a8;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4ec51e:
        long double x87_r7_3 = a8;
        long double x87_r6_1 = a7;
        long double x87_r5_1 = a6;
        long double x87_r7_5 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_3 * x87_r7_3);
        var_c = a6 * x87_r7_5;
        var_8 = a7 * x87_r7_5;
        var_4 = a8 * x87_r7_5;
    }
    else
    {
        long double x87_r7_1 = a7;
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4ec51e;

        long double x87_r7_2 = a8;
        long double temp2_1 = 0f;
        x87_r7_2 - temp2_1;

        if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4ec51e;
    }

    a1[1] = var_c;
    a1[2] = var_8;
    a1[3] = var_4;
    a1[4] = a3;
    a1[5] = a4;
    a1[6] = a5;
    *a1 = a2;
    return a1;
}

#include "gi_platform.h"
#include "004EC4D0-SoundSys_SetFrequency_16.h"
int32_t* SoundSys_SetFrequency_16(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, float a6, float a7, float a8)

{
    long double fpu7 = a6;
    long double f0 = 0.0f;
    fpu7 - f0;
    float v_c = a6;
    float v_8 = a7;
    float v_4 = a8;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4ec51e: ;
        long double x87_r7_3 = a8;
        long double x87_r6_1 = a7;
        long double x87_r5_1 = a6;
        long double x87_r7_5 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_3 * x87_r7_3);
        v_c = a6 * x87_r7_5;
        v_8 = a7 * x87_r7_5;
        v_4 = a8 * x87_r7_5;
    }
    else
    {
        long double x87_r7_1 = a7;
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;

        if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4ec51e;

        long double x87_r7_2 = a8;
        long double f2_1 = 0.0f;
        x87_r7_2 - f2_1;

        if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4ec51e;
    }

    a1[1] = v_c;
    a1[2] = v_8;
    a1[3] = v_4;
    a1[4] = a3;
    a1[5] = a4;
    a1[6] = a5;
    *a1 = a2;
    return a1;
}

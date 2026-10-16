#include "gi_platform.h"
#include "004F7DF0-Script_ExecuteLevelScript_20.h"
int32_t Script_ExecuteLevelScript_20(void* a1, float a2)

{
    double* srcS = a2;
    float v_c = *srcS - (*(int32_t*)(uintptr_t)(a1 + 0x2c08));
    float v_8 = srcS[1] - (*(int32_t*)(uintptr_t)(a1 + 0x2c10));
    long double x87_r7_5 = srcS[2] - (*(int32_t*)(uintptr_t)(a1 + 0x2c18));
    float v_4 = x87_r7_5;
    long double fpu6 = v_8;
    long double fpu5 = v_c;
    a2 = sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + x87_r7_5 * x87_r7_5);
    long double x87_r7_7 = a2;
    long double f0 = (*(int32_t*)(uintptr_t)(a1 + 0x2c7c));
    x87_r7_7 - f0;

    if (!(*(&((x87_r7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f0) ? 1 : 0) << 0xa
        | (x87_r7_7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_8 = v_c;
        long double f1_1 = 0.0f;
        x87_r7_8 - f1_1;

        if (!(*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
    label_4f7e92: ;
            long double x87_r7_12 = 1.0 / a2;
            v_c = v_c * x87_r7_12;
            float v_8_1 = v_8 * x87_r7_12;
            float v_4_1 = v_4 * x87_r7_12;
        }
        else
        {
            long double x87_r7_9 = v_8;
            long double f2_1 = 0.0f;
            x87_r7_9 - f2_1;

            if (!(*(&((x87_r7_9 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4f7e92;

            long double x87_r7_10 = v_4;
            long double f4_1 = 0.0f;
            x87_r7_10 - f4_1;

            if (!(*(&((x87_r7_10 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4f7e92;
        }

        long double x87_r7_15 = fabs0f(Sys_PushStack_10(&v_c, a1 + 0x2c48));
        long double f3_1 = 1.0995574.0f;
        x87_r7_15 - f3_1;
        int16_t valA1 = (x87_r7_15 < f3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_15, f3_1) ? 1 : 0) << 0xa | (x87_r7_15 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&valA1 + 1) & 0x41))
        {
            (*(int32_t*)(uintptr_t)(srcS + 0x1c)) = 0;
            return valA1;
        }
    }

    int32_t valA3 = g_a76c88 + 1;
    g_a76c88 = valA3;
    (*(int32_t*)(uintptr_t)(srcS + 0x1c)) = 1;
    return valA3;
}

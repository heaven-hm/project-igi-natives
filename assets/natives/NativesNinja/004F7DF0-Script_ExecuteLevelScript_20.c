#include "004F7DF0-Script_ExecuteLevelScript_20.h"
/* 0x004f7df0 Script_ExecuteLevelScript_20 full linked: callers=1 callees=1 */
int32_t sub_4f7df0(void* a1, float a2)

{
    double* esi = a2;
    float var_c = *esi - *(a1 + 0x2c08);
    float var_8 = esi[1] - *(a1 + 0x2c10);
    long double x87_r7_5 = esi[2] - *(a1 + 0x2c18);
    float var_4 = x87_r7_5;
    long double x87_r6 = var_8;
    long double x87_r5 = var_c;
    a2 = sqrtl(x87_r5 * x87_r5 + x87_r6 * x87_r6 + x87_r7_5 * x87_r7_5);
    long double x87_r7_7 = a2;
    long double temp0 = *(a1 + 0x2c7c);
    x87_r7_7 - temp0;

    if (!(*(&((x87_r7_7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp0) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_8 = var_c;
        long double temp1_1 = 0f;
        x87_r7_8 - temp1_1;

        if (!(*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4f7e92:
            long double x87_r7_12 = 1.0 / a2;
            var_c = var_c * x87_r7_12;
            float var_8_1 = var_8 * x87_r7_12;
            float var_4_1 = var_4 * x87_r7_12;
        }
        else
        {
            long double x87_r7_9 = var_8;
            long double temp2_1 = 0f;
            x87_r7_9 - temp2_1;

            if (!(*(&((x87_r7_9 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4f7e92;

            long double x87_r7_10 = var_4;
            long double temp4_1 = 0f;
            x87_r7_10 - temp4_1;

            if (!(*(&((x87_r7_10 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4f7e92;
        }

        long double x87_r7_15 = fabs0f(sub_4b2b30(&var_c, a1 + 0x2c48));
        long double temp3_1 = 1.0995574f;
        x87_r7_15 - temp3_1;
        int16_t eax_1 = (x87_r7_15 < temp3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_15, temp3_1) ? 1 : 0) << 0xa | (x87_r7_15 == temp3_1 ? 1 : 0) << 0xe;

        if (!(*(&eax_1 + 1) & 0x41))
        {
            *(esi + 0x1c) = 0;
            return eax_1;
        }
    }

    int32_t eax_3 = g_a76c88 + 1;
    g_a76c88 = eax_3;
    *(esi + 0x1c) = 1;
    return eax_3;
}

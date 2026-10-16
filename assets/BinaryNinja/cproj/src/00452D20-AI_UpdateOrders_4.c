#include "gi_platform.h"
#include "00452D20-AI_UpdateOrders_4.h"
int32_t* AI_UpdateOrders_4(int32_t* a1, int32_t* a2, double* a3, void* a4, int32_t a5, double* a6)

{
    void* valA = Script_ExecuteLevelScript_23(a4, a5);
    int32_t* result = AI_FireWeapon_4((*(int32_t*)(uintptr_t)(a4 + 0x50)), a5);

    if (!result)
    {
        result = g_58a9e8;

        if (*result)
        {
            Camera_ApplyHandiCam_33(result);
            result[1] = 0;
            *result = 0;
            Camera_SetFieldOfView_33(&g_57d768, result);
            int32_t objC1 = (*(int32_t*)(uintptr_t)(a4 + 0x50));
            result[3] = a5;
            result[2] = objC1;
            result[4] = 0;
            result[5] = (*(int32_t*)(uintptr_t)(valA + 0x28)) * 0.5.0f;
            result[6] = (*(int32_t*)(uintptr_t)(valA + 0x28)) * 0.5.0f;
        }

        if (!*result || !result)
            return 0;
    }

    result[4] += 1;
    double v_58;
    Script_CallNativeHandler_23(&v_58, valA);
    double v_70 = *a6 - v_58;
    double v_50;
    double v_68 = a6[1] - v_50;
    double v_48;
    double v_60 = a6[2] - v_48;
    float v_28;
    Script_EvaluateCondition_23(&v_28, valA, 1);
    float v_1c;
    float v_10;
    double v_40 = v_10 * v_60 + v_1c * v_68 + v_28 * v_70;
    float v_24;
    float v_18;
    float v_c;
    double v_38 = v_c * v_60 + v_18 * v_68 + v_24 * v_70;
    float v_20;
    float v_14;
    float v_8;
    double v_30 = v_8 * v_60 + v_14 * v_68 + v_20 * v_70;
    long double x87_r7_24 = v_40 * 0.0001220703125;
    memcpy(&v_70, &v_40, 0x18);
    double v_68_1 = v_68 * 0.0001220703125;
    double v_60_1 = v_60 * 0.0001220703125;
    v_70 = result[5] * 0.5 + x87_r7_24;
    double v_68_2 = result[6] * 0.5 + v_68_1;
    long double x87_r7_29 = v_70;
    long double f0 = 0.0;
    x87_r7_29 - f0;

    if (!(*(&((x87_r7_29 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_29, f0) ? 1 : 0) << 0xa
        | (x87_r7_29 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_30 = result[5];
        long double x87_r6_19 = v_70;
        x87_r6_19 - x87_r7_30;

        if (!(*(&((x87_r6_19 < x87_r7_30 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_19, x87_r7_30) ? 1 : 0) << 0xa
                | (x87_r6_19 == x87_r7_30 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            v_70 = x87_r7_30;
    }
    else
    {
        v_70 = 0;
        *(&v_70 + 4) = 0;
    }

    long double x87_r7_32 = v_68_2;
    long double f1 = 0.0;
    x87_r7_32 - f1;

    if (!(*(&((x87_r7_32 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_32, f1) ? 1 : 0) << 0xa
        | (x87_r7_32 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_33 = result[6];
        long double x87_r6_20 = v_68_2;
        x87_r6_20 - x87_r7_33;

        if (!(*(&((x87_r6_20 < x87_r7_33 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_20, x87_r7_33) ? 1 : 0) << 0xa
                | (x87_r6_20 == x87_r7_33 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            v_68_2 = x87_r7_33;
    }
    else
    {
        v_68_2 = 0;
        *(&v_68_2 + 4) = 0;
    }

    int32_t v_78_3 = v_68_2;
    int32_t v_78_4 = v_70;
    AI_CheckHearing_4(result, v_78_4, v_78_3, 1);

    if (a1)
        *a1 = v_78_4;

    if (a2)
        *a2 = v_78_3;

    if (a3)
    {
        long double x87_r7_40 = (v_70 - result[5] * 0.5) * 8192.0;
        long double x87_r6_25 = (v_68_2 - result[6] * 0.5) * 8192.0;
        v_40 = v_20 * v_60_1 + v_24 * x87_r6_25 + v_28 * x87_r7_40;
        double v_38_1 = v_14 * v_60_1 + v_18 * x87_r6_25 + v_1c * x87_r7_40;
        *a3 = v_40 + v_58;
        a3[1] = v_38_1 + v_50;
        a3[2] = v_8 * v_60_1 + v_c * x87_r6_25 + v_10 * x87_r7_40 + v_48;
    }

    return result;
}

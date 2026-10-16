#include "gi_platform.h"
#include "005045F0-AreaActivate_Setup.h"
int32_t AreaActivate_Setup(void* a1)

{
    long double fpu7 = -1.7976931348623157e+308;
    double v_28 = fpu7;
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0xb0));
    int32_t v_50 = 0xffffffff;
    int32_t v_4c = 0x7fefffff;
    int32_t v_48 = 0xffffffff;
    int32_t v_44 = 0x7fefffff;
    int32_t result_1 = 0xffffffff;
    int32_t v_3c = 0x7fefffff;
    int32_t v_38 = 0xffffffff;
    int32_t v_34 = 0xffefffff;
    int32_t result_2 = 0xffffffff;
    int32_t v_2c = 0xffefffff;
    (*(int32_t*)(uintptr_t)(a1 + 0xac)) = 0;

    if (valA)
    {
        fpu7 = v_28;
        (*(int32_t*)(uintptr_t)(a1 + 0xac)) = Sys_CheckHeap_22(valA);
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x90)) = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    (*(int32_t*)(uintptr_t)(a1 + 0x94)) = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    (*(int32_t*)(uintptr_t)(a1 + 0x98)) = (*(int32_t*)(uintptr_t)(a1 + 0xa4));
    float v_78 = (*(int32_t*)(uintptr_t)(a1 + 0x90)) * 0.5.0f;
    long double x87_r6_3 = (*(int32_t*)(uintptr_t)(a1 + 0x94)) * 0.5.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x90)) = v_78;
    int32_t i = 0;
    float v_74 = x87_r6_3;
    long double x87_r6_5 = (*(int32_t*)(uintptr_t)(a1 + 0x98)) * 0.5.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x94)) = v_74;
    float v_70 = x87_r6_5;
    (*(int32_t*)(uintptr_t)(a1 + 0x98)) = v_70;
    int32_t result;

    do
    {
        long double x87_r6_7 = v_78 * (1 - ((i & 1) << 1));
        result = i >> 1 & 2;
        long double x87_r5_5 = (1 - (i & 2)) * v_74;
        double v_60_2 = x87_r5_5;
        long double x87_r4_2 = (1 - result) * v_70;
        double v_58_2 = x87_r4_2;
        double v_20 =
            (*(int32_t*)(uintptr_t)(a1 + 0x6c)) * x87_r5_5 + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * x87_r4_2 + (*(int32_t*)(uintptr_t)(a1 + 0x68)) * x87_r6_7;
        double v_18_1 =
            (*(int32_t*)(uintptr_t)(a1 + 0x78)) * x87_r5_5 + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * x87_r4_2 + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * x87_r6_7;
        double v_10_1 =
            (*(int32_t*)(uintptr_t)(a1 + 0x84)) * x87_r5_5 + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * x87_r4_2 + (*(int32_t*)(uintptr_t)(a1 + 0x80)) * x87_r6_7;
        char v_68;
        memcpy(&v_68, &v_20, 0x18);
        long double x87_r6_10 = v_20 + (*(int32_t*)(uintptr_t)(a1 + 0x50));
        long double x87_r5_8 = v_60_2 + (*(int32_t*)(uintptr_t)(a1 + 0x58));
        double v_60_3 = x87_r5_8;
        double v_58_3 = v_58_2 + (*(int32_t*)(uintptr_t)(a1 + 0x60));
        long double x87_r4_6 = v_50;
        x87_r4_6 - x87_r6_10;
        result = (x87_r4_6 < x87_r6_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_6, x87_r6_10) ? 1 : 0) << 0xa
            | (x87_r4_6 == x87_r6_10 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 1))
            v_50 = x87_r6_10;

        long double x87_r4_8 = v_48;
        x87_r4_8 - x87_r5_8;
        result = (x87_r4_8 < x87_r5_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_8, x87_r5_8) ? 1 : 0) << 0xa
            | (x87_r4_8 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 1))
            v_48 = x87_r5_8;

        long double x87_r5_10 = result_1;
        long double f0_1 = v_58_3;
        x87_r5_10 - f0_1;
        result = (x87_r5_10 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_10, f0_1) ? 1 : 0) << 0xa
            | (x87_r5_10 == f0_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 1))
        {
            result = v_58_3;
            result_1 = result;
            int32_t v_3c_1 = *(&v_58_3 + 4);
        }

        long double x87_r5_11 = v_38;
        x87_r5_11 - x87_r6_10;
        result = (x87_r5_11 < x87_r6_10 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_11, x87_r6_10) ? 1 : 0) << 0xa
            | (x87_r5_11 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 0x41)
            v_38 = x87_r6_10;

        long double x87_r6_12 = result_2;
        long double f1_1 = v_60_3;
        x87_r6_12 - f1_1;
        result = (x87_r6_12 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, f1_1) ? 1 : 0) << 0xa
            | (x87_r6_12 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
        {
            result = v_60_3;
            result_2 = result;
            int32_t v_2c_1 = *(&v_60_3 + 4);
        }

        long double f2_1 = v_58_3;
        fpu7 - f2_1;
        result = (fpu7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2_1) ? 1 : 0) << 0xa
            | (fpu7 == f2_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
            fpu7 = v_58_3;

        i += 1;
    } while (i < 8);

    double v_28_1 = fpu7;
    memcpy(a1 + 0x20, &v_50, 0x18);
    memcpy(a1 + 0x38, &v_38, 0x18);
    return result;
}

#include "gi_platform.h"
#include "004502F0-AI_TestViewCones.h"
double* AI_TestViewCones(long double a1 , long double a2 , long double a3 , void* a4, double* a5, char a6)

{
    double* result = a5;
    long double x87_r7_1 = *result - (*(int32_t*)(uintptr_t)(a4 + 0x18));
    double v_38 = x87_r7_1;
    long double x87_r6_1 = result[1] - (*(int32_t*)(uintptr_t)(a4 + 0x20));
    double v_30 = x87_r6_1;
    long double x87_r5_1 = result[2] - (*(int32_t*)(uintptr_t)(a4 + 0x28));
    double v_28 = x87_r5_1;
    double v_20 =
        (*(int32_t*)(uintptr_t)(a4 + 0x70)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a4 + 0x64)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a4 + 0x58)) * x87_r7_1;
    double v_18 =
        (*(int32_t*)(uintptr_t)(a4 + 0x74)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a4 + 0x68)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a4 + 0x5c)) * x87_r7_1;
    long double x87_r3_11 = (*(int32_t*)(uintptr_t)(a4 + 0x60)) * x87_r7_1;
    double v_10 = (*(int32_t*)(uintptr_t)(a4 + 0x78)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a4 + 0x6c)) * x87_r6_1 + x87_r3_11;
    memcpy(&v_38, &v_20, 0x18);
    long double x87_r7_3 = v_18;
    long double f0 = 0.0;
    x87_r7_3 - f0;
    result = (x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        double v_40_1 = Sys_OpenFileStream_11(&v_38);
        int32_t v_48_1;

        if (!a6)
        {
            v_48_1 = (*(int32_t*)(uintptr_t)(a4 + 0x90));
            int32_t v_44_2 = (*(int32_t*)(uintptr_t)(a4 + 0x94));
        }
        else
        {
            v_48_1 = (*(int32_t*)(uintptr_t)(a4 + 0x98));
            int32_t v_44_1 = (*(int32_t*)(uintptr_t)(a4 + 0x9c));
        }

        char v_70;
        memcpy(&v_70, &v_38, 0x18);
        WeaponType_InitType();
        long double f1_1 = 0.0f;
        a1 - f1_1;

        if (!((*(int32_t*)(uintptr_t)(&((a1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f1_1) ? 1 : 0) << 0xa
            | (a1 == f1_1 ? 1 : 0) << 0xe | 0x800) + 1)) & 1))
        {
            memcpy(&v_70, &v_38, 0x18);
            WeaponType_InitType();
        }
        else
        {
            memcpy(&v_70, &v_38, 0x18);
            WeaponType_InitType();
            a2 = -(a2);
        }

        float v_4c_1 = a2;
        memcpy(&v_70, &v_38, 0x18);
        WeaponType_GetConfig();
        long double f2_1 = 0.0f;
        a3 - f2_1;

        if (!((*(int32_t*)(uintptr_t)(&((a3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(a3, f2_1) ? 1 : 0) << 0xa
            | (a3 == f2_1 ? 1 : 0) << 0xe | 0x1800) + 1)) & 1))
        {
            memcpy(&v_70, &v_38, 0x18);
            result = WeaponType_GetConfig();
        }
        else
        {
            memcpy(&v_70, &v_38, 0x18);
            result = WeaponType_GetConfig();
            x87_r3_11 = -(x87_r3_11);
        }

        long double fpu2 = v_40_1;
        long double f3_1 = v_48_1;
        fpu2 - f3_1;
        result = (fpu2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu2, f3_1) ? 1 : 0) << 0xa
            | (fpu2 == f3_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 0x41)
        {
            long double x87_r2_1 = v_4c_1;
            long double f4_1 = (*(int32_t*)(uintptr_t)(a4 + 0x80));
            x87_r2_1 - f4_1;
            result = (x87_r2_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, f4_1) ? 1 : 0) << 0xa
                | (x87_r2_1 == f4_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f5_1 = (*(int32_t*)(uintptr_t)(a4 + 0x88));
                x87_r3_11 - f5_1;
                result = (x87_r3_11 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r3_11, f5_1) ? 1 : 0) << 0xa
                    | (x87_r3_11 == f5_1 ? 1 : 0) << 0xe | 0x1800;

                if (*(&result + 1) & 1)
                {
                    result = 1;
                    return result;
                }
            }
        }

        result = a6;
        long double x87_r2_2;

        if (!result)
            x87_r2_2 = (*(int32_t*)(uintptr_t)(a4 + 0xb0));
        else
            x87_r2_2 = (*(int32_t*)(uintptr_t)(a4 + 0xb8));

        long double fpu1 = v_40_1;
        fpu1 - x87_r2_2;
        result = (fpu1 < x87_r2_2 ? 1 : 0) << 8 | (FCMP_UO(fpu1, x87_r2_2) ? 1 : 0) << 0xa
            | (fpu1 == x87_r2_2 ? 1 : 0) << 0xe | 0x1000;

        if (*(&result + 1) & 0x41)
        {
            long double x87_r2_4 = v_4c_1;
            long double f6_1 = (*(int32_t*)(uintptr_t)(a4 + 0xa0));
            x87_r2_4 - f6_1;
            result = (x87_r2_4 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_4, f6_1) ? 1 : 0) << 0xa
                | (x87_r2_4 == f6_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f7_1 = (*(int32_t*)(uintptr_t)(a4 + 0xa8));
                x87_r3_11 - f7_1;
                result = (x87_r3_11 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r3_11, f7_1) ? 1 : 0) << 0xa
                    | (x87_r3_11 == f7_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                {
                    result = 1;
                    return result;
                }
            }
        }
    }

    result = 0;
    return result;
}

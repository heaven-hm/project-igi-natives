#include "gi_platform.h"
#include "004F6D70-Script_ExecuteLevelScript_19.h"
int32_t Script_ExecuteLevelScript_19(long double a1 , float a2)

{
    float srcS = a2;
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(srcS + 0x2ca4)) * 30.0f;
    long double f1 = 1.0f;
    x87_r7_1 - f1;

    a2 = *(&((x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 1.0f : x87_r7_1;

    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(srcS + 0x2c5c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(srcS + 0x2c58));
    long double fpu5 = (*(int32_t*)(uintptr_t)(srcS + 0x2c54));
    long double x87_r7_6 =
        (16384.0f - sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + x87_r7_3 * x87_r7_3)) * 0.000244140625.0f;
    long double f2 = 0.0f;
    x87_r7_6 - f2;

    if (*(&((x87_r7_6 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f2) ? 1 : 0) << 0xa
            | (x87_r7_6 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r7_6 = 0.0f;

    int32_t valA1 = Script_CallNativeHandler_19(srcS);
    int32_t valA2 = -(valA1);
    (*(int32_t*)(uintptr_t)(srcS + 0x2cac)) = valA2 - valA2 + 1;
    int32_t result = Script_SpawnNewTask_7(srcS + 0x2cb8, srcS);
    long double f4 = 0.0;
    a1 - f4;
    result = (a1 < f4 ? 1 : 0) << 8 | (FCMP_UO(a1, f4) ? 1 : 0) << 0xa
        | (a1 == f4 ? 1 : 0) << 0xe | 0x800;
    long double x87_r0_2;

    if (!(*(&result + 1) & 0x40))
    {
        result = (*(int32_t*)(uintptr_t)(srcS + 0x2cac));

        if (!result)
            goto label_4f6e4f;

        long double fpu0 = (*(int32_t*)(uintptr_t)(srcS + 0x2d08));
        long double f6_1 = a2;
        fpu0 - f6_1;
        result = (fpu0 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f6_1) ? 1 : 0) << 0xa
            | (fpu0 == f6_1 ? 1 : 0) << 0xe | 0x800;

        if (!(*(&result + 1) & 1))
            goto label_4f6e78;

        x87_r0_2 = (*(int32_t*)(uintptr_t)(srcS + 0x2d08)) + 1.0f;
        goto label_4f6e72;
    }
    label_4f6e4f: ;
    long double x87_r0_3 = (*(int32_t*)(uintptr_t)(srcS + 0x2d08));
    long double f5_1 = 0.0f;
    x87_r0_3 - f5_1;
    result = (x87_r0_3 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_3, f5_1) ? 1 : 0) << 0xa
        | (x87_r0_3 == f5_1 ? 1 : 0) << 0xe | 0x800;

    if (!(*(&result + 1) & 0x41))
    {
        x87_r0_2 = (*(int32_t*)(uintptr_t)(srcS + 0x2d08)) - 1.0f;
    label_4f6e72: ;
        (*(int32_t*)(uintptr_t)(srcS + 0x2d08)) = x87_r0_2;
    label_4f6e78: ;
        float objC1 = (*(int32_t*)(uintptr_t)(srcS + 0x2c70));
        long double x87_r0_5 = (*(int32_t*)(uintptr_t)(srcS + 0x2c6c));
        long double x87_r7_10 = objC1;
        long double x87_r7_12 = 1.0 / sqrtl(x87_r0_5 * x87_r0_5 + x87_r7_10 * x87_r7_10 + 1.0);
        float v_18 = x87_r0_5 * x87_r7_12;
        float v_14_2 = objC1 * x87_r7_12;
        float v_10_1 = x87_r7_12 * -1.0;
        long double x87_r0_12 =
            (*(int32_t*)(uintptr_t)(srcS + 0x2d08)) / a2 * (*(int32_t*)(uintptr_t)(srcS + 0x2c9c)) * (*(int32_t*)(uintptr_t)(srcS + 0x2c88)) + (*(int32_t*)(uintptr_t)(srcS + 0x2c84));
        (*(int32_t*)(uintptr_t)(srcS + 0x2c84)) = x87_r0_12;
        long double f7_1 = 1.0f;
        x87_r0_12 - f7_1;
        result = (x87_r0_12 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_12, f7_1) ? 1 : 0) << 0xa
            | (x87_r0_12 == f7_1 ? 1 : 0) << 0xe | 0x800;

        while (!(*(&result + 1) & 1))
        {
            a2 = 0.5.0f - Sys_AllocateMemory_14(0xa76c90);
            long double x87_r0_16 = 0.5.0f - Sys_AllocateMemory_14(0xa76c90);
            int32_t tmpD1 = (*(int32_t*)(uintptr_t)(srcS + 0x2c94));
            float valA6 = (*(int32_t*)(uintptr_t)(srcS + 0x2c90));
            float objC2 = (*(int32_t*)(uintptr_t)(srcS + 0x2c8c));
            float v_c = a2 * (*(int32_t*)(uintptr_t)(srcS + 0x2c7c));
            float v_8_1 = x87_r0_16 * (*(int32_t*)(uintptr_t)(srcS + 0x2c7c));
            float v_4_1 = (*(int32_t*)(uintptr_t)(srcS + 0x2c7c)) * 0.5.0f;
            result = Script_ParseEnumReal32_19(srcS, &v_c, &v_18, objC2, valA6, tmpD1);
            long double x87_r0_21 = (*(int32_t*)(uintptr_t)(srcS + 0x2c84)) - 1.0f;
            (*(int32_t*)(uintptr_t)(srcS + 0x2c84)) = x87_r0_21;
            long double f8_1 = 1.0f;
            x87_r0_21 - f8_1;
            result = (x87_r0_21 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_21, f8_1) ? 1 : 0) << 0xa
                | (x87_r0_21 == f8_1 ? 1 : 0) << 0xe | 0x800;
        }

        float* objC3 = srcS + 0x80;
        int32_t i_1 = 7;
        int32_t i;

        do
        {
            int32_t j_1 = 7;
            int32_t j;

            do
            {
                int32_t k_1 = 7;
                int32_t k;

                do
                {
                    long double x87_r0_22 = *objC3;
                    long double f9_1 = (*(int32_t*)(uintptr_t)(srcS + 0x2ca0));
                    x87_r0_22 - f9_1;
                    result = (x87_r0_22 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r0_22, f9_1) ? 1 : 0) << 0xa
                        | (x87_r0_22 == f9_1 ? 1 : 0) << 0xe | 0x800;

                    if (*(&result + 1) & 1)
                        *objC3 = (*(int32_t*)(uintptr_t)(srcS + 0x2ca0)) / (x87_r7_6 + x87_r7_6 + 1.0f) + *objC3;

                    objC3 = &objC3[8];
                    k = k_1;
                    k_1 -= 1;
                } while (k != 1);
                j = j_1;
                j_1 -= 1;
            } while (j != 1);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

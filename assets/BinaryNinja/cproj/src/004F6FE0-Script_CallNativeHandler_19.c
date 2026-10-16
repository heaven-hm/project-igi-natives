#include "gi_platform.h"
#include "004F6FE0-Script_CallNativeHandler_19.h"
int32_t Script_CallNativeHandler_19(void* a1)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x2c38));
    long double f0 = 0.0;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        return 0;

    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x2c18)) + (*(int32_t*)(uintptr_t)(a1 + 0x2c08)) + (*(int32_t*)(uintptr_t)(a1 + 0x2c10));
    long double f1 = 0.0;
    x87_r7_3 - f1;

    if (!(*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
        | (x87_r7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        double v_8_1 = (*(int32_t*)(uintptr_t)(a1 + 0x2c38)) * 2048.0;
        long double x87_r7_7 = (*(int32_t*)(uintptr_t)(a1 + 0x2c20)) - v_8_1;
        long double f2_1 = (*(int32_t*)(uintptr_t)(a1 + 0x2c08));
        x87_r7_7 - f2_1;

        if (*(&((x87_r7_7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            long double x87_r7_9 = (*(int32_t*)(uintptr_t)(a1 + 0x2c40)) * 2048.0;
            long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0x2c28)) - x87_r7_9;
            long double f3_1 = (*(int32_t*)(uintptr_t)(a1 + 0x2c10));
            x87_r6_2 - f3_1;

            if (*(&((x87_r6_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f3_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_4 = v_8_1 + (*(int32_t*)(uintptr_t)(a1 + 0x2c20));
                long double f4_1 = (*(int32_t*)(uintptr_t)(a1 + 0x2c08));
                x87_r6_4 - f4_1;

                if (!(*(&((x87_r6_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, f4_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r7_10 = x87_r7_9 + (*(int32_t*)(uintptr_t)(a1 + 0x2c28));
                    long double f5_1 = (*(int32_t*)(uintptr_t)(a1 + 0x2c10));
                    x87_r7_10 - f5_1;

                    if (!(*(&((x87_r7_10 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                        return 0;
                }
            }
        }
    }

    return 1;
}

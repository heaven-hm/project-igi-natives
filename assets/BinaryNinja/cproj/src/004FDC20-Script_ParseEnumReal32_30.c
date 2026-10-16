#include "gi_platform.h"
#include "004FDC20-Script_ParseEnumReal32_30.h"
long double Script_ParseEnumReal32_30(void* a1)

{
    double v_18 = (*(int32_t*)(uintptr_t)(a1 + 0xa0)) - (*(int32_t*)(uintptr_t)(a1 + 0x88));
    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa8)) - (*(int32_t*)(uintptr_t)(a1 + 0x90));
    double v_10 = x87_r7_3;
    long double x87_r6_2 = v_18;
    long double f0 = 0.0;
    x87_r6_2 - f0;

    if (*(&((x87_r6_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f0) ? 1 : 0) << 0xa
        | (x87_r6_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        long double f1_1 = 0.0;
        x87_r7_3 - f1_1;

        if (*(&((x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0xb0)) - (*(int32_t*)(uintptr_t)(a1 + 0x98));
            long double f3_1 = 0.0;
            x87_r7_4 - f3_1;

            if (*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1.0f;
        }
    }

    long double result = Sys_OpenFileStream_11(&v_18) * 0.5 + 8192.0f;
    long double f2 = 1.0f;
    result - f2;

    if (!(*(&((result < f2 ? 1 : 0) << 8 | (FCMP_UO(result, f2) ? 1 : 0) << 0xa
            | (result == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return result;

    return 1.0f;
}

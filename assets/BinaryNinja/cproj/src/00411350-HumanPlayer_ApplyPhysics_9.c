#include "gi_platform.h"
#include "00411350-HumanPlayer_ApplyPhysics_9.h"
int32_t HumanPlayer_ApplyPhysics_9(void* a1)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0xddc));
    long double f0 = 0.0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xddc));
        long double f1_1 = 1.0f;
        x87_r7_1 - f1_1;
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0xddc));
        long double x87_r7_3;

        x87_r7_3 = *(&((x87_r7_1 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe
            | 0x3800) + 1) & 0x41 ? x87_r7_2 - 0.0166666675.0f : x87_r7_2 - 0.0111111114.0f;

        (*(int32_t*)(uintptr_t)(a1 + 0xddc)) = x87_r7_3;
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0xddc));
        long double f2_1 = 0.0f;
        x87_r7_4 - f2_1;
        result = (x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
            (*(int32_t*)(uintptr_t)(a1 + 0xddc)) = 0;
    }

    return result;
}

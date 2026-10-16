#include "gi_platform.h"
#include "004A2800-Camera_ApplyLineFilter_2.h"
int32_t Camera_ApplyLineFilter_2(void* a1, float a2, float a3, float a4)

{
    long double fpu7 = 0.0f;
    long double f0 = a2;
    fpu7 - f0;
    long double x87_r7_1;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_2 = 1.0f;
        long double f1_1 = a2;
        x87_r7_2 - f1_1;

        x87_r7_1 = !(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? a2 : 1.0f;
    }
    else
        x87_r7_1 = 0.0f;

    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = x87_r7_1;
    long double x87_r7_3 = 0.0f;
    long double f2 = a3;
    x87_r7_3 - f2;
    long double x87_r7_4;

    if (*(&((x87_r7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2) ? 1 : 0) << 0xa
        | (x87_r7_3 == f2 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_5 = 1.0f;
        long double f3_1 = a3;
        x87_r7_5 - f3_1;

        x87_r7_4 = !(*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? a3 : 1.0f;
    }
    else
        x87_r7_4 = 0.0f;

    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = x87_r7_4;
    long double x87_r7_6 = 0.0f;
    long double f4 = a4;
    x87_r7_6 - f4;
    int16_t valA = (x87_r7_6 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f4) ? 1 : 0) << 0xa
        | (x87_r7_6 == f4 ? 1 : 0) << 0xe;

    if (!((*(int32_t*)(uintptr_t)(&valA + 1)) & 0x41))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
        return valA;
    }

    long double x87_r7_7 = 1.0f;
    long double f5 = a4;
    x87_r7_7 - f5;
    valA = (x87_r7_7 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f5) ? 1 : 0) << 0xa
        | (x87_r7_7 == f5 ? 1 : 0) << 0xe;

    if (!((*(int32_t*)(uintptr_t)(&valA + 1)) & 1))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = a4;
        return a4;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0x3f800000;
    return valA;
}

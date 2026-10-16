#include "gi_platform.h"
#include "004E09D0-Shadow_LoadParameters.h"
int32_t* Shadow_LoadParameters(float a1)

{
    float ctxB = a1;
    int32_t* result = (*(int32_t*)(uintptr_t)(ctxB + 0x28));

    if (!*result || !*(*(int32_t*)(uintptr_t)(ctxB + 0x2c)))
        return result;

    long double x87_r7_4 = (1.0 - *(*(int32_t*)(uintptr_t)(ctxB + 0x30)) / (*(int32_t*)(uintptr_t)(ctxB + 0x38))) * 0.800000012.0f;
    long double f0_1 = 0.300000012.0f;
    x87_r7_4 - f0_1;

    if (!(*(&((x87_r7_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0_1) ? 1 : 0) << 0xa
        | (x87_r7_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_1 = 0.0f;
        x87_r6_1 - x87_r7_4;

        if (*(&((x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r6_2 = 1.0f;
            x87_r6_2 - x87_r7_4;

            if (*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_4 = 1.0f;
        }
        else
            x87_r7_4 = 0.0f;
    }
    else
        x87_r7_4 = 0.300000012.0f;

    (*(int32_t*)(uintptr_t)(ctxB + 0x118)) = g_548708[0];
    (*(int32_t*)(uintptr_t)(ctxB + 0x11c)) = g_548708[4][0];
    (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = g_548708[8][0];
    (*(int32_t*)(uintptr_t)(ctxB + 0x118)) = x87_r7_4 * (*(int32_t*)(uintptr_t)(ctxB + 0x118));
    int32_t* valA2 = (*(int32_t*)(uintptr_t)(ctxB + 0x34));
    (*(int32_t*)(uintptr_t)(ctxB + 0x11c)) = x87_r7_4 * (*(int32_t*)(uintptr_t)(ctxB + 0x11c));
    (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = x87_r7_4 * (*(int32_t*)(uintptr_t)(ctxB + 0x120));
    float v_28;
    Sys_ResolveSymbol_12(&v_28, valA2);
    long double x87_r7_10 = -((*(int32_t*)(uintptr_t)(ctxB + 0x3c)));
    (*(int32_t*)(uintptr_t)(ctxB + 0x4c)) = x87_r7_10;
    (*(int32_t*)(uintptr_t)(ctxB + 0x5c)) = x87_r7_10;
    (*(int32_t*)(uintptr_t)(ctxB + 0x64)) = x87_r7_10;
    long double x87_r6_7 = (*(int32_t*)(uintptr_t)(ctxB + 0x3c));
    int32_t tmpD5 = (*(int32_t*)(uintptr_t)(ctxB + 0x3c));
    (*(int32_t*)(uintptr_t)(ctxB + 0x68)) = x87_r7_10;
    (*(int32_t*)(uintptr_t)(ctxB + 0x44)) = tmpD5;
    (*(int32_t*)(uintptr_t)(ctxB + 0x48)) = 0x41200000;
    (*(int32_t*)(uintptr_t)(ctxB + 0x54)) = 0x41200000;
    float v_10;
    a1 = v_10 * 10.0f;
    (*(int32_t*)(uintptr_t)(ctxB + 0x60)) = 0x41200000;
    (*(int32_t*)(uintptr_t)(ctxB + 0x6c)) = 0x41200000;
    (*(int32_t*)(uintptr_t)(ctxB + 0x40)) = tmpD5;
    (*(int32_t*)(uintptr_t)(ctxB + 0x50)) = tmpD5;
    (*(int32_t*)(uintptr_t)(ctxB + 0x58)) = tmpD5;
    float v_1c;
    float v_50_1 = x87_r6_7 * v_1c;
    long double x87_r5_7 = x87_r6_7 * v_28;
    (*(int32_t*)(uintptr_t)(ctxB + 0x40)) = x87_r5_7 + v_50_1 + a1;
    float v_c;
    float v_58_1 = v_c * 10.0f;
    float v_18;
    float v_4c_1 = x87_r6_7 * v_18;
    float v_24;
    long double x87_r5_15 = x87_r6_7 * v_24;
    float v_8;
    float v_54_1 = v_8 * 10.0f;
    float v_14;
    float v_48_1 = x87_r6_7 * v_14;
    float v_20;
    long double x87_r6_8 = x87_r6_7 * v_20;
    long double x87_r6_12 = x87_r7_10 * v_28;
    (*(int32_t*)(uintptr_t)(ctxB + 0x44)) = x87_r5_15 + v_4c_1 + v_58_1;
    (*(int32_t*)(uintptr_t)(ctxB + 0x48)) = x87_r6_8 + v_48_1 + v_54_1;
    int32_t srcS1 = (*(int32_t*)(uintptr_t)(ctxB + 0x24));
    int32_t dstD2 = (*(int32_t*)(uintptr_t)(ctxB + 0x74)) + 0x20;
    long double x87_r6_16 = x87_r7_10 * v_24;
    (*(int32_t*)(uintptr_t)(ctxB + 0x4c)) = x87_r6_12 + v_50_1 + a1;
    long double x87_r6_20 = x87_r7_10 * v_20;
    (*(int32_t*)(uintptr_t)(ctxB + 0x50)) = x87_r6_16 + v_4c_1 + v_58_1;
    (*(int32_t*)(uintptr_t)(ctxB + 0x54)) = x87_r6_20 + v_48_1 + v_54_1;
    float v_48_2 = x87_r7_10 * v_1c;
    (*(int32_t*)(uintptr_t)(ctxB + 0x58)) = x87_r5_7 + v_48_2 + a1;
    float v_44_2 = x87_r7_10 * v_18;
    long double x87_r7_11 = x87_r7_10 * v_14;
    (*(int32_t*)(uintptr_t)(ctxB + 0x5c)) = x87_r5_15 + v_44_2 + v_58_1;
    (*(int32_t*)(uintptr_t)(ctxB + 0x60)) = x87_r6_8 + x87_r7_11 + v_54_1;
    (*(int32_t*)(uintptr_t)(ctxB + 0x64)) = x87_r6_12 + v_48_2 + a1;
    (*(int32_t*)(uintptr_t)(ctxB + 0x68)) = x87_r6_16 + v_44_2 + v_58_1;
    (*(int32_t*)(uintptr_t)(ctxB + 0x6c)) = x87_r6_20 + x87_r7_11 + v_54_1;
    memcpy(dstD2, srcS1, 0x18);
    int32_t valA8 = (*(int32_t*)(uintptr_t)(ctxB + 0x70));
    (*(int32_t*)(uintptr_t)(ctxB + 0xc0)) = valA8;
    (*(int32_t*)(uintptr_t)(ctxB + 0x110)) = valA8;
    void* ctxB1 = (*(int32_t*)(uintptr_t)(ctxB + 0x74));
    int32_t valA9 = 0;
    valA9 = *(ctxB1 + 0x1c);
    return ((int(*)())(uintptr_t)(*((valA9 << 2) + &g_a982e0)))(ctxB1, 0);
}

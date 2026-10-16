#include "gi_platform.h"
#include "00470EC0-Weapon_UpdateMuzzleFlash.h"
float* Weapon_UpdateMuzzleFlash(float* a1, float* a2, float* a3, double* a4)

{
    long double x87_r7_1 = *a4 - (*(int32_t*)(uintptr_t)(a1 + 0x28));
    long double x87_r6_1 = a4[1] - (*(int32_t*)(uintptr_t)(a1 + 0x30));
    long double x87_r5_1 = a4[2] - (*(int32_t*)(uintptr_t)(a1 + 0x38));
    float* valA1 = a3;
    float v_c = x87_r5_1 * a1[2] + x87_r6_1 * a1[1] + x87_r7_1 * *a1;
    float v_8 = x87_r5_1 * a1[5] + x87_r6_1 * a1[4] + x87_r7_1 * a1[3];
    long double x87_r7_3 = x87_r5_1 * a1[8] + x87_r6_1 * a1[7] + x87_r7_1 * a1[6];
    *valA1 = x87_r7_3;
    long double f1 = 0.0f;
    x87_r7_3 - f1;
    valA1 = (x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
        | (x87_r7_3 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&valA1 + 1) & 0x41)
        return valA1;

    long double x87_r7_4 = 1.0 / x87_r7_3;
    *a2 = a1[0x12] * v_c * x87_r7_4 + a1[0x14];
    a2[1] = a1[0x13] * v_8 * x87_r7_4 + a1[0x15];
    return a2;
}

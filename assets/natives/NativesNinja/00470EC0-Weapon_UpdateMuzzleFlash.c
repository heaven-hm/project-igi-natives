#include "00470EC0-Weapon_UpdateMuzzleFlash.h"
/* 0x00470ec0 Weapon_UpdateMuzzleFlash full linked: callers=1 callees=0 */
float* sub_470ec0(float* a1, float* a2, float* a3, double* a4)

{
    long double x87_r7_1 = *a4 - *(a1 + 0x28);
    long double x87_r6_1 = a4[1] - *(a1 + 0x30);
    long double x87_r5_1 = a4[2] - *(a1 + 0x38);
    float* eax_1 = a3;
    float var_c = x87_r5_1 * a1[2] + x87_r6_1 * a1[1] + x87_r7_1 * *a1;
    float var_8 = x87_r5_1 * a1[5] + x87_r6_1 * a1[4] + x87_r7_1 * a1[3];
    long double x87_r7_3 = x87_r5_1 * a1[8] + x87_r6_1 * a1[7] + x87_r7_1 * a1[6];
    *eax_1 = x87_r7_3;
    long double temp1 = 0f;
    x87_r7_3 - temp1;
    eax_1 = (x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&eax_1 + 1) & 0x41)
        return eax_1;

    long double x87_r7_4 = 1.0 / x87_r7_3;
    *a2 = a1[0x12] * var_c * x87_r7_4 + a1[0x14];
    a2[1] = a1[0x13] * var_8 * x87_r7_4 + a1[0x15];
    return a2;
}

#include "004B4390-Sys_ReadFileBlock_13.h"
/* 0x004b4390 Sys_ReadFileBlock_13 full linked: callers=1 callees=1 */
int32_t sub_4b4390(int32_t a1, float a2)

{
    float* eax = a2;
    long double x87_r7_1 = eax[3] * eax[7];
    long double x87_r6_1 = eax[6] * eax[5];
    long double x87_r5_1 = eax[8] * eax[4];
    long double x87_r4_1 = eax[5] * eax[7];
    float var_30 = eax[8] * eax[3];
    float var_2c = eax[6] * eax[4];
    long double x87_r3_9 =
        x87_r5_1 * *eax + x87_r7_1 * eax[2] + x87_r6_1 * eax[1] - x87_r4_1 * *eax - var_30 * eax[1];
    a2 = 1f / (x87_r3_9 - var_2c * eax[2]);
    float var_28 = (x87_r5_1 - x87_r4_1) * a2;
    float var_24 = -(((var_30 - x87_r6_1) * a2));
    float var_20 = (x87_r7_1 - var_2c) * a2;
    float var_1c = -(((eax[8] * eax[1] - eax[2] * eax[7]) * a2));
    float var_18 = (eax[8] * *eax - eax[6] * eax[2]) * a2;
    float var_14 = -(((*eax * eax[7] - eax[6] * eax[1]) * a2));
    float var_10 = (eax[5] * eax[1] - eax[2] * eax[4]) * a2;
    float var_c = -(((eax[5] * *eax - eax[3] * eax[2]) * a2));
    int32_t result = eax[9] + 1;
    int32_t result_1 = result;
    float var_8 = (eax[4] * *eax - eax[3] * eax[1]) * a2;
    memcpy(a1, &var_28, 0x28);
    return result;
}

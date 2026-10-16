#include "004B33A0-Sys_CheckHeap_11.h"
/* 0x004b33a0 Sys_CheckHeap_11 full linked: callers=2 callees=2 */
int32_t sub_4b33a0(int32_t a1, float* a2, float a3, float a4, float a5)

{
    float var_50;
    sub_4b38e0(&var_50, a3, a4, a5);
    float var_4c;
    float var_48;
    float var_28 = var_50 * *a2 + var_48 * a2[6] + var_4c * a2[3];
    float var_24 = var_50 * a2[1] + var_48 * a2[7] + var_4c * a2[4];
    float var_20 = var_50 * a2[2] + var_48 * a2[8] + var_4c * a2[5];
    float var_44;
    float var_40;
    float var_3c;
    float var_1c = var_44 * *a2 + var_3c * a2[6] + var_40 * a2[3];
    float var_18 = var_44 * a2[1] + var_3c * a2[7] + var_40 * a2[4];
    float var_14 = var_44 * a2[2] + var_3c * a2[8] + var_40 * a2[5];
    float var_38;
    float var_34;
    float var_30;
    float var_10 = var_38 * *a2 + var_30 * a2[6] + var_34 * a2[3];
    float var_c = var_38 * a2[1] + var_30 * a2[7] + var_34 * a2[4];
    int32_t var_2c;
    int32_t result = a2[9] + var_2c + 1;
    int32_t result_1 = result;
    float var_8 = var_38 * a2[2] + var_30 * a2[8] + var_34 * a2[5];
    memcpy(a1, &var_28, 0x28);
    return result;
}

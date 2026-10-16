#include "004B3790-Sys_OpenFileStream_12.h"
/* 0x004b3790 Sys_OpenFileStream_12 full linked: callers=6 callees=2 */
int32_t sub_4b3790(int32_t a1, float* a2, float a3)

{
    float var_50;
    sub_4b3be0(&var_50, a3);
    float var_44;
    float var_38;
    float var_28 = var_50 * *a2 + var_38 * a2[2] + var_44 * a2[1];
    float var_4c;
    float var_40;
    float var_34;
    float var_24 = var_4c * *a2 + var_34 * a2[2] + var_40 * a2[1];
    float var_48;
    float var_3c;
    float var_30;
    float var_20 = var_48 * *a2 + var_30 * a2[2] + var_3c * a2[1];
    float var_1c = var_50 * a2[3] + var_38 * a2[5] + var_44 * a2[4];
    float var_18 = var_4c * a2[3] + var_34 * a2[5] + var_40 * a2[4];
    float var_14 = var_48 * a2[3] + var_30 * a2[5] + var_3c * a2[4];
    float var_10 = var_50 * a2[6] + var_38 * a2[8] + var_44 * a2[7];
    float var_c = var_4c * a2[6] + var_34 * a2[8] + var_40 * a2[7];
    int32_t result;
    int32_t var_4 = a2[9] + result + 1;
    float var_8 = var_48 * a2[6] + var_30 * a2[8] + var_3c * a2[7];
    memcpy(a1, &var_28, 0x28);
    return result;
}

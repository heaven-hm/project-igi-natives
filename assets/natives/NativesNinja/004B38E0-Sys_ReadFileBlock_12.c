#include "004B38E0-Sys_ReadFileBlock_12.h"
/* 0x004b38e0 Sys_ReadFileBlock_12 full linked: callers=38 callees=5 */
int32_t sub_4b38e0(float* a1, float a2, float a3, float a4)

{
    sub_4b3be0(a1, a4);
    float var_50;
    sub_4b3ba0(&var_50, a3);
    float var_44;
    float var_38;
    float var_28 = var_50 * *a1 + var_38 * a1[2] + var_44 * a1[1];
    float var_4c;
    float var_40;
    float var_34;
    float var_24 = var_4c * *a1 + var_34 * a1[2] + var_40 * a1[1];
    float var_48;
    float var_3c;
    float var_30;
    float var_20 = var_48 * *a1 + var_30 * a1[2] + var_3c * a1[1];
    float var_1c = var_50 * a1[3] + var_38 * a1[5] + var_44 * a1[4];
    float var_18 = var_4c * a1[3] + var_34 * a1[5] + var_40 * a1[4];
    float var_14 = var_48 * a1[3] + var_30 * a1[5] + var_3c * a1[4];
    float var_10 = var_50 * a1[6] + var_38 * a1[8] + var_44 * a1[7];
    int32_t result;
    int32_t var_4 = result + a1[9] + 1;
    float var_c = var_4c * a1[6] + var_34 * a1[8] + var_40 * a1[7];
    float var_8 = var_48 * a1[6] + var_30 * a1[8] + var_3c * a1[7];
    memcpy(a1, &var_28, 0x28);
    sub_4b3b60(&var_50, a2);
    var_28 = var_50 * *a1 + var_38 * a1[2] + var_44 * a1[1];
    float var_24_1 = var_4c * *a1 + var_34 * a1[2] + var_40 * a1[1];
    float var_20_1 = var_48 * *a1 + var_30 * a1[2] + var_3c * a1[1];
    float var_1c_1 = var_50 * a1[3] + var_38 * a1[5] + var_44 * a1[4];
    int32_t var_4_1 = result + a1[9] + 1;
    float var_18_1 = var_4c * a1[3] + var_34 * a1[5] + var_40 * a1[4];
    float var_14_1 = var_48 * a1[3] + var_30 * a1[5] + var_3c * a1[4];
    float var_10_1 = var_50 * a1[6] + var_38 * a1[8] + var_44 * a1[7];
    float var_c_1 = var_4c * a1[6] + var_34 * a1[8] + var_40 * a1[7];
    float var_8_1 = var_48 * a1[6] + var_30 * a1[8] + var_3c * a1[7];
    memcpy(a1, &var_28, 0x28);
    a1[9] = 0;
    return result;
}

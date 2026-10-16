#include "00434F50-Vehicle_UpdateCockpit_4.h"
/* 0x00434f50 Vehicle_UpdateCockpit_4 full linked: callers=4 callees=2 */
int32_t Vehicle_UpdateCockpit_4(void* a1, float* a2)

{
    float var_50;
    sub_4b3b60(&var_50, *(a1 + 0x13c));
    float var_44;
    float var_38;
    long double x87_r7_3 =
        var_38 * *(a1 + 0x110) + var_44 * *(a1 + 0x10c) + var_50 * *(a1 + 0x108);
    float var_4c;
    float var_40;
    float var_34;
    float var_24 = var_34 * *(a1 + 0x110) + var_40 * *(a1 + 0x10c) + var_4c * *(a1 + 0x108);
    float var_48;
    float var_3c;
    float var_30;
    float var_20 = var_30 * *(a1 + 0x110) + var_3c * *(a1 + 0x10c) + var_48 * *(a1 + 0x108);
    long double x87_r6_15 =
        var_50 * *(a1 + 0x114) + var_38 * *(a1 + 0x11c) + var_44 * *(a1 + 0x118);
    float var_18 = var_4c * *(a1 + 0x114) + var_34 * *(a1 + 0x11c) + var_40 * *(a1 + 0x118);
    float var_14 = var_48 * *(a1 + 0x114) + var_30 * *(a1 + 0x11c) + var_3c * *(a1 + 0x118);
    long double x87_r5_23 =
        var_50 * *(a1 + 0x120) + var_38 * *(a1 + 0x128) + var_44 * *(a1 + 0x124);
    int32_t var_2c;
    int32_t ecx = *(a1 + 0x12c) + var_2c + 1;
    float var_c = var_4c * *(a1 + 0x120) + var_34 * *(a1 + 0x128) + var_40 * *(a1 + 0x124);
    float var_8 = var_48 * *(a1 + 0x120) + var_30 * *(a1 + 0x128) + var_3c * *(a1 + 0x124);
    var_50 = x87_r5_23 * a2[2] + x87_r6_15 * a2[1] + x87_r7_3 * *a2;
    float var_4c_1 = var_c * a2[2] + var_18 * a2[1] + var_24 * *a2;
    float var_48_1 = var_8 * a2[2] + var_14 * a2[1] + var_20 * *a2;
    float var_44_1 = x87_r5_23 * a2[5] + x87_r6_15 * a2[4] + x87_r7_3 * a2[3];
    float var_40_1 = var_c * a2[5] + var_18 * a2[4] + var_24 * a2[3];
    float var_3c_1 = var_8 * a2[5] + var_14 * a2[4] + var_20 * a2[3];
    float var_38_1 = x87_r7_3 * a2[6] + x87_r5_23 * a2[8] + x87_r6_15 * a2[7];
    float var_34_1 = var_24 * a2[6] + var_c * a2[8] + var_18 * a2[7];
    int32_t result = a2[9] + ecx + 1;
    int32_t result_1 = result;
    float var_30_1 = var_20 * a2[6] + var_8 * a2[8] + var_14 * a2[7];
    memcpy(a1 + 0x70, &var_50, 0x28);
    return result;
}

#include "Vehicle_UpdateCockpit_4.h"
int32_t Vehicle_UpdateCockpit_4(void* a1, float* a2)

{
    float v_50;
    Sys_CloseFileStream_12(&v_50, *(a1 + 0x13c));
    float v_44;
    float v_38;
    long double x87_r7_3 =
        v_38 * *(a1 + 0x110) + v_44 * *(a1 + 0x10c) + v_50 * *(a1 + 0x108);
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_34 * *(a1 + 0x110) + v_40 * *(a1 + 0x10c) + v_4c * *(a1 + 0x108);
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_30 * *(a1 + 0x110) + v_3c * *(a1 + 0x10c) + v_48 * *(a1 + 0x108);
    long double x87_r6_15 =
        v_50 * *(a1 + 0x114) + v_38 * *(a1 + 0x11c) + v_44 * *(a1 + 0x118);
    float v_18 = v_4c * *(a1 + 0x114) + v_34 * *(a1 + 0x11c) + v_40 * *(a1 + 0x118);
    float v_14 = v_48 * *(a1 + 0x114) + v_30 * *(a1 + 0x11c) + v_3c * *(a1 + 0x118);
    long double x87_r5_23 =
        v_50 * *(a1 + 0x120) + v_38 * *(a1 + 0x128) + v_44 * *(a1 + 0x124);
    int32_t v_2c;
    int32_t objC = *(a1 + 0x12c) + v_2c + 1;
    float v_c = v_4c * *(a1 + 0x120) + v_34 * *(a1 + 0x128) + v_40 * *(a1 + 0x124);
    float v_8 = v_48 * *(a1 + 0x120) + v_30 * *(a1 + 0x128) + v_3c * *(a1 + 0x124);
    v_50 = x87_r5_23 * a2[2] + x87_r6_15 * a2[1] + x87_r7_3 * *a2;
    float v_4c_1 = v_c * a2[2] + v_18 * a2[1] + v_24 * *a2;
    float v_48_1 = v_8 * a2[2] + v_14 * a2[1] + v_20 * *a2;
    float v_44_1 = x87_r5_23 * a2[5] + x87_r6_15 * a2[4] + x87_r7_3 * a2[3];
    float v_40_1 = v_c * a2[5] + v_18 * a2[4] + v_24 * a2[3];
    float v_3c_1 = v_8 * a2[5] + v_14 * a2[4] + v_20 * a2[3];
    float v_38_1 = x87_r7_3 * a2[6] + x87_r5_23 * a2[8] + x87_r6_15 * a2[7];
    float v_34_1 = v_24 * a2[6] + v_c * a2[8] + v_18 * a2[7];
    int32_t result = a2[9] + objC + 1;
    int32_t result_1 = result;
    float v_30_1 = v_20 * a2[6] + v_8 * a2[8] + v_14 * a2[7];
    memcpy(a1 + 0x70, &v_50, 0x28);
    return result;
}

#include "004FB2C0-PhysicsObj_LoadParameters.h"
/* 0x004fb2c0 PhysicsObj_LoadParameters full linked: callers=0 callees=1 */
int32_t sub_4fb2c0(void* a1, int32_t* a2)

{
    long double x87_r7_1 = *(a1 + 0x20) - *(a1 + 0x6c0);
    double* edx = *a2;
    double var_28 = *(a1 + 0x28) - *(a1 + 0x6c8);
    double var_20 = *(a1 + 0x30) - *(a1 + 0x6d0);
    long double x87_r6_5 = *edx - *(a1 + 0x6c0);
    double var_68 = edx[1] - *(a1 + 0x6c8);
    double var_60 = edx[2] - *(a1 + 0x6d0);
    long double x87_r5_7 =
        *(a1 + 0x6a0) * var_68 + *(a1 + 0x6ac) * var_60 + *(a1 + 0x694) * x87_r6_5;
    long double x87_r4_7 =
        *(a1 + 0x6a4) * var_68 + *(a1 + 0x6b0) * var_60 + *(a1 + 0x698) * x87_r6_5;
    long double x87_r3_7 =
        *(a1 + 0x6a8) * var_68 + *(a1 + 0x6b4) * var_60 + *(a1 + 0x69c) * x87_r6_5;
    double var_58 =
        *(a1 + 0x74) * x87_r4_7 + *(a1 + 0x78) * x87_r3_7 + *(a1 + 0x70) * x87_r5_7;
    double var_50 =
        *(a1 + 0x80) * x87_r4_7 + *(a1 + 0x84) * x87_r3_7 + *(a1 + 0x7c) * x87_r5_7;
    double var_48 =
        *(a1 + 0x8c) * x87_r4_7 + *(a1 + 0x90) * x87_r3_7 + *(a1 + 0x88) * x87_r5_7;
    *(a2 + 8) = var_58 + x87_r7_1 - x87_r6_5;
    *(a2 + 0x10) = var_50 + var_28 - var_68;
    *(a2 + 0x18) = var_48 + var_20 - var_60;
    long double x87_r7_9 = *(a1 + 0x694);
    long double x87_r6_7 = *(a1 + 0x698);
    long double x87_r5_12 = *(a1 + 0x69c);
    float edx_1 = *(a1 + 0x6a0);
    var_28 = *(a1 + 0x6ac);
    var_20 = *(a1 + 0x6a4);
    *(&var_20 + 4) = *(a1 + 0x6b0);
    float edx_5 = *(a1 + 0x6a8);
    float edx_6 = *(a1 + 0x6b4);
    var_58 = x87_r6_7 * *(a1 + 0x74) + x87_r5_12 * *(a1 + 0x78) + x87_r7_9 * *(a1 + 0x70);
    int32_t edx_7 = *(a1 + 0x6b8);
    *(&var_58 + 4) = var_20 * *(a1 + 0x74) + edx_5 * *(a1 + 0x78) + edx_1 * *(a1 + 0x70);
    var_50 = *(&var_20 + 4) * *(a1 + 0x74) + edx_6 * *(a1 + 0x78) + var_28 * *(a1 + 0x70);
    *(&var_50 + 4) =
        x87_r6_7 * *(a1 + 0x80) + x87_r5_12 * *(a1 + 0x84) + x87_r7_9 * *(a1 + 0x7c);
    var_48 = var_20 * *(a1 + 0x80) + edx_5 * *(a1 + 0x84) + edx_1 * *(a1 + 0x7c);
    *(&var_48 + 4) =
        *(&var_20 + 4) * *(a1 + 0x80) + edx_6 * *(a1 + 0x84) + var_28 * *(a1 + 0x7c);
    float var_40 =
        x87_r6_7 * *(a1 + 0x8c) + x87_r5_12 * *(a1 + 0x90) + x87_r7_9 * *(a1 + 0x88);
    float var_3c = var_20 * *(a1 + 0x8c) + edx_5 * *(a1 + 0x90) + edx_1 * *(a1 + 0x88);
    int32_t result = *(a1 + 0x94);
    int32_t var_34 = result + edx_7 + 1;
    float var_38 =
        *(&var_20 + 4) * *(a1 + 0x8c) + edx_6 * *(a1 + 0x90) + var_28 * *(a1 + 0x88);
    memcpy(&a2[8], &var_58, 0x28);
    return result;
}

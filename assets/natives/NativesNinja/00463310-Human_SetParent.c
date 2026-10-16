#include "00463310-Human_SetParent.h"
/* 0x00463310 Human_SetParent full linked: callers=4 callees=3 */
void* sub_463310(void* a1, void* a2)

{
    long double x87_r7 = *(a1 + 0x20);
    *(a1 + 0x76c) = a2;
    long double x87_r7_1 = x87_r7 - *(a2 + 0x20);
    long double x87_r6_1 = *(a1 + 0x28) - *(a2 + 0x28);
    long double x87_r5_1 = *(a1 + 0x30) - *(a2 + 0x30);
    double var_50 =
        *(a2 + 0x7c) * x87_r6_1 + *(a2 + 0x88) * x87_r5_1 + *(a2 + 0x70) * x87_r7_1;
    int32_t var_48 =
        *(a2 + 0x80) * x87_r6_1 + *(a2 + 0x8c) * x87_r5_1 + *(a2 + 0x74) * x87_r7_1;
    double var_40 =
        *(a2 + 0x84) * x87_r6_1 + *(a2 + 0x90) * x87_r5_1 + *(a2 + 0x78) * x87_r7_1;
    memcpy(a1 + 0x770, &var_50, 0x18);
    long double x87_r7_3 = *(a2 + 0x70);
    long double x87_r6_3 = *(a2 + 0x74);
    long double x87_r5_3 = *(a2 + 0x78);
    long double x87_r4_14 = x87_r6_3 * *(a1 + 0x7c) + x87_r5_3 * *(a1 + 0x80);
    long double x87_r3_15 = x87_r7_3 * *(a1 + 0x78);
    *(&var_50 + 4) = *(a2 + 0x7c);
    int32_t ecx_1 = *(a2 + 0x88);
    var_40 = *(a2 + 0x80);
    *(&var_40 + 4) = *(a2 + 0x8c);
    float ecx_4 = *(a2 + 0x84);
    float var_28 = x87_r4_14 + x87_r3_15;
    float ecx_5 = *(a2 + 0x90);
    float var_24 =
        var_40 * *(a1 + 0x7c) + ecx_4 * *(a1 + 0x80) + *(&var_50 + 4) * *(a1 + 0x78);
    int32_t var_4 = *(a1 + 0x9c) + *(a2 + 0x94) + 1;
    float var_20 =
        *(&var_40 + 4) * *(a1 + 0x7c) + ecx_5 * *(a1 + 0x80) + ecx_1 * *(a1 + 0x78);
    float var_1c =
        x87_r5_3 * *(a1 + 0x8c) + x87_r7_3 * *(a1 + 0x84) + x87_r6_3 * *(a1 + 0x88);
    float var_18 =
        ecx_4 * *(a1 + 0x8c) + *(&var_50 + 4) * *(a1 + 0x84) + var_40 * *(a1 + 0x88);
    float var_14 =
        ecx_5 * *(a1 + 0x8c) + ecx_1 * *(a1 + 0x84) + *(&var_40 + 4) * *(a1 + 0x88);
    float var_10 =
        x87_r6_3 * *(a1 + 0x94) + x87_r5_3 * *(a1 + 0x98) + x87_r7_3 * *(a1 + 0x90);
    float var_c =
        var_40 * *(a1 + 0x94) + ecx_4 * *(a1 + 0x98) + *(&var_50 + 4) * *(a1 + 0x90);
    float var_8 = *(&var_40 + 4) * *(a1 + 0x94) + ecx_5 * *(a1 + 0x98) + ecx_1 * *(a1 + 0x90);
    memcpy(a1 + 0x788, &var_28, 0x28);
    return sub_464230(a1);
}

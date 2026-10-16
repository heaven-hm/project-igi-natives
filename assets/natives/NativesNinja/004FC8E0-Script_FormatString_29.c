#include "004FC8E0-Script_FormatString_29.h"
/* 0x004fc8e0 Script_FormatString_29 full linked: callers=1 callees=2 */
float sub_4fc8e0(float a1, float* a2, float a3, float* a4, float a5, float a6 @ 0x1c) __location("eax")

{
    float esi = a1;
    float eax = *(esi + 4);
    float var_28;
    sub_4b3c20(&var_28, *(esi + 0xc), *(esi + 0x10), *(esi + 0x14));
    float* edx_1 = a3;
    long double x87_r7_2 = a4[1] * edx_1[2] - edx_1[1] * a4[2];
    long double x87_r6_5 = -((*a4 * edx_1[2] - *edx_1 * a4[2]));
    long double x87_r5_4 = edx_1[1] * *a4 - *edx_1 * a4[1];
    float var_34 = x87_r7_2 * *a2 + x87_r5_4 * a2[6] + x87_r6_5 * a2[3];
    float var_30 = x87_r7_2 * a2[1] + x87_r5_4 * a2[7] + x87_r6_5 * a2[4];
    long double x87_r7_6 = x87_r7_2 * a2[2] + x87_r5_4 * a2[8] + x87_r6_5 * a2[5];
    float var_24;
    float var_20;
    float var_40 = var_20 * x87_r7_6 + var_24 * var_30 + var_28 * var_34;
    float var_1c;
    float var_18;
    float var_14;
    float var_3c = var_14 * x87_r7_6 + var_18 * var_30 + var_1c * var_34;
    float var_10;
    float var_c;
    float var_8;
    long double x87_r7_9 = x87_r7_6 * var_8 + var_c * var_30 + var_10 * var_34;
    float var_34_1 = var_3c * a2[1] + var_40 * *a2 + x87_r7_9 * a2[2];
    float var_30_1 = var_3c * a2[4] + var_40 * a2[3] + x87_r7_9 * a2[5];
    long double x87_r7_11 = var_3c * a2[7] + var_40 * a2[6] + x87_r7_9 * a2[8];
    long double x87_r5_37 = -((var_34_1 * a4[2] - x87_r7_11 * *a4)) * edx_1[1]
        + (var_30_1 * a4[2] - x87_r7_11 * a4[1]) * *edx_1;
    long double x87_r7_16 = -(((a6 + 1f) * a5))
        / (x87_r5_37 + (var_34_1 * a4[1] - var_30_1 * *a4) * edx_1[2] + eax);
    float var_40_3 = *edx_1 * x87_r7_16;
    float var_3c_2 = edx_1[1] * x87_r7_16;
    float var_38_1 = edx_1[2] * x87_r7_16;
    long double x87_r7_20 = var_38_1 * a4[1] - var_3c_2 * a4[2];
    long double x87_r6_56 = -((var_38_1 * *a4 - var_40_3 * a4[2]));
    long double x87_r5_44 = var_3c_2 * *a4 - var_40_3 * a4[1];
    float var_30_2 = x87_r5_44 * a2[7] + x87_r6_56 * a2[4] + x87_r7_20 * a2[1];
    long double x87_r7_24 = x87_r7_20 * a2[2] + x87_r5_44 * a2[8] + x87_r6_56 * a2[5];
    long double x87_r6_59 =
        x87_r5_44 * a2[6] + x87_r6_56 * a2[3] + x87_r7_20 * *a2 + *(esi + 0x30);
    a3 = x87_r6_59;
    *(esi + 0x30) = x87_r6_59;
    long double x87_r6_61 = var_30_2 + *(esi + 0x34);
    a1 = x87_r6_61;
    *(esi + 0x34) = x87_r6_61;
    long double x87_r7_25 = x87_r7_24 + *(esi + 0x38);
    *(esi + 0x38) = x87_r7_25;
    *(esi + 0x48) = x87_r7_25 * var_20 + a1 * var_24 + a3 * var_28;
    *(esi + 0x4c) = x87_r7_25 * var_14 + a1 * var_18 + a3 * var_1c;
    *(esi + 0x50) = x87_r7_25 * var_8 + a1 * var_c + a3 * var_10;
    long double x87_r7_36 =
        a2[4] * *(esi + 0x4c) + *(esi + 0x50) * a2[5] + *(esi + 0x48) * a2[3];
    long double x87_r7_39 = a2[7] * *(esi + 0x4c) + *(esi + 0x50) * a2[8];
    long double x87_r6_85 = *(esi + 0x48) * a2[6];
    *(esi + 0x48) = a2[1] * *(esi + 0x4c) + *a2 * *(esi + 0x48) + a2[2] * *(esi + 0x50);
    *(esi + 0x4c) = x87_r7_36;
    long double x87_r7_42 = var_40_3 * *(esi + 4);
    long double x87_r6_87 = var_3c_2 * *(esi + 4);
    *(esi + 0x50) = x87_r7_39 + x87_r6_85;
    float var_34_5 = var_40_3;
    float var_2c_3 = var_38_1 * *(esi + 4);
    float ecx_5 = *(esi + 0x20);
    long double x87_r7_45 = *(esi + 0x1c) + x87_r6_87;
    *(esi + 0x18) = *(esi + 0x18) + x87_r7_42;
    *(esi + 0x1c) = x87_r7_45;
    *(esi + 0x20) = ecx_5 + var_2c_3;
    return sub_4ecdb0(esi);
}

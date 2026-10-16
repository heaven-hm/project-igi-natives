#include "0052B510-CubeModifier_LoadParameters.h"
/* 0x0052b510 CubeModifier_LoadParameters full linked: callers=0 callees=1 */
int32_t sub_52b510(int32_t a1)

{
    int32_t edx = 0x40000000 >> (*(a1 + 0x70) & 0x1f);
    double var_30;
    memcpy(&var_30, a1 + 0x28, 0x18);
    void* ecx_1 = *(a1 + 0x20);
    int32_t edx_1 = edx << 1;
    long double x87_r7 = *(ecx_1 + 0xde0);
    long double x87_r6 = *(ecx_1 + 0xde4);
    int32_t var_48 = edx_1;
    int32_t edx_2 = -(edx_1);
    double var_10 = x87_r6;
    long double x87_r5 = *(ecx_1 + 0xde8);
    double var_8 = x87_r5;
    long double x87_r6_2 = (var_30 + x87_r7) & edx_2;
    double var_28;
    double var_40 = (var_28 + x87_r6) & edx_2;
    double var_20;
    double var_38_3 = (var_20 + x87_r5) & edx_2;
    var_48 = var_48;
    *(a1 + 0x40) = x87_r6_2 - x87_r7;
    *(a1 + 0x48) = var_40 - var_10;
    *(a1 + 0x50) = var_38_3 - var_8;
    *(a1 + 0x58) = var_48 + x87_r6_2 - x87_r7;
    *(a1 + 0x60) = var_48 + var_40 - var_10;
    *(a1 + 0x68) = var_48 + var_38_3 - var_8;
    return a1;
}

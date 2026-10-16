#include "0051A280-SplinePathDynCubeObj_OnEvent.h"
/* 0x0051a280 SplinePathDynCubeObj_OnEvent full linked: callers=4 callees=1 */
int32_t sub_51a280(int32_t a1, float a2, int32_t a3, float a4)

{
    long double x87_r7_1 = a4 * a4;
    void* eax = *(a2 + (a3 << 2) + 0x68);
    void* ecx_1 = *(a2 + (a3 << 2) + 0x6c);
    float var_20 = x87_r7_1 * a4;
    float var_1c = var_20 - (x87_r7_1 + x87_r7_1) + a4;
    a2 = x87_r7_1 * 3f;
    long double x87_r6_8 = var_20;
    a4 = x87_r6_8 + x87_r6_8 - a2 + 1f;
    long double x87_r7_2 = var_20 - x87_r7_1;
    long double x87_r6_14 = var_20 * -2f + a2;
    long double x87_r5_4 = x87_r6_14 * *(ecx_1 + 0x20) + x87_r7_2 * *(ecx_1 + 0x78)
        + a4 * *(eax + 0x20) + var_1c * *(eax + 0x78);
    double var_18 = x87_r5_4;
    long double x87_r5_9 = x87_r6_14 * *(ecx_1 + 0x28) + x87_r7_2 * *(ecx_1 + 0x80)
        + a4 * *(eax + 0x28) + var_1c * *(eax + 0x80);
    double var_10 = x87_r5_9;
    long double x87_r7_6 = x87_r6_14 * *(ecx_1 + 0x30) + x87_r7_2 * *(ecx_1 + 0x88)
        + a4 * *(eax + 0x30) + var_1c * *(eax + 0x88);
    double var_8 = x87_r7_6;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

#include "0051A370-SplinePathDynCubeObj_Process.h"
/* 0x0051a370 SplinePathDynCubeObj_Process full linked: callers=1 callees=0 */
float* sub_51a370(float* a1, float a2, float a3, float a4)

{
    long double x87_r7_1 = a4 * a4;
    void* eax = *(a2 + (a3 << 2) + 0x68);
    void* ecx_1 = *(a2 + (a3 << 2) + 0x6c);
    float var_10 = x87_r7_1 * 3f;
    float var_14 = var_10 - a4 * 4f + 1f;
    long double x87_r6_7 = a4 * 6f;
    a2 = x87_r7_1 * -6f + x87_r6_7;
    long double x87_r6_10 = x87_r7_1 * 6f - x87_r6_7;
    long double x87_r6_13 = a4;
    a4 = var_10 - (x87_r6_13 + x87_r6_13);
    long double x87_r5_7 = *(ecx_1 + 0x78);
    a3 = x87_r5_7;
    long double x87_r5_9 = *(eax + 0x78);
    a3 = x87_r5_9;
    float var_c =
        x87_r6_10 * *(eax + 0x20) + a2 * *(ecx_1 + 0x20) + x87_r5_7 * a4 + x87_r5_9 * var_14;
    long double x87_r5_15 = *(ecx_1 + 0x80);
    a3 = x87_r5_15;
    long double x87_r5_17 = *(eax + 0x80);
    a3 = x87_r5_17;
    float var_8 =
        x87_r6_10 * *(eax + 0x28) + a2 * *(ecx_1 + 0x28) + x87_r5_15 * a4 + x87_r5_17 * var_14;
    long double x87_r7_7 = x87_r6_10 * *(eax + 0x30) + a2 * *(ecx_1 + 0x30);
    long double x87_r6_34 = *(ecx_1 + 0x88);
    a2 = x87_r6_34;
    long double x87_r7_8 = x87_r7_7 + x87_r6_34 * a4;
    long double x87_r6_36 = *(eax + 0x88);
    a4 = x87_r6_36;
    *a1 = var_c;
    a1[1] = var_8;
    a1[2] = x87_r7_8 + x87_r6_36 * var_14;
    return a1;
}

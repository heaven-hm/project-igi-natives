// Original IGI.EXE function: SplinePathDynCubeObj_Process (VA 0x0051A370; static CFG gate PASS, CFG score 1.000).
#include "SplinePathDynCubeObj_Process.h"
float* SplinePathDynCubeObj_Process(float* a1, float a2, float a3, float a4)

{
    long double x87_r7_1 = a4 * a4;
    void* valA = *(a2 + (a3 << 2) + 0x68);
    void* objC1 = *(a2 + (a3 << 2) + 0x6c);
    float v_10 = x87_r7_1 * 3f;
    float v_14 = v_10 - a4 * 4f + 1f;
    long double x87_r6_7 = a4 * 6f;
    a2 = x87_r7_1 * -6f + x87_r6_7;
    long double x87_r6_10 = x87_r7_1 * 6f - x87_r6_7;
    long double x87_r6_13 = a4;
    a4 = v_10 - (x87_r6_13 + x87_r6_13);
    long double x87_r5_7 = *(objC1 + 0x78);
    a3 = x87_r5_7;
    long double x87_r5_9 = *(valA + 0x78);
    a3 = x87_r5_9;
    float v_c =
        x87_r6_10 * *(valA + 0x20) + a2 * *(objC1 + 0x20) + x87_r5_7 * a4 + x87_r5_9 * v_14;
    long double x87_r5_15 = *(objC1 + 0x80);
    a3 = x87_r5_15;
    long double x87_r5_17 = *(valA + 0x80);
    a3 = x87_r5_17;
    float v_8 =
        x87_r6_10 * *(valA + 0x28) + a2 * *(objC1 + 0x28) + x87_r5_15 * a4 + x87_r5_17 * v_14;
    long double x87_r7_7 = x87_r6_10 * *(valA + 0x30) + a2 * *(objC1 + 0x30);
    long double x87_r6_34 = *(objC1 + 0x88);
    a2 = x87_r6_34;
    long double x87_r7_8 = x87_r7_7 + x87_r6_34 * a4;
    long double x87_r6_36 = *(valA + 0x88);
    a4 = x87_r6_36;
    *a1 = v_c;
    a1[1] = v_8;
    a1[2] = x87_r7_8 + x87_r6_36 * v_14;
    return a1;
}

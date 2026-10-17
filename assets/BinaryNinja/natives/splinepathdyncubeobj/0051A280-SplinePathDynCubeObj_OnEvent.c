// Original IGI.EXE function: SplinePathDynCubeObj_OnEvent (VA 0x0051A280; static CFG gate FAIL, CFG score 0.667).
#include "SplinePathDynCubeObj_OnEvent.h"
int32_t SplinePathDynCubeObj_OnEvent(int32_t a1, float a2, int32_t a3, float a4)

{
    long double x87_r7_1 = a4 * a4;
    void* valA = *(a2 + (a3 << 2) + 0x68);
    void* objC1 = *(a2 + (a3 << 2) + 0x6c);
    float v_20 = x87_r7_1 * a4;
    float v_1c = v_20 - (x87_r7_1 + x87_r7_1) + a4;
    a2 = x87_r7_1 * 3f;
    long double x87_r6_8 = v_20;
    a4 = x87_r6_8 + x87_r6_8 - a2 + 1f;
    long double x87_r7_2 = v_20 - x87_r7_1;
    long double x87_r6_14 = v_20 * -2f + a2;
    long double x87_r5_4 = x87_r6_14 * *(objC1 + 0x20) + x87_r7_2 * *(objC1 + 0x78)
        + a4 * *(valA + 0x20) + v_1c * *(valA + 0x78);
    double v_18 = x87_r5_4;
    long double x87_r5_9 = x87_r6_14 * *(objC1 + 0x28) + x87_r7_2 * *(objC1 + 0x80)
        + a4 * *(valA + 0x28) + v_1c * *(valA + 0x80);
    double v_10 = x87_r5_9;
    long double x87_r7_6 = x87_r6_14 * *(objC1 + 0x30) + x87_r7_2 * *(objC1 + 0x88)
        + a4 * *(valA + 0x30) + v_1c * *(valA + 0x88);
    double v_8 = x87_r7_6;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

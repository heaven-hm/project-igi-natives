// Original IGI.EXE function: CubeModifier_LoadParameters (VA 0x0052B510; static CFG gate FAIL, CFG score 0.667).
#include "CubeModifier_LoadParameters.h"
int32_t CubeModifier_LoadParameters(int32_t a1)

{
    int32_t tmpD = 0x40000000 >> (*(a1 + 0x70) & 0x1f);
    double v_30;
    memcpy(&v_30, a1 + 0x28, 0x18);
    void* objC1 = *(a1 + 0x20);
    int32_t tmpD1 = tmpD << 1;
    long double fpu7 = *(objC1 + 0xde0);
    long double fpu6 = *(objC1 + 0xde4);
    int32_t v_48 = tmpD1;
    int32_t tmpD2 = -(tmpD1);
    double v_10 = fpu6;
    long double fpu5 = *(objC1 + 0xde8);
    double v_8 = fpu5;
    long double x87_r6_2 = (v_30 + fpu7) & tmpD2;
    double v_28;
    double v_40 = (v_28 + fpu6) & tmpD2;
    double v_20;
    double v_38_3 = (v_20 + fpu5) & tmpD2;
    v_48 = v_48;
    *(a1 + 0x40) = x87_r6_2 - fpu7;
    *(a1 + 0x48) = v_40 - v_10;
    *(a1 + 0x50) = v_38_3 - v_8;
    *(a1 + 0x58) = v_48 + x87_r6_2 - fpu7;
    *(a1 + 0x60) = v_48 + v_40 - v_10;
    *(a1 + 0x68) = v_48 + v_38_3 - v_8;
    return a1;
}

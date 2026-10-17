// Original IGI.EXE function: Menu_DrawWidget_19 (VA 0x00428A60; static CFG gate PASS, CFG score 0.889).
#include "Menu_DrawWidget_19.h"
int32_t Menu_DrawWidget_19(void* a1, double* a2)

{
    double v_18;
    double* v_28 = &v_18;
    v_18 = *a2 - *(a1 + 0x20);
    double v_10 = a2[1] - *(a1 + 0x28);
    double v_8 = a2[2] - *(a1 + 0x30);
    long double x87_r7_7 = Sys_OpenFileStream_11(v_28) * 0.125;
    memcpy(&v_18, a2, 0x18);
    double v_8_1 = x87_r7_7 + v_8;
    double* v_2c = &v_18;
    void* v_30 = a1;
    long double fpu0;
    long double fpu1;
    return Menu_RequestScreen_20(fpu0, fpu1, v_30, v_2c);
}

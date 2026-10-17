// Original IGI.EXE function: Water_Process (VA 0x00518930; static CFG gate PASS, CFG score 1.000).
#include "Water_Process.h"
int32_t Water_Process(void* a1, float a2)

{
    int32_t* srcS = a2;
    double* valA = srcS[2];
    long double x87_r7_2 = srcS[1] * 0.5f / srcS[3];
    long double x87_r6_3 = (*(a1 + 0x4be8) - *valA + srcS[3]) * x87_r7_2;
    long double x87_r5_4 = (*(a1 + 0x4bf0) - valA[1] + srcS[3]) * x87_r7_2;
    long double x87_r4_4 = (*(a1 + 0x4c00) - *valA + srcS[3]) * x87_r7_2;
    float v_20 = x87_r4_4;
    float v_1c = x87_r5_4;
    float v_18 = x87_r6_3;
    long double x87_r7_4 = (*(a1 + 0x4c08) - valA[1] + srcS[3]) * x87_r7_2;
    float v_14 = x87_r7_4;
    SoundSys_SetFrequency_3(*srcS, x87_r6_3, x87_r5_4, v_20, v_1c, v_18, v_14);
    return SoundSys_SetFrequency_3(*srcS, v_20, v_1c, v_18, v_14, x87_r4_4, x87_r7_4);
}

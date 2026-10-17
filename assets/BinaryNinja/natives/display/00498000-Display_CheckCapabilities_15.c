// Original IGI.EXE function: Display_CheckCapabilities_15 (VA 0x00498000; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_15.h"
float* Display_CheckCapabilities_15(float* a1, float* a2)

{
    long double x87_r7_1 = 1.0 / a2[2];
    *a1 = *a2 * g_bcab28 * x87_r7_1 + g_bcab30;
    a1[1] = a2[1] * g_bcab2c * x87_r7_1 + g_bcab34;
    return a2;
}

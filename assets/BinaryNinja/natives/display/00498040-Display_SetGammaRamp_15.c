// Original IGI.EXE function: Display_SetGammaRamp_15 (VA 0x00498040; static CFG gate PASS, CFG score 1.000).
#include "Display_SetGammaRamp_15.h"
float* Display_SetGammaRamp_15(float* context, float* param_2, float param_3)

{
    long double fpu7 = 1.0 / param_3;
    *context = *param_2 * g_bcab28 * fpu7;
    context[1] = param_2[1] * g_bcab2c * fpu7;
    return param_2;
}

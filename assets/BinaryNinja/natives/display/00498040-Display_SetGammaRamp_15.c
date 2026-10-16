#include "Display_SetGammaRamp_15.h"
float* Display_SetGammaRamp_15(float* a1, float* a2, float a3)

{
    long double fpu7 = 1.0 / a3;
    *a1 = *a2 * g_bcab28 * fpu7;
    a1[1] = a2[1] * g_bcab2c * fpu7;
    return a2;
}

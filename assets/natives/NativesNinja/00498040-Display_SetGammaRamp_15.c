#include "00498040-Display_SetGammaRamp_15.h"
/* 0x00498040 Display_SetGammaRamp_15 full linked: callers=5 callees=0 */
float* sub_498040(float* a1, float* a2, float a3)

{
    long double x87_r7 = 1.0 / a3;
    *a1 = *a2 * g_bcab28 * x87_r7;
    a1[1] = a2[1] * g_bcab2c * x87_r7;
    return a2;
}

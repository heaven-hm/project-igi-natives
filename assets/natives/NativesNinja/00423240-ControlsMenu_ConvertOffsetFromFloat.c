#include "00423240-ControlsMenu_ConvertOffsetFromFloat.h"
/* 0x00423240 ControlsMenu_ConvertOffsetFromFloat full linked: callers=0 callees=3 */
int32_t ControlsMenu_ConvertOffsetFromFloat(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: int ControlsMenu_ConvertOffsetFromFloat(float value)
// Note: Inverse of ControlsMenu_ConvertFloatFromOffset: converts a float
// control value into the raw storage offset. Param: value = float 0.0-1.0. Use
// when saving a modified binding back.
{
    float var_2c = 0f;
    float var_30 = a3;
    Profile_ValueSet(var_30, var_2c);
    float var_20 = a1;
    char* var_8 = &g_567c74;
    long double x87_r0_2 = 0x11 * var_20 + 0.5f;
    var_20 = x87_r0_2;
    float var_18 = var_20;
    double var_10 = x87_r0_2;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

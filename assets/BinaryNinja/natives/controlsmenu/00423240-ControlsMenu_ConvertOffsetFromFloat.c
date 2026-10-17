// Original IGI.EXE function: ControlsMenu_ConvertOffsetFromFloat (VA 0x00423240; static CFG gate PASS, CFG score 0.889).
#include "ControlsMenu_ConvertOffsetFromFloat.h"
int32_t ControlsMenu_ConvertOffsetFromFloat(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: int ControlsMenu_ConvertOffsetFromFloat(float value)
// Note: Inverse of ControlsMenu_ConvertFloatFromOffset: converts a float
// control value into the raw storage offset. Param: value = float 0.0-1.0. Use
// when saving a modified binding back.
{
    float v_2c = 0f;
    float v_30 = a3;
    Profile_ValueSet(v_30, v_2c);
    float v_20 = a1;
    char* v_8 = &g_567c74;
    long double x87_r0_2 = 0x11 * v_20 + 0.5f;
    v_20 = x87_r0_2;
    float v_18 = v_20;
    double v_10 = x87_r0_2;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

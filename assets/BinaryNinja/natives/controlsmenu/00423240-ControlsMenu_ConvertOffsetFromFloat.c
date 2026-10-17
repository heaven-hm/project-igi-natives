// Original IGI.EXE function: ControlsMenu_ConvertOffsetFromFloat (VA 0x00423240; static CFG gate PASS, CFG score 0.889).
#include "ControlsMenu_ConvertOffsetFromFloat.h"
int32_t ControlsMenu_ConvertOffsetFromFloat(long double context , int32_t param_2, float param_3 )

// Sig: int ControlsMenu_ConvertOffsetFromFloat(float value)
// Note: Inverse of ControlsMenu_ConvertFloatFromOffset: converts a float
// control value into the raw storage offset. Param: value = float 0.0-1.0. Use
// when saving a modified binding back.
{
    float item_2c = 0.0f;
    float item_30 = param_3;
    Profile_ValueSet(item_30, item_2c);
    float item_20 = context;
    char* item_8 = &g_567c74;
    long double fpu_val_0_2 = 0x11 * item_20 + 0.5f;
    item_20 = fpu_val_0_2;
    float item_18 = item_20;
    double item_10 = fpu_val_0_2;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

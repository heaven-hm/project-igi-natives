#include "004231E0-ControlsMenu_ConvertFloatFromOffset.h"
/* 0x004231e0 ControlsMenu_ConvertFloatFromOffset full linked: callers=0 callees=3 */
int32_t ControlsMenu_ConvertFloatFromOffset(int32_t a1, int32_t a2 @ 0xc)

// Sig: float ControlsMenu_ConvertFloatFromOffset(int offset)
// Note: Converts a controls-menu slider/storage OFFSET into its float value
// (0.0-1.0 range used by the control configuration bars). Param: offset = raw
// integer offset stored for that control binding. Use when reading/writing
// control bindings from script.
{
    int32_t var_2c = 0;
    float var_30 = a2;
    long double x87_r7_1 = sub_4b8a20(var_30, var_2c) / 0x11;
    char* var_8 = &g_567c74;
    int32_t var_18 = x87_r7_1;
    double var_10 = x87_r7_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

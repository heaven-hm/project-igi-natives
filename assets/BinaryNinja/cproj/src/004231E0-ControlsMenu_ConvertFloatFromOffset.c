#include "gi_platform.h"
#include "004231E0-ControlsMenu_ConvertFloatFromOffset.h"
int32_t ControlsMenu_ConvertFloatFromOffset(int32_t a1, int32_t a2 )

// Sig: float ControlsMenu_ConvertFloatFromOffset(int offset)
// Note: Converts a controls-menu slider/storage OFFSET into its float value
// (0.0-1.0 range used by the control configuration bars). Param: offset = raw
// integer offset stored for that control binding. Use when reading/writing
// control bindings from script.
{
    int32_t v_2c = 0;
    float v_30 = a2;
    long double x87_r7_1 = Script_GetArg(v_30, v_2c) / 0x11;
    char* v_8 = &g_567c74;
    int32_t v_18 = x87_r7_1;
    double v_10 = x87_r7_1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

// Original IGI.EXE function: ControlsMenu_ConvertFloatFromOffset (VA 0x004231E0; static CFG gate PASS, CFG score 0.889).
#include "ControlsMenu_ConvertFloatFromOffset.h"
int32_t ControlsMenu_ConvertFloatFromOffset(int32_t context, int32_t param_2 )

// Sig: float ControlsMenu_ConvertFloatFromOffset(int offset)
// Note: Converts a controls-menu slider/storage OFFSET into its float value
// (0.0-1.0 range used by the control configuration bars). Param: offset = raw
// integer offset stored for that control binding. Use when reading/writing
// control bindings from script.
{
    int32_t item_2c = 0;
    float item_30 = param_2;
    long double fpu_val_7_1 = Script_GetArg(item_30, item_2c) / 0x11;
    char* item_8 = &g_567c74;
    int32_t item_18 = fpu_val_7_1;
    double item_10 = fpu_val_7_1;
    memcpy(context, &item_18, 0x18);
    return context;
}

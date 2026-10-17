// Original IGI.EXE function: Config_GameOptionsInputSetMouseSensitivity (VA 0x00404230; static CFG gate PASS, CFG score 0.889).
#include "Config_GameOptionsInputSetMouseSensitivity.h"
int32_t Config_GameOptionsInputSetMouseSensitivity(long double context , int32_t param_2, float param_3 )

// Sig: void Config_GameOptionsInputSetMouseSensitivity(int value)
// Note: Sets mouse-sensitivity in the config game-options write-out context.
// Param: value = sensitivity as stored by the options screen (integer scale).
{
    Profile_ValueSet(param_3, 0.0f);
    *(Config_GetActivePlayerProfileRecord() + 0x53c) = context;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

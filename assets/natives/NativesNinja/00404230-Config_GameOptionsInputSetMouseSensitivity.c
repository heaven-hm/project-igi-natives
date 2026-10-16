#include "00404230-Config_GameOptionsInputSetMouseSensitivity.h"
/* 0x00404230 Config_GameOptionsInputSetMouseSensitivity full linked: callers=0 callees=3 */
int32_t Config_GameOptionsInputSetMouseSensitivity(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_GameOptionsInputSetMouseSensitivity(int value)
// Note: Sets mouse-sensitivity in the config game-options write-out context.
// Param: value = sensitivity as stored by the options screen (integer scale).
{
    Profile_ValueSet(a3, 0f);
    *(Config_GetActivePlayerProfileRecord() + 0x53c) = a1;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

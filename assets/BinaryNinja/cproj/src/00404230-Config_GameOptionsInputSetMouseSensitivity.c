#include "gi_platform.h"
#include "00404230-Config_GameOptionsInputSetMouseSensitivity.h"
int32_t Config_GameOptionsInputSetMouseSensitivity(long double a1 , int32_t a2, float a3 )

// Sig: void Config_GameOptionsInputSetMouseSensitivity(int value)
// Note: Sets mouse-sensitivity in the config game-options write-out context.
// Param: value = sensitivity as stored by the options screen (integer scale).
{
    Profile_ValueSet(a3, 0.0f);
    *(Config_GetActivePlayerProfileRecord() + 0x53c) = a1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

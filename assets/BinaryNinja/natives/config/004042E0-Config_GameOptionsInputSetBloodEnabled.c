// Original IGI.EXE function: Config_GameOptionsInputSetBloodEnabled (VA 0x004042E0; static CFG gate PASS, CFG score 0.889).
#include "Config_GameOptionsInputSetBloodEnabled.h"
int32_t Config_GameOptionsInputSetBloodEnabled(int80_t a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_GameOptionsInputSetBloodEnabled(int blood)
// Note: Sets blood-enabled in the config game-options write-out context. Param:
// blood = 1 on, 0 off.
{
    float v_30 = 0f;
    Profile_ValueSet(a3, v_30);
    *(Config_GetActivePlayerProfileRecord() + 8) = a1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

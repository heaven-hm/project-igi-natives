#include "004042E0-Config_GameOptionsInputSetBloodEnabled.h"
/* 0x004042e0 Config_GameOptionsInputSetBloodEnabled full linked: callers=0 callees=3 */
int32_t Config_GameOptionsInputSetBloodEnabled(int80_t a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_GameOptionsInputSetBloodEnabled(int blood)
// Note: Sets blood-enabled in the config game-options write-out context. Param:
// blood = 1 on, 0 off.
{
    float var_30 = 0f;
    Profile_ValueSet(a3, var_30);
    *(Config_GetActivePlayerProfileRecord() + 8) = a1;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

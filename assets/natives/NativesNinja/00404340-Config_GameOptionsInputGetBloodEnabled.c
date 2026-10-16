#include "00404340-Config_GameOptionsInputGetBloodEnabled.h"
/* 0x00404340 Config_GameOptionsInputGetBloodEnabled full linked: callers=0 callees=3 */
int32_t Config_GameOptionsInputGetBloodEnabled(int32_t a1)

// Sig: int Config_GameOptionsInputGetBloodEnabled()
// Note: RETURNS the blood-enabled flag from the game-options config context
// (1/0). Takes no args.
{
    int32_t var_18 = *(Config_GetActivePlayerProfileRecord() + 8);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_GetActivePlayerProfileRecord() + 8);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

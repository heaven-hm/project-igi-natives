#include "00404290-Config_GameOptionsInputGetMouseSensitivity.h"
/* 0x00404290 Config_GameOptionsInputGetMouseSensitivity full linked: callers=0 callees=3 */
int32_t Config_GameOptionsInputGetMouseSensitivity(int32_t a1)

// Sig: int Config_GameOptionsInputGetMouseSensitivity()
// Note: RETURNS the stored mouse-sensitivity integer from the game-options
// config context. Takes no args.
{
    int32_t var_18 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

#include "Config_GameOptionsInputGetBloodEnabled.h"
int32_t Config_GameOptionsInputGetBloodEnabled(int32_t a1)

// Sig: int Config_GameOptionsInputGetBloodEnabled()
// Note: RETURNS the blood-enabled flag from the game-options config context
// (1/0). Takes no args.
{
    int32_t v_18 = *(Config_GetActivePlayerProfileRecord() + 8);
    char* v_8 = &g_567c74;
    double v_10 = *(Config_GetActivePlayerProfileRecord() + 8);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

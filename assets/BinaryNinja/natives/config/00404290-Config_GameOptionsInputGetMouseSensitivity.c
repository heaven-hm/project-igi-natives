#include "Config_GameOptionsInputGetMouseSensitivity.h"
int32_t Config_GameOptionsInputGetMouseSensitivity(int32_t a1)

// Sig: int Config_GameOptionsInputGetMouseSensitivity()
// Note: RETURNS the stored mouse-sensitivity integer from the game-options
// config context. Takes no args.
{
    int32_t v_18 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    char* v_8 = &g_567c74;
    double v_10 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

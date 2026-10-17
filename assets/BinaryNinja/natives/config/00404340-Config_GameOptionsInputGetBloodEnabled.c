// Original IGI.EXE function: Config_GameOptionsInputGetBloodEnabled (VA 0x00404340; static CFG gate PASS, CFG score 0.889).
#include "Config_GameOptionsInputGetBloodEnabled.h"
int32_t Config_GameOptionsInputGetBloodEnabled(int32_t context)

// Sig: int Config_GameOptionsInputGetBloodEnabled()
// Note: RETURNS the blood-enabled flag from the game-options config context
// (1/0). Takes no args.
{
    int32_t item_18 = *(Config_GetActivePlayerProfileRecord() + 8);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_GetActivePlayerProfileRecord() + 8);
    memcpy(context, &item_18, 0x18);
    return context;
}

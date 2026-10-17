// Original IGI.EXE function: Config_SoundOptionsGetSoundsEffects (VA 0x00404A90; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsGetSoundsEffects.h"
int32_t Config_SoundOptionsGetSoundsEffects(int32_t context)

// Sig: int Config_SoundOptionsGetSoundsEffects()
// Note: Returns 1 if sound effects are enabled for the active profile, else 0.
{
    int32_t item_18 = *(Config_SaveGameOptions() + 0xc);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_SaveGameOptions() + 0xc);
    memcpy(context, &item_18, 0x18);
    return context;
}

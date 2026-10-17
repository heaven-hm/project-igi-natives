// Original IGI.EXE function: Config_SoundOptionsGetMusicVolume (VA 0x00404CA0; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsGetMusicVolume.h"
int32_t Config_SoundOptionsGetMusicVolume(int32_t context)

// Sig: float Config_SoundOptionsGetMusicVolume()
// Note: Returns the active profile's music volume (0.0-1.0).
{
    int32_t item_18 = *(Config_SaveGameOptions() + 4);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_SaveGameOptions() + 4);
    memcpy(context, &item_18, 0x18);
    return context;
}

// Original IGI.EXE function: Config_SoundOptionsGetSpeechVolume (VA 0x00404E00; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsGetSpeechVolume.h"
int32_t Config_SoundOptionsGetSpeechVolume(int32_t context)

// Sig: float Config_SoundOptionsGetSpeechVolume()
// Note: Returns the active profile's speech volume (0.0-1.0).
{
    int32_t item_18 = *Config_SaveGameOptions();
    char* item_8 = &g_567c74;
    double item_10 = *Config_SaveGameOptions();
    memcpy(context, &item_18, 0x18);
    return context;
}

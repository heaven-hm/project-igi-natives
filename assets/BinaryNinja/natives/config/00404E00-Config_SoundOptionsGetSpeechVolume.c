// Original IGI.EXE function: Config_SoundOptionsGetSpeechVolume (VA 0x00404E00; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsGetSpeechVolume.h"
int32_t Config_SoundOptionsGetSpeechVolume(int32_t a1)

// Sig: float Config_SoundOptionsGetSpeechVolume()
// Note: Returns the active profile's speech volume (0.0-1.0).
{
    int32_t v_18 = *Config_SaveGameOptions();
    char* v_8 = &g_567c74;
    double v_10 = *Config_SaveGameOptions();
    memcpy(a1, &v_18, 0x18);
    return a1;
}

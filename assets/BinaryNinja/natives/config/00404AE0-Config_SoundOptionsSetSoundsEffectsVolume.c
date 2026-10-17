// Original IGI.EXE function: Config_SoundOptionsSetSoundsEffectsVolume (VA 0x00404AE0; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsSetSoundsEffectsVolume.h"
int32_t Config_SoundOptionsSetSoundsEffectsVolume(long double context , int32_t param_2, float param_3 )

// Sig: void Config_SoundOptionsSetSoundsEffectsVolume(float volume)
// Note: Sets SFX volume for the active profile. Param: volume = float 0.0-1.0.
{
    Profile_ValueSet(param_3, 0.0f);
    *Config_SaveGameOptions() = context;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

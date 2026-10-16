#include "00404B40-Config_SoundOptionsGetSoundsEffectsVolume.h"
/* 0x00404b40 Config_SoundOptionsGetSoundsEffectsVolume full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsGetSoundsEffectsVolume(int32_t a1)

// Sig: float Config_SoundOptionsGetSoundsEffectsVolume()
// Note: Returns the active profile's SFX volume (0.0-1.0).
{
    int32_t var_18 = *Config_SaveGameOptions();
    char* var_8 = &g_567c74;
    double var_10 = *Config_SaveGameOptions();
    memcpy(a1, &var_18, 0x18);
    return a1;
}

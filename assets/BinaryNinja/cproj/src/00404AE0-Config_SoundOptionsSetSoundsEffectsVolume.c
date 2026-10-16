#include "gi_platform.h"
#include "00404AE0-Config_SoundOptionsSetSoundsEffectsVolume.h"
int32_t Config_SoundOptionsSetSoundsEffectsVolume(long double a1 , int32_t a2, float a3 )

// Sig: void Config_SoundOptionsSetSoundsEffectsVolume(float volume)
// Note: Sets SFX volume for the active profile. Param: volume = float 0.0-1.0.
{
    Profile_ValueSet(a3, 0.0f);
    *Config_SaveGameOptions() = a1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

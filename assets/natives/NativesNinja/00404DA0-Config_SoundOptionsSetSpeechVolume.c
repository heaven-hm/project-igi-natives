#include "00404DA0-Config_SoundOptionsSetSpeechVolume.h"
/* 0x00404da0 Config_SoundOptionsSetSpeechVolume full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsSetSpeechVolume(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_SoundOptionsSetSpeechVolume(float volume)
// Note: Sets speech volume for the active profile. Param: volume = float
// 0.0-1.0.
{
    Profile_ValueSet(a3, 0f);
    *Config_SaveGameOptions() = a1;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

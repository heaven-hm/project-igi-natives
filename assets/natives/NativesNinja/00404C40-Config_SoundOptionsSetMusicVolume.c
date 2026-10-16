#include "00404C40-Config_SoundOptionsSetMusicVolume.h"
/* 0x00404c40 Config_SoundOptionsSetMusicVolume full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsSetMusicVolume(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_SoundOptionsSetMusicVolume(float volume)
// Note: Sets music volume for the active profile. Param: volume = float 0.0-1.0
// (pops a float arg - pass a float!).
{
    Profile_ValueSet(a3, 0f);
    *(Config_SaveGameOptions() + 4) = a1;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

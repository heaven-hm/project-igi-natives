#include "Config_SoundOptionsSetMusicVolume.h"
int32_t Config_SoundOptionsSetMusicVolume(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_SoundOptionsSetMusicVolume(float volume)
// Note: Sets music volume for the active profile. Param: volume = float 0.0-1.0
// (pops a float arg - pass a float!).
{
    Profile_ValueSet(a3, 0f);
    *(Config_SaveGameOptions() + 4) = a1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

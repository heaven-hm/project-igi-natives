#include "00404CA0-Config_SoundOptionsGetMusicVolume.h"
/* 0x00404ca0 Config_SoundOptionsGetMusicVolume full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsGetMusicVolume(int32_t a1)

// Sig: float Config_SoundOptionsGetMusicVolume()
// Note: Returns the active profile's music volume (0.0-1.0).
{
    int32_t var_18 = *(Config_SaveGameOptions() + 4);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_SaveGameOptions() + 4);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

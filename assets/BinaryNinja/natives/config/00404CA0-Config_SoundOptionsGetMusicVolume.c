#include "Config_SoundOptionsGetMusicVolume.h"
int32_t Config_SoundOptionsGetMusicVolume(int32_t a1)

// Sig: float Config_SoundOptionsGetMusicVolume()
// Note: Returns the active profile's music volume (0.0-1.0).
{
    int32_t v_18 = *(Config_SaveGameOptions() + 4);
    char* v_8 = &g_567c74;
    double v_10 = *(Config_SaveGameOptions() + 4);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

#include "00404BF0-Config_SoundOptionsGetMusic.h"
/* 0x00404bf0 Config_SoundOptionsGetMusic full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsGetMusic(int32_t a1)

// Sig: int Config_SoundOptionsGetMusic()
// Note: Returns 1 if music is enabled for the active profile, else 0.
{
    int32_t var_18 = *(Config_SaveGameOptions() + 0xd);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_SaveGameOptions() + 0xd);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

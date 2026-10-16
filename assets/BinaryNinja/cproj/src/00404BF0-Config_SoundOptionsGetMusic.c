#include "gi_platform.h"
#include "00404BF0-Config_SoundOptionsGetMusic.h"
int32_t Config_SoundOptionsGetMusic(int32_t a1)

// Sig: int Config_SoundOptionsGetMusic()
// Note: Returns 1 if music is enabled for the active profile, else 0.
{
    int32_t v_18 = *(Config_SaveGameOptions() + 0xd);
    char* v_8 = &g_567c74;
    double v_10 = *(Config_SaveGameOptions() + 0xd);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

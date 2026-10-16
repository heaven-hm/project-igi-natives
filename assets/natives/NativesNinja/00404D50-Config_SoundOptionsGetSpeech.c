#include "00404D50-Config_SoundOptionsGetSpeech.h"
/* 0x00404d50 Config_SoundOptionsGetSpeech full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsGetSpeech(int32_t a1)

// Sig: int Config_SoundOptionsGetSpeech()
// Note: Returns 1 if speech is enabled for the active profile, else 0.
{
    int32_t var_18 = *(Config_SaveGameOptions() + 0xe);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_SaveGameOptions() + 0xe);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

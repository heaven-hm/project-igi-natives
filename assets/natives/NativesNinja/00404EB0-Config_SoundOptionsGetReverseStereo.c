#include "00404EB0-Config_SoundOptionsGetReverseStereo.h"
/* 0x00404eb0 Config_SoundOptionsGetReverseStereo full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsGetReverseStereo(int32_t a1)

// Sig: int Config_SoundOptionsGetReverseStereo()
// Note: Returns 1 if stereo is reversed for the active profile, else 0.
{
    int32_t var_18 = *(Config_SaveGameOptions() + 0xf);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_SaveGameOptions() + 0xf);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

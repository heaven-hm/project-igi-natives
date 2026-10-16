#include "gi_platform.h"
#include "00404EB0-Config_SoundOptionsGetReverseStereo.h"
int32_t Config_SoundOptionsGetReverseStereo(int32_t a1)

// Sig: int Config_SoundOptionsGetReverseStereo()
// Note: Returns 1 if stereo is reversed for the active profile, else 0.
{
    int32_t v_18 = *(Config_SaveGameOptions() + 0xf);
    char* v_8 = &g_567c74;
    double v_10 = *(Config_SaveGameOptions() + 0xf);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

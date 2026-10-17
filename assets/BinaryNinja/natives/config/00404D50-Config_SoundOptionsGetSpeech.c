// Original IGI.EXE function: Config_SoundOptionsGetSpeech (VA 0x00404D50; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsGetSpeech.h"
int32_t Config_SoundOptionsGetSpeech(int32_t a1)

// Sig: int Config_SoundOptionsGetSpeech()
// Note: Returns 1 if speech is enabled for the active profile, else 0.
{
    int32_t v_18 = *(Config_SaveGameOptions() + 0xe);
    char* v_8 = &g_567c74;
    double v_10 = *(Config_SaveGameOptions() + 0xe);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

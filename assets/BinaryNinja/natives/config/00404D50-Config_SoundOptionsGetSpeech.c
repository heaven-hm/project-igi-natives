// Original IGI.EXE function: Config_SoundOptionsGetSpeech (VA 0x00404D50; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsGetSpeech.h"
int32_t Config_SoundOptionsGetSpeech(int32_t context)

// Sig: int Config_SoundOptionsGetSpeech()
// Note: Returns 1 if speech is enabled for the active profile, else 0.
{
    int32_t item_18 = *(Config_SaveGameOptions() + 0xe);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_SaveGameOptions() + 0xe);
    memcpy(context, &item_18, 0x18);
    return context;
}

// Original IGI.EXE function: Config_SoundOptionsGetReverseStereo (VA 0x00404EB0; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsGetReverseStereo.h"
int32_t Config_SoundOptionsGetReverseStereo(int32_t context)

// Sig: int Config_SoundOptionsGetReverseStereo()
// Note: Returns 1 if stereo is reversed for the active profile, else 0.
{
    int32_t item_18 = *(Config_SaveGameOptions() + 0xf);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_SaveGameOptions() + 0xf);
    memcpy(context, &item_18, 0x18);
    return context;
}

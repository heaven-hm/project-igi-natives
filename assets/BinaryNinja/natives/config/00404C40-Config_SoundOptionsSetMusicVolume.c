// Original IGI.EXE function: Config_SoundOptionsSetMusicVolume (VA 0x00404C40; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsSetMusicVolume.h"
int32_t Config_SoundOptionsSetMusicVolume(long double context , int32_t param_2, float param_3 )

// Sig: void Config_SoundOptionsSetMusicVolume(float volume)
// Note: Sets music volume for the active profile. Param: volume = float 0.0-1.0
// (pops a float arg - pass a float!).
{
    Profile_ValueSet(param_3, 0.0f);
    *(Config_SaveGameOptions() + 4) = context;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

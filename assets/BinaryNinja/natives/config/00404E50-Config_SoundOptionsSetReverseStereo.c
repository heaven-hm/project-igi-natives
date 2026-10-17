// Original IGI.EXE function: Config_SoundOptionsSetReverseStereo (VA 0x00404E50; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsSetReverseStereo.h"
int32_t Config_SoundOptionsSetReverseStereo(int32_t a1, float a2 @ 0xc)

// Sig: void Config_SoundOptionsSetReverseStereo(int onOff)
// Note: Toggles reversed stereo channels for the active profile. Param: onOff =
// 1 reverse, 0 normal.
{
    *(Config_SaveGameOptions() + 0xf) = Script_GetArg(a2, 0);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

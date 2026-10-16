#include "00404E50-Config_SoundOptionsSetReverseStereo.h"
/* 0x00404e50 Config_SoundOptionsSetReverseStereo full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsSetReverseStereo(int32_t a1, float a2 @ 0xc)

// Sig: void Config_SoundOptionsSetReverseStereo(int onOff)
// Note: Toggles reversed stereo channels for the active profile. Param: onOff =
// 1 reverse, 0 normal.
{
    *(Config_SaveGameOptions() + 0xf) = sub_4b8a20(a2, 0);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

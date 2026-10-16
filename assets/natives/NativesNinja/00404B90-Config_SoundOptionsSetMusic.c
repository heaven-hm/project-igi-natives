#include "00404B90-Config_SoundOptionsSetMusic.h"
/* 0x00404b90 Config_SoundOptionsSetMusic full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsSetMusic(int32_t a1, float a2 @ 0xc)

// Sig: void Config_SoundOptionsSetMusic(int onOff)
// Note: Enables/disables music for the active profile. Param: onOff = 1 on, 0
// off.
{
    *(Config_SaveGameOptions() + 0xd) = sub_4b8a20(a2, 0);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

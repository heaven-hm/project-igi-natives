#include "gi_platform.h"
#include "00404B90-Config_SoundOptionsSetMusic.h"
int32_t Config_SoundOptionsSetMusic(int32_t a1, float a2 )

// Sig: void Config_SoundOptionsSetMusic(int onOff)
// Note: Enables/disables music for the active profile. Param: onOff = 1 on, 0
// off.
{
    *(Config_SaveGameOptions() + 0xd) = Script_GetArg(a2, 0);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

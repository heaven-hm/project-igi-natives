#include "00404A90-Config_SoundOptionsGetSoundsEffects.h"
/* 0x00404a90 Config_SoundOptionsGetSoundsEffects full linked: callers=0 callees=3 */
int32_t Config_SoundOptionsGetSoundsEffects(int32_t a1)

// Sig: int Config_SoundOptionsGetSoundsEffects()
// Note: Returns 1 if sound effects are enabled for the active profile, else 0.
{
    int32_t var_18 = *(Config_SaveGameOptions() + 0xc);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_SaveGameOptions() + 0xc);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

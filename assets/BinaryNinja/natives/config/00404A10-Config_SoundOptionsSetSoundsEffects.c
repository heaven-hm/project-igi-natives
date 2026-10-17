// Original IGI.EXE function: Config_SoundOptionsSetSoundsEffects (VA 0x00404A10; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsSetSoundsEffects.h"
int32_t Config_SoundOptionsSetSoundsEffects(int32_t context, float param_2 )

// Sig: void Config_SoundOptionsSetSoundsEffects(int onOff)
// Note: Enables/disables sound effects for the active profile. Param: onOff = 1
// on, 0 off.
{
    *(Config_SaveGameOptions() + 0xc) = Script_GetArg(param_2, 0);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

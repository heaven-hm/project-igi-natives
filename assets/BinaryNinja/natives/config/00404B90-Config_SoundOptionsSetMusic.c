// IGI native provenance: Config_SoundOptionsSetMusic - 0x00404B90 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404B90-Config_SoundOptionsSetMusic.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsSetMusic.h"
int32_t Config_SoundOptionsSetMusic(int32_t context, float param_2 )

// Sig: void Config_SoundOptionsSetMusic(int onOff)
// Note: Enables/disables music for the active profile. Param: onOff = 1 on, 0
// off.
{
    *(Config_SaveGameOptions() + 0xd) = Script_GetArg(param_2, 0);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

// IGI native provenance: Config_SoundOptionsSetReverseStereo - 0x00404E50 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404E50-Config_SoundOptionsSetReverseStereo.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsSetReverseStereo.h"
int32_t Config_SoundOptionsSetReverseStereo(int32_t context, float param_2 )

// Sig: void Config_SoundOptionsSetReverseStereo(int onOff)
// Note: Toggles reversed stereo channels for the active profile. Param: onOff =
// 1 reverse, 0 normal.
{
    *(Config_SaveGameOptions() + 0xf) = Script_GetArg(param_2, 0);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

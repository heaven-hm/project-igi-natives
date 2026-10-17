// IGI native provenance: Config_SoundOptionsSetSpeech - 0x00404CF0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404CF0-Config_SoundOptionsSetSpeech.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsSetSpeech.h"
int32_t Config_SoundOptionsSetSpeech(int32_t context, float param_2 )

// Sig: void Config_SoundOptionsSetSpeech(int onOff)
// Note: Enables/disables radio speech for the active profile. Param: onOff = 1
// on, 0 off.
{
    *(Config_SaveGameOptions() + 0xe) = Script_GetArg(param_2, 0);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

// IGI native provenance: Config_SoundOptionsGetSpeechVolume - 0x00404E00 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404E00-Config_SoundOptionsGetSpeechVolume.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsGetSpeechVolume.h"
int32_t Config_SoundOptionsGetSpeechVolume(int32_t context)

// Sig: float Config_SoundOptionsGetSpeechVolume()
// Note: Returns the active profile's speech volume (0.0-1.0).
{
    int32_t item_18 = *Config_SaveGameOptions();
    char* item_8 = &g_567c74;
    double item_10 = *Config_SaveGameOptions();
    memcpy(context, &item_18, 0x18);
    return context;
}

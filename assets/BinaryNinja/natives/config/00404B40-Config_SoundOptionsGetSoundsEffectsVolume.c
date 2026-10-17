// IGI native provenance: Config_SoundOptionsGetSoundsEffectsVolume - 0x00404B40 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404B40-Config_SoundOptionsGetSoundsEffectsVolume.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsGetSoundsEffectsVolume.h"
int32_t Config_SoundOptionsGetSoundsEffectsVolume(int32_t context)

// Sig: float Config_SoundOptionsGetSoundsEffectsVolume()
// Note: Returns the active profile's SFX volume (0.0-1.0).
{
    int32_t item_18 = *Config_SaveGameOptions();
    char* item_8 = &g_567c74;
    double item_10 = *Config_SaveGameOptions();
    memcpy(context, &item_18, 0x18);
    return context;
}

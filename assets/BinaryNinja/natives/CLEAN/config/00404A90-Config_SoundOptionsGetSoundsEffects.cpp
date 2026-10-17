// IGI native provenance: Config_SoundOptionsGetSoundsEffects - 0x00404A90 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404A90-Config_SoundOptionsGetSoundsEffects.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsGetSoundsEffects.h"
int32_t Config_SoundOptionsGetSoundsEffects(int32_t context)

// Sig: int Config_SoundOptionsGetSoundsEffects()
// Note: Returns 1 if sound effects are enabled for the active profile, else 0.
{
    int32_t item_18 = *(Config_SaveGameOptions() + 0xc);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_SaveGameOptions() + 0xc);
    memcpy(context, &item_18, 0x18);
    return context;
}

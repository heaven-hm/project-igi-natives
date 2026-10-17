// IGI native provenance: Config_SoundOptionsGetMusicVolume - 0x00404CA0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404CA0-Config_SoundOptionsGetMusicVolume.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsGetMusicVolume.h"
int32_t Config_SoundOptionsGetMusicVolume(int32_t context)

// Sig: float Config_SoundOptionsGetMusicVolume()
// Note: Returns the active profile's music volume (0.0-1.0).
{
    int32_t item_18 = *(Config_SaveGameOptions() + 4);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_SaveGameOptions() + 4);
    memcpy(context, &item_18, 0x18);
    return context;
}

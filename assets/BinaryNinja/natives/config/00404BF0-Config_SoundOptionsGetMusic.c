// IGI native provenance: Config_SoundOptionsGetMusic - 0x00404BF0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404BF0-Config_SoundOptionsGetMusic.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SoundOptionsGetMusic.h"
int32_t Config_SoundOptionsGetMusic(int32_t context)

// Sig: int Config_SoundOptionsGetMusic()
// Note: Returns 1 if music is enabled for the active profile, else 0.
{
    int32_t item_18 = *(Config_SaveGameOptions() + 0xd);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_SaveGameOptions() + 0xd);
    memcpy(context, &item_18, 0x18);
    return context;
}

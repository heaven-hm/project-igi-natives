// IGI native provenance: Music_SetSfxVolume - 0x00495F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495F30-Music_SetSfxVolume.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Music_SetSfxVolume.h"
int32_t Music_SetSfxVolume(int32_t context)

// Sig: void Music_SetSfxVolume(float volume)
// Note: Sets the SFX bus volume feeding the music/sound mix path. Param: volume
// = float 0.0-1.0 scaled by global factor. Use for live SFX fade.
{
    g_54390c = context;
    return context;
}

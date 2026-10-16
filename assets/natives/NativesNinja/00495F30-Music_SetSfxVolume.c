#include "00495F30-Music_SetSfxVolume.h"
/* 0x00495f30 Music_SetSfxVolume full linked: callers=4 callees=0 */
int32_t Music_SetSfxVolume(int32_t a1)

// Sig: void Music_SetSfxVolume(float volume)
// Note: Sets the SFX bus volume feeding the music/sound mix path. Param: volume
// = float 0.0-1.0 scaled by global factor. Use for live SFX fade.
{
    g_54390c = a1;
    return a1;
}

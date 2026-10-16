#include "Music_SetSfxVolume.h"
int32_t Music_SetSfxVolume(int32_t a1)

// Sig: void Music_SetSfxVolume(float volume)
// Note: Sets the SFX bus volume feeding the music/sound mix path. Param: volume
// = float 0.0-1.0 scaled by global factor. Use for live SFX fade.
{
    g_54390c = a1;
    return a1;
}

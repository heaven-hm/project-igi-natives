#include "gi_platform.h"
#include "004EC5E0-SoundSys_LoadSoundDef_16.h"
void* SoundSys_LoadSoundDef_16(int32_t* a1, float a2, float a3, float a4, float a5)

{
    *a1 = a2;
    a1[3] = 1.0f / a3;
    a1[4] = 1.0f / a4;
    a1[5] = 1.0f / a5;
    a1[1] = 1.0f / a2;
    return SoundSys_AttachLipsync_16(a1);
}

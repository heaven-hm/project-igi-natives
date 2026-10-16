#include "gi_platform.h"
#include "004ECEA0-SoundSys_PlaySoundSample_17.h"
void* SoundSys_PlaySoundSample_17(int32_t* a1, float a2, float a3, float a4, float a5, int32_t a6)

{
    SoundSys_Update3DPosition_17(a1, a2, a3, a4, a5);
    return SoundSys_StopSoundSample_16(a1, a6);
}

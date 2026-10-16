#include "gi_platform.h"
#include "004EC180-SoundSys_InitSoundSys_16.h"
uint32_t SoundSys_InitSoundSys_16()

{
    int32_t valA;
    valA = g_a5ef88;
    return QTask_InitContext(valA);
}

#include "gi_platform.h"
#include "004E0CB0-SoundSys_SetMasterVolume.h"
uint32_t SoundSys_SetMasterVolume()

{
    int32_t valA;
    valA = g_a5e36c;
    return QTask_CloseEvent_2(valA);
}

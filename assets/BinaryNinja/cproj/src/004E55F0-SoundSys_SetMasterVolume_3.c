#include "gi_platform.h"
#include "004E55F0-SoundSys_SetMasterVolume_3.h"
uint32_t SoundSys_SetMasterVolume_3()

{
    Sys_OpenFileStream_2(&g_b019e0);
    return QTask_InitContext(g_a5e408);
}

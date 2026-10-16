#include "004EC180-SoundSys_InitSoundSys_16.h"
/* 0x004ec180 SoundSys_InitSoundSys_16 full linked: callers=1 callees=1 */
uint32_t sub_4ec180()

{
    int32_t eax;
    eax = g_a5ef88;
    return QTask_InitContext(eax);
}

#include "gi_platform.h"
#include "004E43B0-SoundSys_InitSoundSys_2.h"
uint32_t SoundSys_InitSoundSys_2()

{
    QTask_LinkEventHandler_3(0x10000000);
    return QTask_CloseEvent_2(g_a5e3f4);
}

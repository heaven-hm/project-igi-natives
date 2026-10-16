#include "004E43B0-SoundSys_InitSoundSys_2.h"
/* 0x004e43b0 SoundSys_InitSoundSys_2 full linked: callers=1 callees=2 */
uint32_t sub_4e43b0()

{
    QTask_LinkEventHandler_3(0x10000000);
    return QTask_CloseEvent_2(g_a5e3f4);
}

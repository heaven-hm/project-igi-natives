#include "004EACE0-SoundSys_StopSoundSample_14.h"
/* 0x004eace0 SoundSys_StopSoundSample_14 full linked: callers=1 callees=1 */
int32_t sub_4eace0()

{
    QTask_CloseEvent_2(g_54dad8);
    g_54dad8 = 0x181;
    g_54dada = 0x181;
    return 0x181;
}

#include "004E80D0-SoundSys_LoadSoundDef_11.h"
/* 0x004e80d0 SoundSys_LoadSoundDef_11 full linked: callers=1 callees=2 */
uint32_t sub_4e80d0()

{
    sub_4916e0(sub_4e7e20);
    uint32_t result = QTask_CloseEvent_2(g_54d98c);
    g_a5ec64 = 0;
    return result;
}

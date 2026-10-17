// Original IGI.EXE function: SoundSysMicrophone_OnEvent (VA 0x004EBDB0; static CFG gate PASS, CFG score 1.000).
#include "SoundSysMicrophone_OnEvent.h"
uint32_t SoundSysMicrophone_OnEvent()

{
    QTask_InitContext(g_54db6a);
    return QTask_CloseEvent_2(g_54db68);
}

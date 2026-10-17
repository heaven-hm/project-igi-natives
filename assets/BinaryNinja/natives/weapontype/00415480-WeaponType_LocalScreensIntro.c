// Original IGI.EXE function: WeaponType_LocalScreensIntro (VA 0x00415480; static CFG gate PASS, CFG score 1.000).
#include "WeaponType_LocalScreensIntro.h"
int32_t WeaponType_LocalScreensIntro()

{
    SoundSys_InitSoundSys_7("LOCAL:screens/intro/");
    QTask_CloseEvent_2(g_57b198);
    return Sys_OpenFileStream_4("INTROSCREEN:");
}

#include "WeaponType_LocalScreensIntro.h"
int32_t WeaponType_LocalScreensIntro()

{
    SoundSys_InitSoundSys_7("LOCAL:screens/intro/");
    QTask_CloseEvent_2(g_57b198);
    return Sys_OpenFileStream_4("INTROSCREEN:");
}

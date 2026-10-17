// IGI native provenance: WeaponType_LocalScreensIntro - 0x00415480 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415480-WeaponType_LocalScreensIntro.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponType_LocalScreensIntro.h"
int32_t WeaponType_LocalScreensIntro()

{
    SoundSys_InitSoundSys_7("LOCAL:screens/intro/");
    QTask_CloseEvent_2(g_57b198);
    return Sys_OpenFileStream_4("INTROSCREEN:");
}

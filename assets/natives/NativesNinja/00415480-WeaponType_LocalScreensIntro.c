#include "00415480-WeaponType_LocalScreensIntro.h"
/* 0x00415480 WeaponType_LocalScreensIntro full linked: callers=1 callees=3 */
int32_t WeaponType_LocalScreensIntro()

{
    sub_4e69c0("LOCAL:screens/intro/");
    QTask_CloseEvent_2(g_57b198);
    return sub_4b13a0("INTROSCREEN:");
}

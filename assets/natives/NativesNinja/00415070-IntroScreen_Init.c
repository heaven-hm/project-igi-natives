#include "00415070-IntroScreen_Init.h"
/* 0x00415070 IntroScreen_Init full linked: callers=1 callees=7 */
int32_t IntroScreen_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("IntroScreen", 0x38, QTask_OpenEvent_2(), 0);
    g_57b198 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4150e0);
    QTask_TriggerEvent(g_57b198, 1, IntroScreen_LoadParameters);
    QTask_TriggerEvent(g_57b198, 2, IntroScreen_Setup);
    sub_4b12f0("INTROSCREEN:", "LOCAL:screens/intro/");
    return Sound_Load("LOCAL:screens/intro/");
}

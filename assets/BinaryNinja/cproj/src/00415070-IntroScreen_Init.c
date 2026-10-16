#include "gi_platform.h"
#include "00415070-IntroScreen_Init.h"
int32_t IntroScreen_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("IntroScreen", 0x38, QTask_OpenEvent_2(), 0);
    g_57b198 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4150e0);
    QTask_TriggerEvent(g_57b198, 1, IntroScreen_LoadParameters);
    QTask_TriggerEvent(g_57b198, 2, IntroScreen_Setup);
    Script_RegisterNamespace("INTROSCREEN:", "LOCAL:screens/intro/");
    return Sound_Load("LOCAL:screens/intro/");
}

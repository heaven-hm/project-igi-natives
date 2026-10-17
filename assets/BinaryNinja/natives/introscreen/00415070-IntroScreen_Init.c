// Original IGI.EXE function: IntroScreen_Init (VA 0x00415070; static CFG gate PASS, CFG score 1.000).
#include "IntroScreen_Init.h"
int32_t IntroScreen_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("IntroScreen", 0x38, QTask_OpenEvent_2(), 0);
    g_57b198 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4150e0);
    QTask_TriggerEvent(g_57b198, 1, IntroScreen_LoadParameters);
    QTask_TriggerEvent(g_57b198, 2, IntroScreen_Setup);
    Script_RegisterNamespace("INTROSCREEN:", "LOCAL:screens/intro/");
    return Sound_Load("LOCAL:screens/intro/");
}

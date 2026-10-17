// IGI native provenance: IntroScreen_Init - 0x00415070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415070-IntroScreen_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

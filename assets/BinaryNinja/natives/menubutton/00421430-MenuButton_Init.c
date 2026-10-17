// Original IGI.EXE function: MenuButton_Init (VA 0x00421430; static CFG gate PASS, CFG score 1.000).
#include "MenuButton_Init.h"
int32_t* MenuButton_Init()

{
    int32_t item_9c = 0;
    int16_t data_1 = TaskType_Register("MenuButton", 0x98, Menu_PlayMusic_13(), 0);
    g_53b7f0 = data_1;
    QTask_TriggerEvent(data_1, 1, sub_4215d0);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_a0 = data_2;
    data_2 = g_53b7f0;
    QTask_TriggerEvent(data_2, item_a0, MenuButton_LoadParameters);
    QTask_TriggerEvent(g_53b7f0, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_53b7f0, 0, sub_421510);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_a0_1 = data_3;
    data_3 = g_53b7f0;
    QTask_RemoveEventCallback(data_3, item_a0_1, sub_4216f0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b7f0, data_4, MenuButton_Process);
    g_57bbfc = Script_EvaluateCondition_7(1);
    int32_t data_6 = Script_FormatString_3();
    void item_98;
    void item_44;
    return Script_UndefinedParameterTy(g_57bbfc, &item_98, &item_44, data_6, 7, 0);
}

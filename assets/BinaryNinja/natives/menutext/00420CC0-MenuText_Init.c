// Original IGI.EXE function: MenuText_Init (VA 0x00420CC0; static CFG gate PASS, CFG score 1.000).
#include "MenuText_Init.h"
void* MenuText_Init()

{
    int32_t item_174 = 0;
    int16_t data_1 = TaskType_Register("MenuText", 0x170, Menu_PlayMusic_13(), 0);
    g_53b770 = data_1;
    QTask_TriggerEvent(data_1, 1, MenuText_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_178 = data_2;
    data_2 = g_53b770;
    QTask_TriggerEvent(data_2, item_178, MenuText_Setup);
    QTask_TriggerEvent(g_53b770, 2, MenuText_Process);
    QTask_RemoveEventCallback(g_53b770, 0, sub_420e90);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_178_1 = data_3;
    data_3 = g_53b770;
    QTask_RemoveEventCallback(data_3, item_178_1, sub_4213d0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b770, data_4, sub_420f40);
    int32_t data_5 = Menu_LeaveMenus_14();
    QTask_TriggerEvent(g_53b770, data_5, MenuText_Update);
    g_57bbf4 = Script_EvaluateCondition_7(5);
    int32_t data_7 = Script_FormatString_3();
    void item_170;
    void item_11c;
    Script_UndefinedParameterTy(g_57bbf4, &item_170, &item_11c, data_7, 7, 0);
    int32_t data_8 = Script_FormatString_3();
    void item_dc;
    Script_UndefinedParameterTy(g_57bbf4, &item_170, &item_dc, data_8, 7, 0);
    int32_t data_9 = Script_ParseEnumString_3();
    void item_58;
    Script_UndefinedParameterTy(g_57bbf4, &item_170, &item_58, data_9, 7, 0);
    int32_t data_10 = Script_CallNativeHandler_3();
    void item_54;
    Script_UndefinedParameterTy(g_57bbf4, &item_170, &item_54, data_10, 7, 0);
    int32_t data_11 = Script_FormatString_3();
    void item_9c;
    Script_UndefinedParameterTy(g_57bbf4, &item_170, &item_9c, data_11, 7, 0);
    TaskType_Set("TEXT_BLACK", 0);
    TaskType_Set("TEXT_WHITE", 1);
    TaskType_Set("TEXT_GREEN", 2);
    return TaskType_Set("TEXT_ORANGE", 3);
}

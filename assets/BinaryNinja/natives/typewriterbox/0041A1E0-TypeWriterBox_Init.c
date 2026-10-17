// Original IGI.EXE function: TypeWriterBox_Init (VA 0x0041A1E0; static CFG gate PASS, CFG score 1.000).
#include "TypeWriterBox_Init.h"
int32_t* TypeWriterBox_Init()

{
    int32_t item_8c = 0;
    int16_t data_1 = TaskType_Register("TypeWriterBox", 0x88, Menu_PlayMusic_13(), 0);
    g_539c40 = data_1;
    QTask_TriggerEvent(data_1, 1, sub_41a600);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_90 = data_2;
    data_2 = g_539c40;
    QTask_TriggerEvent(data_2, item_90, TypeWriterBox_LoadParameters);
    QTask_TriggerEvent(g_539c40, 2, TypeWriterBox_Setup);
    QTask_RemoveEventCallback(g_539c40, 0, sub_41a370);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_90_1 = data_3;
    data_3 = g_539c40;
    QTask_RemoveEventCallback(data_3, item_90_1, sub_41a9e0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539c40, data_4, TypeWriterBox_Process);
    int32_t data_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_539c40, data_5, TypeWriterBox_Update);
    int32_t data_6 = Menu_RequestScreen_14();
    int32_t item_90_4 = data_6;
    data_6 = g_539c40;
    QTask_TriggerEvent(data_6, item_90_4, sub_41a120);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_539c40, data_7, sub_41aa80);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_539c40, data_8, sub_41aaa0);
    int32_t data_9 = Menu_LeaveMenus_14();
    int32_t item_90_7 = data_9;
    data_9 = g_539c40;
    QTask_TriggerEvent(data_9, item_90_7, sub_41a410);
    g_57bb90 = Script_EvaluateCondition_7(2);
    int32_t data_11 = Script_ParseEnumString_3();
    void item_88;
    void item_60;
    Script_UndefinedParameterTy(g_57bb90, &item_88, &item_60, data_11, 7, 0);
    int32_t data_13 = Script_ParseEnumString_3();
    void item_5c;
    return Script_UndefinedParameterTy(g_57bb90, &item_88, &item_5c, data_13, 7, 0);
}

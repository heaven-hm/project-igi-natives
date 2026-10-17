// Original IGI.EXE function: DialogWindow_Init (VA 0x004199F0; static CFG gate PASS, CFG score 1.000).
#include "DialogWindow_Init.h"
int32_t* DialogWindow_Init()

{
    g_57bb80 = 0;
    g_57bb84 = 0x280;
    int32_t item_60 = 0;
    int16_t data_1 = TaskType_Register("DialogWindow", 0x5c, Menu_PlayMusic_13(), 0);
    g_539c28 = data_1;
    QTask_TriggerEvent(data_1, 1, sub_419c90);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_64 = data_2;
    data_2 = g_539c28;
    QTask_TriggerEvent(data_2, item_64, DialogWindow_LoadParameters);
    QTask_TriggerEvent(g_539c28, 2, sub_419c20);
    QTask_RemoveEventCallback(g_539c28, 0, sub_419be0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_64_1 = data_3;
    data_3 = g_539c28;
    QTask_RemoveEventCallback(data_3, item_64_1, sub_41a110);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539c28, data_4, sub_419c50);
    int32_t data_5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_539c28, data_5, sub_424300);
    int32_t data_6 = Menu_RequestScreen_14();
    int32_t item_64_4 = data_6;
    data_6 = g_539c28;
    QTask_TriggerEvent(data_6, item_64_4, sub_41a120);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_539c28, data_7, AIGraph_LoadParameters);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_539c28, data_8, AIGraph_LoadParameters);
    g_57bb88 = Script_EvaluateCondition_7(5);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_5c;
    void item_3c;
    Script_UndefinedParameterTy(g_57bb88, &item_5c, &item_3c, data_10, 7, &g_57bb80);
    int32_t data_11 = Script_ParseEnumString_3();
    void item_38;
    Script_UndefinedParameterTy(g_57bb88, &item_5c, &item_38, data_11, 7, &g_57bb80);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_34;
    Script_UndefinedParameterTy(g_57bb88, &item_5c, &item_34, data_12, 7, &g_57bb80);
    int32_t data_13 = Script_ParseEnumString_3();
    void item_30;
    Script_UndefinedParameterTy(g_57bb88, &item_5c, &item_30, data_13, 7, &g_57bb80);
    int32_t data_14 = Script_ParseEnumInt32_4();
    void item_3;
    return Script_UndefinedParameterTy(g_57bb88, &item_5c, &item_3, data_14, 7, &g_57bb80);
}

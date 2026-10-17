// Original IGI.EXE function: MenuFrame_Init (VA 0x004223D0; static CFG gate PASS, CFG score 1.000).
#include "MenuFrame_Init.h"
int32_t* MenuFrame_Init()

{
    g_57bc18 = 0;
    g_57bc1c = 0x280;
    int32_t item_b8 = 0;
    int16_t data_1 = TaskType_Register("MenuFrame", 0xb4, Menu_PlayMusic_13(), 0);
    g_53b838 = data_1;
    QTask_TriggerEvent(data_1, 1, MenuFrame_LoadParameters);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_bc = data_2;
    data_2 = g_53b838;
    QTask_TriggerEvent(data_2, item_bc, MenuFrame_Setup);
    QTask_TriggerEvent(g_53b838, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_53b838, 0, MenuFrame_Update);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_bc_1 = data_3;
    data_3 = g_53b838;
    QTask_RemoveEventCallback(data_3, item_bc_1, sub_422b00);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b838, data_4, MenuFrame_OnEvent);
    g_57bc10 = Script_EvaluateCondition_7(9);
    int32_t data_6 = Script_FormatString_3();
    void item_b4;
    void item_60;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_60, data_6, 7, 0);
    int32_t data_7 = Script_ParseEnumString_3();
    void item_94;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_94, data_7, 7, &g_57bc18);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_90;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_90, data_8, 7, &g_57bc18);
    int32_t data_9 = Script_ParseEnumString_3();
    void item_8c;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_8c, data_9, 7, &g_57bc18);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_88;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_88, data_10, 7, &g_57bc18);
    int32_t data_11 = Script_ParseEnumString_3();
    void item_7c;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_7c, data_11, 7, 0);
    int32_t data_12 = Script_ExecuteLevelScript_3();
    void item_84;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_84, data_12, 7, 0);
    int32_t data_13 = Script_ExecuteLevelScript_3();
    void item_80;
    Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_80, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumInt32_4();
    void item_68;
    return Script_UndefinedParameterTy(g_57bc10, &item_b4, &item_68, data_14, 7, 0);
}

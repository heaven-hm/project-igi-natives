#include "DialogWindow_Init.h"
int32_t* DialogWindow_Init()

{
    g_57bb80 = 0;
    g_57bb84 = 0x280;
    int32_t v_60 = 0;
    int16_t valA1 = TaskType_Register("DialogWindow", 0x5c, Menu_PlayMusic_13(), 0);
    g_539c28 = valA1;
    QTask_TriggerEvent(valA1, 1, sub_419c90);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_64 = valA2;
    valA2 = g_539c28;
    QTask_TriggerEvent(valA2, v_64, DialogWindow_LoadParameters);
    QTask_TriggerEvent(g_539c28, 2, sub_419c20);
    QTask_RemoveEventCallback(g_539c28, 0, sub_419be0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_64_1 = valA3;
    valA3 = g_539c28;
    QTask_RemoveEventCallback(valA3, v_64_1, sub_41a110);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539c28, valA4, sub_419c50);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_539c28, valA5, sub_424300);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_64_4 = valA6;
    valA6 = g_539c28;
    QTask_TriggerEvent(valA6, v_64_4, sub_41a120);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_539c28, valA7, AIGraph_LoadParameters);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_539c28, valA8, AIGraph_LoadParameters);
    g_57bb88 = Script_EvaluateCondition_7(5);
    int32_t valA10 = Script_ParseEnumString_3();
    void v_5c;
    void v_3c;
    Script_UndefinedParameterTy(g_57bb88, &v_5c, &v_3c, valA10, 7, &g_57bb80);
    int32_t valA11 = Script_ParseEnumString_3();
    void v_38;
    Script_UndefinedParameterTy(g_57bb88, &v_5c, &v_38, valA11, 7, &g_57bb80);
    int32_t valA12 = Script_ParseEnumString_3();
    void v_34;
    Script_UndefinedParameterTy(g_57bb88, &v_5c, &v_34, valA12, 7, &g_57bb80);
    int32_t valA13 = Script_ParseEnumString_3();
    void v_30;
    Script_UndefinedParameterTy(g_57bb88, &v_5c, &v_30, valA13, 7, &g_57bb80);
    int32_t valA14 = Script_ParseEnumInt32_4();
    void v_3;
    return Script_UndefinedParameterTy(g_57bb88, &v_5c, &v_3, valA14, 7, &g_57bb80);
}

#include "gi_platform.h"
#include "0041A1E0-TypeWriterBox_Init.h"
int32_t* TypeWriterBox_Init()

{
    int32_t v_8c = 0;
    int16_t valA1 = TaskType_Register("TypeWriterBox", 0x88, Menu_PlayMusic_13(), 0);
    g_539c40 = valA1;
    QTask_TriggerEvent(valA1, 1, sub_41a600);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_90 = valA2;
    valA2 = g_539c40;
    QTask_TriggerEvent(valA2, v_90, TypeWriterBox_LoadParameters);
    QTask_TriggerEvent(g_539c40, 2, TypeWriterBox_Setup);
    QTask_RemoveEventCallback(g_539c40, 0, sub_41a370);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_90_1 = valA3;
    valA3 = g_539c40;
    QTask_RemoveEventCallback(valA3, v_90_1, sub_41a9e0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539c40, valA4, TypeWriterBox_Process);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_539c40, valA5, TypeWriterBox_Update);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_90_4 = valA6;
    valA6 = g_539c40;
    QTask_TriggerEvent(valA6, v_90_4, sub_41a120);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_539c40, valA7, sub_41aa80);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_539c40, valA8, sub_41aaa0);
    int32_t valA9 = Menu_LeaveMenus_14();
    int32_t v_90_7 = valA9;
    valA9 = g_539c40;
    QTask_TriggerEvent(valA9, v_90_7, sub_41a410);
    g_57bb90 = Script_EvaluateCondition_7(2);
    int32_t valA11 = Script_ParseEnumString_3();
    char v_88;
    char v_60;
    Script_UndefinedParameterTy(g_57bb90, &v_88, &v_60, valA11, 7, 0);
    int32_t valA13 = Script_ParseEnumString_3();
    char v_5c;
    return Script_UndefinedParameterTy(g_57bb90, &v_88, &v_5c, valA13, 7, 0);
}

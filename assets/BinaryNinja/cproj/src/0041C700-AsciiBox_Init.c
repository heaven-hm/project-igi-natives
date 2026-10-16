#include "gi_platform.h"
#include "0041C700-AsciiBox_Init.h"
int32_t* AsciiBox_Init()

{
    int32_t v_fc = 0;
    int16_t valA1 = TaskType_Register("AsciiBox", 0xf8, Menu_PlayMusic_13(), 0);
    g_53b5f4 = valA1;
    QTask_TriggerEvent(valA1, 1, AsciiBox_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_100 = valA2;
    valA2 = g_53b5f4;
    QTask_TriggerEvent(valA2, v_100, AsciiBox_Setup);
    QTask_TriggerEvent(g_53b5f4, 2, AsciiBox_Process);
    QTask_RemoveEventCallback(g_53b5f4, 0, sub_41c8d0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_100_1 = valA3;
    valA3 = g_53b5f4;
    QTask_RemoveEventCallback(valA3, v_100_1, sub_41d000);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b5f4, valA4, sub_41cc40);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b5f4, valA5, sub_424300);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_100_4 = valA6;
    valA6 = g_53b5f4;
    QTask_TriggerEvent(valA6, v_100_4, sub_41a120);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b5f4, valA7, sub_41d010);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b5f4, valA8, sub_41d030);
    int32_t valA9 = Menu_LeaveMenus_14();
    int32_t v_100_7 = valA9;
    valA9 = g_53b5f4;
    QTask_TriggerEvent(valA9, v_100_7, AsciiBox_Update);
    g_57bbbc = Script_EvaluateCondition_7(4);
    int32_t valA11 = Script_FormatString_3();
    char v_f8;
    char v_a4;
    Script_UndefinedParameterTy(g_57bbbc, &v_f8, &v_a4, valA11, 7, 0);
    int32_t valA13 = Script_FormatString_3();
    char v_64;
    Script_UndefinedParameterTy(g_57bbbc, &v_f8, &v_64, valA13, 7, 0);
    int32_t valA15 = Script_ParseEnumString_3();
    char v_d0;
    Script_UndefinedParameterTy(g_57bbbc, &v_f8, &v_d0, valA15, 7, 0);
    int32_t valA17 = Script_ParseEnumString_3();
    char v_cc;
    return Script_UndefinedParameterTy(g_57bbbc, &v_f8, &v_cc, valA17, 7, 0);
}

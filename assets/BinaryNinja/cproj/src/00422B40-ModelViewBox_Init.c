#include "gi_platform.h"
#include "00422B40-ModelViewBox_Init.h"
int32_t* ModelViewBox_Init()

{
    int32_t v_cc = 0;
    int16_t valA1 = TaskType_Register("ModelViewBox", 0xc8, Menu_PlayMusic_13(), 0);
    g_53b854 = valA1;
    QTask_TriggerEvent(valA1, 1, sub_422f10);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_d0 = valA2;
    valA2 = g_53b854;
    QTask_TriggerEvent(valA2, v_d0, ModelViewBox_LoadParameters);
    QTask_TriggerEvent(g_53b854, 2, ModelViewBox_Setup);
    QTask_RemoveEventCallback(g_53b854, 0, ModelViewBox_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_d0_1 = valA3;
    valA3 = g_53b854;
    QTask_RemoveEventCallback(valA3, v_d0_1, sub_422fb0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b854, valA4, ModelViewBox_Update);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b854, valA5, sub_422fc0);
    int32_t valA6 = Script_SpawnNewTask_6();
    int32_t v_d0_4 = valA6;
    valA6 = g_53b854;
    QTask_TriggerEvent(valA6, v_d0_4, ModelViewBox_OnEvent);
    g_57bc30 = 0;
    g_57bc34 = 0x280;
    g_57bc28 = Script_EvaluateCondition_7(2);
    int32_t valA8 = Script_ParseEnumString_3();
    char v_c8;
    char v_a0;
    Script_UndefinedParameterTy(g_57bc28, &v_c8, &v_a0, valA8, 7, &g_57bc30);
    int32_t valA10 = Script_ParseEnumString_3();
    char v_9c;
    return Script_UndefinedParameterTy(g_57bc28, &v_c8, &v_9c, valA10, 7, &g_57bc30);
}

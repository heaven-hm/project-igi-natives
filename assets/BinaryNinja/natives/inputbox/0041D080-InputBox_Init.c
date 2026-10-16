#include "InputBox_Init.h"
int32_t* InputBox_Init()

{
    int32_t v_1ac = 0;
    int16_t valA1 = TaskType_Register("InputBox", 0x1a8, Menu_PlayMusic_13(), 0);
    g_53b640 = valA1;
    QTask_TriggerEvent(valA1, 1, sub_41d450);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_1b0 = valA2;
    valA2 = g_53b640;
    QTask_TriggerEvent(valA2, v_1b0, InputBox_LoadParameters);
    QTask_TriggerEvent(g_53b640, 2, InputBox_Setup);
    QTask_RemoveEventCallback(g_53b640, 0, sub_41d290);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_1b0_1 = valA3;
    valA3 = g_53b640;
    QTask_RemoveEventCallback(valA3, v_1b0_1, sub_41d9d0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b640, valA4, InputBox_Process);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b640, valA5, InputBox_Update);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_1b0_4 = valA6;
    valA6 = g_53b640;
    QTask_TriggerEvent(valA6, v_1b0_4, InputBox_OnEvent);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b640, valA7, InputBox_Action);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53b640, valA8, InputBox_Cleanup);
    g_57bbc4 = Script_EvaluateCondition_7(6);
    int32_t valA10 = Script_ParseEnumString_3();
    void v_1a8;
    void v_180;
    Script_UndefinedParameterTy(g_57bbc4, &v_1a8, &v_180, valA10, 7, 0);
    int32_t valA11 = Script_ParseEnumString_3();
    void v_4;
    Script_UndefinedParameterTy(g_57bbc4, &v_1a8, &v_4, valA11, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_3();
    void v_104;
    Script_UndefinedParameterTy(g_57bbc4, &v_1a8, &v_104, valA12, 7, 0);
    int32_t valA13 = Script_CallNativeHandler_3();
    void v_b4;
    Script_UndefinedParameterTy(g_57bbc4, &v_1a8, &v_b4, valA13, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    void v_64;
    Script_UndefinedParameterTy(g_57bbc4, &v_1a8, &v_64, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumInt32_4();
    void v_12;
    return Script_UndefinedParameterTy(g_57bbc4, &v_1a8, &v_12, valA15, 7, 0);
}

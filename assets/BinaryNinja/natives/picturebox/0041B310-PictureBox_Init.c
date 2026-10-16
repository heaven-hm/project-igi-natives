#include "PictureBox_Init.h"
int32_t* PictureBox_Init()

{
    int32_t v_a00 = 0;
    int16_t valA1 = TaskType_Register("PictureBox", 0x9fc, Menu_PlayMusic_13(), 0);
    g_53b58c = valA1;
    QTask_TriggerEvent(valA1, 1, PictureBox_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_a04 = valA2;
    valA2 = g_53b58c;
    QTask_TriggerEvent(valA2, v_a04, PictureBox_Setup);
    QTask_TriggerEvent(g_53b58c, 2, PictureBox_Process);
    QTask_RemoveEventCallback(g_53b58c, 0, sub_41b490);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_a04_1 = valA3;
    valA3 = g_53b58c;
    QTask_RemoveEventCallback(valA3, v_a04_1, sub_41b830);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b58c, valA4, PictureBox_Update);
    int32_t valA5 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b58c, valA5, PictureBox_OnEvent);
    int32_t valA6 = Menu_RequestScreen_14();
    int32_t v_a04_4 = valA6;
    valA6 = g_53b58c;
    QTask_TriggerEvent(valA6, v_a04_4, sub_41a120);
    g_57bba8 = Script_EvaluateCondition_7(4);
    int32_t valA8 = Script_ParseEnumString_3();
    void v_9fc;
    void v_9d4;
    Script_UndefinedParameterTy(g_57bba8, &v_9fc, &v_9d4, valA8, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    void v_9d0;
    Script_UndefinedParameterTy(g_57bba8, &v_9fc, &v_9d0, valA10, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_3();
    void v_a0;
    Script_UndefinedParameterTy(g_57bba8, &v_9fc, &v_a0, valA12, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    void v_50;
    return Script_UndefinedParameterTy(g_57bba8, &v_9fc, &v_50, valA14, 7, 0);
}

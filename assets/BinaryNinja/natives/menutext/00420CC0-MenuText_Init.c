// Original IGI.EXE function: MenuText_Init (VA 0x00420CC0; static CFG gate PASS, CFG score 1.000).
#include "MenuText_Init.h"
void* MenuText_Init()

{
    int32_t v_174 = 0;
    int16_t valA1 = TaskType_Register("MenuText", 0x170, Menu_PlayMusic_13(), 0);
    g_53b770 = valA1;
    QTask_TriggerEvent(valA1, 1, MenuText_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_178 = valA2;
    valA2 = g_53b770;
    QTask_TriggerEvent(valA2, v_178, MenuText_Setup);
    QTask_TriggerEvent(g_53b770, 2, MenuText_Process);
    QTask_RemoveEventCallback(g_53b770, 0, sub_420e90);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_178_1 = valA3;
    valA3 = g_53b770;
    QTask_RemoveEventCallback(valA3, v_178_1, sub_4213d0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b770, valA4, sub_420f40);
    int32_t valA5 = Menu_LeaveMenus_14();
    QTask_TriggerEvent(g_53b770, valA5, MenuText_Update);
    g_57bbf4 = Script_EvaluateCondition_7(5);
    int32_t valA7 = Script_FormatString_3();
    void v_170;
    void v_11c;
    Script_UndefinedParameterTy(g_57bbf4, &v_170, &v_11c, valA7, 7, 0);
    int32_t valA8 = Script_FormatString_3();
    void v_dc;
    Script_UndefinedParameterTy(g_57bbf4, &v_170, &v_dc, valA8, 7, 0);
    int32_t valA9 = Script_ParseEnumString_3();
    void v_58;
    Script_UndefinedParameterTy(g_57bbf4, &v_170, &v_58, valA9, 7, 0);
    int32_t valA10 = Script_CallNativeHandler_3();
    void v_54;
    Script_UndefinedParameterTy(g_57bbf4, &v_170, &v_54, valA10, 7, 0);
    int32_t valA11 = Script_FormatString_3();
    void v_9c;
    Script_UndefinedParameterTy(g_57bbf4, &v_170, &v_9c, valA11, 7, 0);
    TaskType_Set("TEXT_BLACK", 0);
    TaskType_Set("TEXT_WHITE", 1);
    TaskType_Set("TEXT_GREEN", 2);
    return TaskType_Set("TEXT_ORANGE", 3);
}

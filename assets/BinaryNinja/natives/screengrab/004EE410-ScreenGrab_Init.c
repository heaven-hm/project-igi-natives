#include "ScreenGrab_Init.h"
int32_t* ScreenGrab_Init()

{
    int32_t v_2c = 0;
    int16_t valA1 = TaskType_Register("ScreenGrab", 0x28, QTask_OpenEvent_2(), 0);
    g_54dcb8 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4ee530);
    QTask_TriggerEvent(g_54dcb8, 1, sub_4ee540);
    int32_t valA3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_54dcb8, valA3, sub_4ee5e0);
    QTask_TriggerEvent(g_54dcb8, 2, AIGraph_LoadParameters);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_30_1 = valA4;
    valA4 = g_54dcb8;
    QTask_RemoveEventCallback(valA4, v_30_1, ScreenGrab_Setup);
    int32_t valA5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54dcb8, valA5, sub_4ee680);
    g_a70c60 = Script_EvaluateCondition_7(2);
    int32_t valA7 = Script_CallNativeHandler_3();
    void v_28;
    void v_8;
    Script_UndefinedParameterTy(g_a70c60, &v_28, &v_8, valA7, 7, 0);
    int32_t valA8 = Script_ParseEnumInt32_4();
    void v_4;
    int32_t* result = Script_UndefinedParameterTy(g_a70c60, &v_28, &v_4, valA8, 7, 0);
    g_a70c64 = 0;
    g_a70c5b = 0;
    g_a70c5a = 0;
    return result;
}

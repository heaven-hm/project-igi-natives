// Original IGI.EXE function: AddAmmo_Init (VA 0x0046DB40; static CFG gate PASS, CFG score 1.000).
#include "AddAmmo_Init.h"
int32_t* AddAmmo_Init()

{
    int32_t v_4c = 0;
    int16_t valA1 = TaskType_Register("AddAmmo", 0x48, QTask_OpenEvent_2(), 0);
    g_5be30c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_46dc20);
    QTask_TriggerEvent(g_5be30c, 1, AddAmmo_LoadParameters);
    QTask_TriggerEvent(g_5be30c, 2, AIGraph_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be30c, valA3, sub_46dca0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_50_1 = valA4;
    valA4 = g_5be30c;
    QTask_RemoveEventCallback(valA4, v_50_1, sub_46dcb0);
    g_5be310 = Script_EvaluateCondition_7(2);
    int32_t valA6 = Script_CallNativeHandler_10();
    void v_48;
    void v_24;
    Script_UndefinedParameterTy(g_5be310, &v_48, &v_24, valA6, 7, 0x5c10f0);
    int32_t valA8 = Script_ExecuteLevelScript_3();
    void v_4;
    return Script_UndefinedParameterTy(g_5be310, &v_48, &v_4, valA8, 7, 0);
}

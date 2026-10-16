#include "SoundManager_Init.h"
int32_t* SoundManager_Init()

{
    int32_t v_48 = 0;
    int16_t valA1 = TaskType_Register("SoundManager", 0x44, QTask_OpenEvent_2(), 0);
    g_54ee3c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_51c090);
    QTask_TriggerEvent(g_54ee3c, 1, sub_488700);
    QTask_TriggerEvent(g_54ee3c, 2, sub_51c0a0);
    int32_t valA3 = SoundSys_SetFrequency_5();
    QTask_RemoveEventCallback(g_54ee3c, valA3, sub_51c0c0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_4c_1 = valA4;
    valA4 = g_54ee3c;
    QTask_RemoveEventCallback(valA4, v_4c_1, SoundManager_LoadParameters);
    int32_t valA5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54ee3c, valA5, sub_51c280);
    g_a83780 = Script_EvaluateCondition_7(1);
    int32_t valA7 = Script_FormatString_3();
    void v_44;
    void v_24;
    return Script_UndefinedParameterTy(g_a83780, &v_44, &v_24, valA7, 7, 0);
}

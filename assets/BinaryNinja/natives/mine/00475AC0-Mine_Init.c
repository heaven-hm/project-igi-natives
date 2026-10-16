#include "Mine_Init.h"
void* Mine_Init()

{
    int32_t v_254 = 0;
    int16_t valA1 = TaskType_Register("Mine", 0x250, FX_TrailUpdate(), 0);
    g_5be3a0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Mine_LoadParameters);
    QTask_TriggerEvent(g_5be3a0, 1, sub_475cc0);
    QTask_TriggerEvent(g_5be3a0, 2, Mine_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be3a0, valA3, sub_475d80);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_258_1 = valA4;
    valA4 = g_5be3a0;
    QTask_RemoveEventCallback(valA4, v_258_1, Mine_Process);
    int32_t valA5 = Level_LoadLevel_2();
    QTask_RemoveEventCallback(g_5be3a0, valA5, Mine_Update);
    int32_t valA6 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_5be3a0, valA6, Mine_OnEvent);
    g_5be3a8 = Mem_Alloc8(0x40);
    g_5be39c = Script_FormatString_7(FX_ExplosionSpawn_2(), 2);
    int32_t valA10 = Script_EvaluateCondition_2();
    void v_250;
    void v_c;
    Script_UndefinedParameterTy(g_5be39c, &v_250, &v_c, valA10, 7, 0);
    int32_t valA11 = Script_EvaluateCondition_2();
    void v_10;
    Script_UndefinedParameterTy(g_5be39c, &v_250, &v_10, valA11, 7, 0);
    return TaskType_Set("TASKTYPE_MINE", *g_5be3a0);
}

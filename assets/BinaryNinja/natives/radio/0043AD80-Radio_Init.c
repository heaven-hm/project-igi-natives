#include "Radio_Init.h"
int32_t* Radio_Init()

{
    int32_t v_2f8 = 0;
    int16_t valA1 = TaskType_Register("Radio", 0x2e8, FX_TrailUpdate(), 0);
    g_53c2e0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_43af20);
    QTask_TriggerEvent(g_53c2e0, 1, Radio_LoadParameters);
    QTask_TriggerEvent(g_53c2e0, 2, sub_43b110);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c2e0, valA3, sub_43b160);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_2fc_1 = valA4;
    valA4 = g_53c2e0;
    QTask_RemoveEventCallback(valA4, v_2fc_1, sub_43b170);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c2e0, valA5, Radio_Setup);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c2e0, valA6, Radio_Process);
    int32_t valA7 = AI_CheckHearing_25();
    int32_t v_2fc_4 = valA7;
    valA7 = g_53c2e0;
    QTask_RemoveEventCallback(valA7, v_2fc_4, sub_443dc0);
    g_57bef8 = Script_FormatString_7(FX_ExplosionSpawn_2(), 6);
    int32_t dstD = 0;
    void v_54;
    void* ctxB = &v_54;
    void v_2e8;

    for (char* i = &g_57befc; i < 0x57bf38; )
    {
        int32_t v_2f8_1 = dstD;
        Game_DataSymbolLoad(i, "Radio sound %d");
        int32_t valA10 = Script_EvaluateCondition_3();
        Script_UndefinedParameterTy(g_57bef8, &v_2e8, ctxB, valA10, 7, 0);
        i = &i[0xf];
        dstD += 1;
        ctxB += 0x10;
    }

    int32_t valA11 = Script_EvaluateCondition_3();
    void v_14;
    Script_UndefinedParameterTy(g_57bef8, &v_2e8, &v_14, valA11, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_3();
    void v_a4;
    return Script_UndefinedParameterTy(g_57bef8, &v_2e8, &v_a4, valA12, 7, 0);
}

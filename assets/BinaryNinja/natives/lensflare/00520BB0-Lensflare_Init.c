// Original IGI.EXE function: Lensflare_Init (VA 0x00520BB0; static CFG gate PASS, CFG score 0.982).
#include "Lensflare_Init.h"
int32_t Lensflare_Init()

{
    int32_t v_e0 = 0;
    g_a83894 = TaskType_Register("Lensflare", 0x98, QTask_OpenEvent_2(), 0);
    int32_t v_e0_1 = 0;
    g_a83968 = TaskType_Register("LensflareItem", 0x40, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a83894, 0, sub_520ec0);
    QTask_TriggerEvent(g_a83894, 2, sub_520f20);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83894, valA4, sub_520f40);
    int32_t valA5 = Script_ParseEnumReal32_8();
    int32_t v_e4_1 = valA5;
    valA5 = g_a83894;
    QTask_RemoveEventCallback(valA5, v_e4_1, Lensflare_LoadParameters);
    QTask_RemoveEventCallback(g_a83894, 4, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_a83968, 0, sub_520e40);
    QTask_TriggerEvent(g_a83968, 2, AIGraph_LoadParameters);
    int32_t valA7 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83968, valA7, sub_520e70);
    int32_t valA8 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83968, valA8, sub_520e80);
    g_a8389c = Script_EvaluateCondition_7(3);
    g_a83970 = Script_EvaluateCondition_7(4);
    g_a83898 = Script_UnableToAllocatePara("RangeReal32", Script_EvaluateCondition_2());
    int32_t valA13 = Script_FormatString_2();
    void v_98;
    void v_2c;
    Script_UndefinedParameterTy(g_a8389c, &v_98, &v_2c, valA13, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_2();
    void v_20;
    Script_UndefinedParameterTy(g_a8389c, &v_98, &v_20, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumString_3();
    void v_14;
    Script_UndefinedParameterTy(g_a8389c, &v_98, &v_14, valA15, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_2();
    void v_d8;
    void v_ac;
    Script_UndefinedParameterTy(g_a83970, &v_d8, &v_ac, valA16, 7, 0);
    void v_b0;
    Script_UndefinedParameterTy(g_a83970, &v_d8, &v_b0, g_a83898, 7, 0);
    int32_t valA19 = Script_EvaluateCondition_2();
    void v_b4;
    Script_UndefinedParameterTy(g_a83970, &v_d8, &v_b4, valA19, 7, 0);
    int32_t valA21 = Script_ParseEnumString_3();
    void v_9c;
    Script_UndefinedParameterTy(g_a83970, &v_d8, &v_9c, valA21, 7, 0);
    Sys_ResolveSymbol_13(0xa83888);
    __builtin_memset(&g_ba1e20, 0, 0x28);

    for (int32_t* i = &g_a838b0; i < &g_a83978; i = &i[5])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    __builtin_memset(0xa83860, 0, 0x28);
    return 0;
}

// Original IGI.EXE function: Lensflare_Init (VA 0x00520BB0; static CFG gate PASS, CFG score 0.982).
#include "Lensflare_Init.h"
int32_t Lensflare_Init()

{
    int32_t item_e0 = 0;
    g_a83894 = TaskType_Register("Lensflare", 0x98, QTask_OpenEvent_2(), 0);
    int32_t item_e0_1 = 0;
    g_a83968 = TaskType_Register("LensflareItem", 0x40, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a83894, 0, sub_520ec0);
    QTask_TriggerEvent(g_a83894, 2, sub_520f20);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83894, data_4, sub_520f40);
    int32_t data_5 = Script_ParseEnumReal32_8();
    int32_t item_e4_1 = data_5;
    data_5 = g_a83894;
    QTask_RemoveEventCallback(data_5, item_e4_1, Lensflare_LoadParameters);
    QTask_RemoveEventCallback(g_a83894, 4, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_a83968, 0, sub_520e40);
    QTask_TriggerEvent(g_a83968, 2, AIGraph_LoadParameters);
    int32_t data_7 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83968, data_7, sub_520e70);
    int32_t data_8 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83968, data_8, sub_520e80);
    g_a8389c = Script_EvaluateCondition_7(3);
    g_a83970 = Script_EvaluateCondition_7(4);
    g_a83898 = Script_UnableToAllocatePara("RangeReal32", Script_EvaluateCondition_2());
    int32_t data_13 = Script_FormatString_2();
    void item_98;
    void item_2c;
    Script_UndefinedParameterTy(g_a8389c, &item_98, &item_2c, data_13, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_2();
    void item_20;
    Script_UndefinedParameterTy(g_a8389c, &item_98, &item_20, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumString_3();
    void item_14;
    Script_UndefinedParameterTy(g_a8389c, &item_98, &item_14, data_15, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_2();
    void item_d8;
    void item_ac;
    Script_UndefinedParameterTy(g_a83970, &item_d8, &item_ac, data_16, 7, 0);
    void item_b0;
    Script_UndefinedParameterTy(g_a83970, &item_d8, &item_b0, g_a83898, 7, 0);
    int32_t data_19 = Script_EvaluateCondition_2();
    void item_b4;
    Script_UndefinedParameterTy(g_a83970, &item_d8, &item_b4, data_19, 7, 0);
    int32_t data_21 = Script_ParseEnumString_3();
    void item_9c;
    Script_UndefinedParameterTy(g_a83970, &item_d8, &item_9c, data_21, 7, 0);
    Sys_ResolveSymbol_13(0xa83888);
    memset(&g_ba1e20, 0, 0x28);

    for (int32_t* i = &g_a838b0; i < &g_a83978; i = &i[5])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    memset(0xa83860, 0, 0x28);
    return 0;
}

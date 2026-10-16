#include "DiscardTerrainArea_Init.h"
int32_t* DiscardTerrainArea_Init()

{
    int32_t v_7c = 0;
    int16_t valA1 = TaskType_Register("DiscardTerrainArea", 0x78, DynObj_LookupHashItem_5(), 0);
    g_a84540 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_52b7f0);
    QTask_RemoveEventCallback(g_a84540, 7, sub_52be70);
    QTask_TriggerEvent(g_a84540, 2, AIGraph_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a84540, valA3, sub_52be60);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_80_1 = valA4;
    valA4 = g_a84540;
    QTask_RemoveEventCallback(valA4, v_80_1, DiscardTerrainArea_Setup);
    g_a84544 = Script_EvaluateCondition_7(4);
    int32_t valA6 = Script_ParseEnumReal32_4();
    void v_78;
    void v_58;
    Script_UndefinedParameterTy(g_a84544, &v_78, &v_58, valA6, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    void v_10;
    Script_UndefinedParameterTy(g_a84544, &v_78, &v_10, valA8, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    void v_c;
    Script_UndefinedParameterTy(g_a84544, &v_78, &v_c, valA10, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_4();
    void v_8;
    return Script_UndefinedParameterTy(g_a84544, &v_78, &v_8, valA12, 7, 0);
}

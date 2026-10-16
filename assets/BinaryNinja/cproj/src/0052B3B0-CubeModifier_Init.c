#include "gi_platform.h"
#include "0052B3B0-CubeModifier_Init.h"
int32_t* CubeModifier_Init()

{
    int32_t v_180 = 0;
    __builtin_memset(&g_a843ac, 0, 0x190);
    int16_t valA1 = TaskType_Register("CubeModifier", 0x178, EditorRigidObj_OnEvent(), 0);
    g_a843a8 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_52b320);
    QTask_RemoveEventCallback(g_a843a8, 7, sub_52b630);
    QTask_TriggerEvent(g_a843a8, 2, sub_52b4d0);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a843a8, valA3, sub_52b620);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_184_1 = valA4;
    valA4 = g_a843a8;
    QTask_RemoveEventCallback(valA4, v_184_1, CubeModifier_LoadParameters);
    g_a843a4 = Script_EvaluateCondition_7(3);
    int32_t valA6 = Script_ParseEnumReal32_4();
    char v_178;
    char v_150;
    Script_UndefinedParameterTy(g_a843a4, &v_178, &v_150, valA6, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    char v_108;
    Script_UndefinedParameterTy(g_a843a4, &v_178, &v_108, valA8, 7, 0);
    int32_t valA10 = Script_SpawnNewTask_4();
    char v_104;
    return Script_UndefinedParameterTy(g_a843a4, &v_178, &v_104, valA10, 7, 0);
}

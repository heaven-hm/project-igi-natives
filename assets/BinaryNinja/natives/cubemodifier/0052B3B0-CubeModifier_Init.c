// Original IGI.EXE function: CubeModifier_Init (VA 0x0052B3B0; static CFG gate PASS, CFG score 0.980).
#include "CubeModifier_Init.h"
int32_t* CubeModifier_Init()

{
    int32_t item_180 = 0;
    memset(&g_a843ac, 0, 0x190);
    int16_t data_1 = TaskType_Register("CubeModifier", 0x178, EditorRigidObj_OnEvent(), 0);
    g_a843a8 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_52b320);
    QTask_RemoveEventCallback(g_a843a8, 7, sub_52b630);
    QTask_TriggerEvent(g_a843a8, 2, sub_52b4d0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a843a8, data_3, sub_52b620);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_184_1 = data_4;
    data_4 = g_a843a8;
    QTask_RemoveEventCallback(data_4, item_184_1, CubeModifier_LoadParameters);
    g_a843a4 = Script_EvaluateCondition_7(3);
    int32_t data_6 = Script_ParseEnumReal32_4();
    void item_178;
    void item_150;
    Script_UndefinedParameterTy(g_a843a4, &item_178, &item_150, data_6, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_108;
    Script_UndefinedParameterTy(g_a843a4, &item_178, &item_108, data_8, 7, 0);
    int32_t data_10 = Script_SpawnNewTask_4();
    void item_104;
    return Script_UndefinedParameterTy(g_a843a4, &item_178, &item_104, data_10, 7, 0);
}

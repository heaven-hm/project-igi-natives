// Original IGI.EXE function: LevelScript_Init (VA 0x0052C820; static CFG gate PASS, CFG score 1.000).
#include "LevelScript_Init.h"
int32_t* LevelScript_Init()

{
    int32_t item_2c = 0;
    g_54f6f0 = TaskType_Register("LevelScript", 0x28, QTask_OpenEvent_2(), 0);
    g_54f6f2 = QTask_UnableToAllocateEvent(QTask_OpenEvent_2());
    QTask_RemoveEventCallback(g_54f6f0, 0, sub_52c8f0);
    QTask_TriggerEvent(g_54f6f0, 1, LevelScript_LoadParameters);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54f6f0, data_4, AIGraph_LoadParameters);
    int32_t data_5 = Script_ParseEnumInt32_8();
    int32_t item_30_1 = data_5;
    data_5 = g_54f6f0;
    QTask_RemoveEventCallback(data_5, item_30_1, sub_52c8e0);
    g_a84564 = Script_EvaluateCondition_7(2);
    int32_t data_7 = Script_ParseEnumString_3();
    void item_28;
    void item_8;
    return Script_UndefinedParameterTy(g_a84564, &item_28, &item_8, data_7, 7, 0);
}

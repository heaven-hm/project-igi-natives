// IGI native provenance: AmmoPickup_Init - 0x0046D420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D420-AmmoPickup_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AmmoPickup_Init.h"
int32_t* AmmoPickup_Init()

{
    int32_t item_13c = 0;
    g_5be300 = TaskType_Register("AmmoPickup", 0x138, SoundSys_Update3DPosition(), 0);
    g_53fe28 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_5be300, 0, AmmoPickup_LoadParameters);
    QTask_TriggerEvent(g_5be300, 1, sub_46d740);
    QTask_TriggerEvent(g_5be300, 2, AmmoPickup_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_140 = data_3;
    data_3 = g_5be300;
    QTask_RemoveEventCallback(data_3, item_140, sub_46d7c0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be300, data_4, sub_46d7d0);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5be300, data_5, AmmoPickup_Process);
    int32_t data_6 = Script_SpawnNewTask_6();
    int32_t item_140_3 = data_6;
    data_6 = g_5be300;
    QTask_TriggerEvent(data_6, item_140_3, AmmoPickup_Update);
    int32_t data_7 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5be300, data_7, sub_45f920);
    int32_t data_8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be300, data_8, sub_45f920);
    int32_t data_9 = Level_LoadObjects_3();
    int32_t item_140_6 = data_9;
    data_9 = g_5be300;
    QTask_RemoveEventCallback(data_9, item_140_6, AmmoPickup_OnEvent);
    g_5be304 = Script_EvaluateCondition_7(4);
    int32_t data_11 = Script_ParseEnumReal32_4();
    void item_138;
    void item_48;
    Script_UndefinedParameterTy(g_5be304, &item_138, &item_48, data_11, 7, 0);
    int32_t data_13 = Script_SpawnNewTask_3();
    void item_c8;
    Script_UndefinedParameterTy(g_5be304, &item_138, &item_c8, data_13, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_10();
    void item_28;
    Script_UndefinedParameterTy(g_5be304, &item_138, &item_28, data_15, 7, 0x5c10f0);
    int32_t data_17 = Script_ExecuteLevelScript_3();
    void item_8;
    return Script_UndefinedParameterTy(g_5be304, &item_138, &item_8, data_17, 7, 0);
}

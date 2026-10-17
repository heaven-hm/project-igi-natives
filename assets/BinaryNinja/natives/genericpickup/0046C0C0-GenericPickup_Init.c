// Original IGI.EXE function: GenericPickup_Init (VA 0x0046C0C0; static CFG gate PASS, CFG score 1.000).
#include "GenericPickup_Init.h"
int32_t* GenericPickup_Init()

{
    int32_t item_124 = 0;
    int16_t data_1 = TaskType_Register("GenericPickup", 0x120, SoundSys_Update3DPosition(), 0);
    g_5be2d0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_46c2b0);
    QTask_TriggerEvent(g_5be2d0, 1, GenericPickup_LoadParameters);
    QTask_TriggerEvent(g_5be2d0, 2, GenericPickup_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be2d0, data_3, sub_46c480);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_128_1 = data_4;
    data_4 = g_5be2d0;
    QTask_RemoveEventCallback(data_4, item_128_1, GenericPickup_Process);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5be2d0, data_5, GenericPickup_Update);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_5be2d0, data_6, GenericPickup_OnEvent);
    int32_t data_7 = Level_LoadObjects_4();
    int32_t item_128_4 = data_7;
    data_7 = g_5be2d0;
    QTask_RemoveEventCallback(data_7, item_128_4, sub_45f920);
    int32_t data_8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be2d0, data_8, sub_45f920);
    int32_t data_9 = Level_LoadObjects_3();
    QTask_RemoveEventCallback(g_5be2d0, data_9, GenericPickup_Action);
    int32_t data_10 = AI_CheckHearing_25();
    int32_t item_128_7 = data_10;
    data_10 = g_5be2d0;
    QTask_RemoveEventCallback(data_10, item_128_7, sub_443dc0);
    int32_t data_11 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_5be2d0, data_11, GenericPickup_Cleanup_2);
    int32_t data_12 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_5be2d0, data_12, GenericPickup_Cleanup);
    g_5be2d4 = Script_EvaluateCondition_7(3);
    int32_t data_14 = Script_ParseEnumReal32_4();
    void item_120;
    void item_30;
    Script_UndefinedParameterTy(g_5be2d4, &item_120, &item_30, data_14, 7, 0);
    int32_t data_15 = Script_SpawnNewTask_3();
    void item_b0;
    Script_UndefinedParameterTy(g_5be2d4, &item_120, &item_b0, data_15, 7, 0);
    int32_t data_16 = Script_EvaluateCondition_3();
    void item_18;
    return Script_UndefinedParameterTy(g_5be2d4, &item_120, &item_18, data_16, 7, 0);
}

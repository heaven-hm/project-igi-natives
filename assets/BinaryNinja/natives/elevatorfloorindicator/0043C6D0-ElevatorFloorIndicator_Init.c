// Original IGI.EXE function: ElevatorFloorIndicator_Init (VA 0x0043C6D0; static CFG gate PASS, CFG score 1.000).
#include "ElevatorFloorIndicator_Init.h"
int32_t* ElevatorFloorIndicator_Init()

{
    int32_t item_24c = 0;
    int16_t data_1 = TaskType_Register("ElevatorFloorIndicator", 0x248, DynObj_LookupHashItem_5(), 0);
    g_57bf84 = data_1;
    QTask_RemoveEventCallback(data_1, 0, ElevatorFloorIndicator_LoadParameters);
    QTask_TriggerEvent(g_57bf84, 1, ElevatorFloorIndicator_Setup);
    QTask_TriggerEvent(g_57bf84, 2, ElevatorFloorIndicator_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bf84, data_3, sub_43cb60);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_250_1 = data_4;
    data_4 = g_57bf84;
    QTask_RemoveEventCallback(data_4, item_250_1, ElevatorFloorIndicator_Update);
    int32_t data_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bf84, data_5, AIGraph_LoadParameters);
    int32_t data_6 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_57bf84, data_6, ElevatorFloorIndicator_Action);
    int32_t data_7 = Weapon_CheckAmmo_8();
    int32_t item_250_4 = data_7;
    data_7 = g_57bf84;
    QTask_RemoveEventCallback(data_7, item_250_4, 0);
    g_57bf88 = Script_EvaluateCondition_7(7);
    int32_t data_9 = Script_ParseEnumReal32_4();
    void item_248;
    void item_158;
    Script_UndefinedParameterTy(g_57bf88, &item_248, &item_158, data_9, 7, 0);
    int32_t data_11 = Script_SpawnNewTask_3();
    void item_140;
    Script_UndefinedParameterTy(g_57bf88, &item_248, &item_140, data_11, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_3();
    void item_d8;
    Script_UndefinedParameterTy(g_57bf88, &item_248, &item_d8, data_13, 7, 0);
    int32_t data_15 = Script_EvaluateCondition_3();
    void item_c8;
    Script_UndefinedParameterTy(g_57bf88, &item_248, &item_c8, data_15, 7, 0);
    int32_t data_17 = Script_EvaluateCondition_3();
    void item_b8;
    Script_UndefinedParameterTy(g_57bf88, &item_248, &item_b8, data_17, 7, 0);
    int32_t data_19 = Script_CallNativeHandler_3();
    void item_a4;
    Script_UndefinedParameterTy(g_57bf88, &item_248, &item_a4, data_19, 7, 0);
    int32_t data_21 = Script_CallNativeHandler_3();
    void item_54;
    return Script_UndefinedParameterTy(g_57bf88, &item_248, &item_54, data_21, 7, 0);
}

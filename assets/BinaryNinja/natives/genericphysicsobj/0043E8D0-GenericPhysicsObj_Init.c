// Original IGI.EXE function: GenericPhysicsObj_Init (VA 0x0043E8D0; static CFG gate PASS, CFG score 1.000).
#include "GenericPhysicsObj_Init.h"
void* GenericPhysicsObj_Init()

{
    int32_t item_724 = 0;
    int16_t data_1 = TaskType_Register("GenericPhysicsObj", 0x720, Script_SpawnNewTask_28(), 0);
    g_53c4a8 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_43eaa0);
    QTask_TriggerEvent(g_53c4a8, 1, GenericPhysicsObj_LoadParameters);
    QTask_TriggerEvent(g_53c4a8, 2, GenericPhysicsMagicObj_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c4a8, data_3, sub_43ec20);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_728_1 = data_4;
    data_4 = g_53c4a8;
    QTask_RemoveEventCallback(data_4, item_728_1, GenericPhysicsObj_Process);
    int32_t data_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_53c4a8, data_5, GenericPhysicsObj_Update_2);
    int32_t data_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53c4a8, data_6, GenericPhysicsMagicObj_Update);
    g_57c13c = Script_EvaluateCondition_7(0x14);
    int32_t data_8 = Script_ParseEnumReal32_4();
    void item_720;
    void item_5b8;
    Script_UndefinedParameterTy(g_57c13c, &item_720, &item_5b8, data_8, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_3();
    void item_6b0;
    Script_UndefinedParameterTy(g_57c13c, &item_720, &item_6b0, data_9, 7, 0);
    int32_t data_10 = Script_FormatString_2();
    void item_5a0;
    Script_UndefinedParameterTy(g_57c13c, &item_720, &item_5a0, data_10, 7, 0);
    int32_t data_11 = Script_EvaluateCondition_3();
    void item_5cc;
    Script_UndefinedParameterTy(g_57c13c, &item_720, &item_5cc, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_4();
    void item_48;
    Script_UndefinedParameterTy(g_57c13c, &item_720, &item_48, data_12, 7, 0);
    int32_t data_13 = Script_ParseEnumInt32_4();
    void item_47;
    Script_UndefinedParameterTy(g_57c13c, &item_720, &item_47, data_13, 7, 0);
    return TaskType_Set("TASKTYPE_GENERICPHYSICSOBJ", *g_53c4a8);
}

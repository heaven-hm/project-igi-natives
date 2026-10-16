#include "gi_platform.h"
#include "0043E8D0-GenericPhysicsObj_Init.h"
void* GenericPhysicsObj_Init()

{
    int32_t v_724 = 0;
    int16_t valA1 = TaskType_Register("GenericPhysicsObj", 0x720, Script_SpawnNewTask_28(), 0);
    g_53c4a8 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_43eaa0);
    QTask_TriggerEvent(g_53c4a8, 1, GenericPhysicsObj_LoadParameters);
    QTask_TriggerEvent(g_53c4a8, 2, GenericPhysicsMagicObj_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c4a8, valA3, sub_43ec20);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_728_1 = valA4;
    valA4 = g_53c4a8;
    QTask_RemoveEventCallback(valA4, v_728_1, GenericPhysicsObj_Process);
    int32_t valA5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_53c4a8, valA5, GenericPhysicsObj_Update_2);
    int32_t valA6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53c4a8, valA6, GenericPhysicsMagicObj_Update);
    g_57c13c = Script_EvaluateCondition_7(0x14);
    int32_t valA8 = Script_ParseEnumReal32_4();
    char v_720;
    char v_5b8;
    Script_UndefinedParameterTy(g_57c13c, &v_720, &v_5b8, valA8, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    char v_6b0;
    Script_UndefinedParameterTy(g_57c13c, &v_720, &v_6b0, valA9, 7, 0);
    int32_t valA10 = Script_FormatString_2();
    char v_5a0;
    Script_UndefinedParameterTy(g_57c13c, &v_720, &v_5a0, valA10, 7, 0);
    int32_t valA11 = Script_EvaluateCondition_3();
    char v_5cc;
    Script_UndefinedParameterTy(g_57c13c, &v_720, &v_5cc, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_4();
    char v_48;
    Script_UndefinedParameterTy(g_57c13c, &v_720, &v_48, valA12, 7, 0);
    int32_t valA13 = Script_ParseEnumInt32_4();
    char v_47;
    Script_UndefinedParameterTy(g_57c13c, &v_720, &v_47, valA13, 7, 0);
    return TaskType_Set("TASKTYPE_GENERICPHYSICSOBJ", *g_53c4a8);
}

#include "gi_platform.h"
#include "004485E0-Building_Init.h"
void* Building_Init()

{
    int32_t v_1f4 = 0;
    int16_t valA1 = TaskType_Register("Building", 0x1f0, Render_ComputeNormals_15(), 0);
    g_57c200 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Building_LoadParameters);
    QTask_TriggerEvent(g_57c200, 2, Building_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c200, valA3, sub_448880);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57c200, valA4, Building_Process);
    int32_t valA5 = Level_CheckQTaskID_3();
    int32_t v_1f8_2 = valA5;
    valA5 = g_57c200;
    QTask_RemoveEventCallback(valA5, v_1f8_2, sub_416ab0);
    int32_t valA6 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_57c200, valA6, sub_443dc0);
    int32_t valA7 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_57c200, valA7, Building_Update);
    int32_t valA8 = DynObj_UpdateDynTree_12();
    int32_t v_1f8_5 = valA8;
    valA8 = g_57c200;
    QTask_RemoveEventCallback(valA8, v_1f8_5, Building_OnEvent);
    g_57c204 = Script_EvaluateCondition_7(3);
    int32_t valA10 = Script_ParseEnumReal32_4();
    char v_1f0;
    char v_18;
    Script_UndefinedParameterTy(g_57c204, &v_1f0, &v_18, valA10, 7, 0);
    int32_t valA12 = Script_SpawnNewTask_3();
    char v_50;
    Script_UndefinedParameterTy(g_57c204, &v_1f0, &v_50, valA12, 7, 0);
    int32_t valA14 = Script_EvaluateCondition_3();
    char v_28;
    Script_UndefinedParameterTy(g_57c204, &v_1f0, &v_28, valA14, 7, 0);
    return TaskType_Set("TASKTYPE_BUILDING", *g_57c200);
}

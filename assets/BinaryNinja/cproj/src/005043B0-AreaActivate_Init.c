#include "gi_platform.h"
#include "005043B0-AreaActivate_Init.h"
int32_t* AreaActivate_Init()

{
    int32_t v_bc = 0;
    g_54e69c = TaskType_Register("AreaActivate", 0xb8, EditorRigidObj_OnEvent(), 0);
    g_54e69e = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_54e69c, 0, sub_5049d0);
    QTask_TriggerEvent(g_54e69c, 2, AreaActivate_LoadParameters);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54e69c, valA3, AreaActivate_Setup);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_c0_1 = valA4;
    valA4 = g_54e69c;
    QTask_RemoveEventCallback(valA4, v_c0_1, sub_504890);
    QTask_TriggerEvent(g_54e69c, 1, AreaActivate_Process);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_54e69c, valA5, AreaActivate_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    int32_t v_c0_3 = valA6;
    valA6 = g_54e69c;
    QTask_TriggerEvent(valA6, v_c0_3, AreaActivate_OnEvent);
    g_a7a7b4 = Script_EvaluateCondition_7(4);
    int32_t valA8 = Script_ParseEnumReal32_4();
    char v_b8;
    char v_68;
    Script_UndefinedParameterTy(g_a7a7b4, &v_b8, &v_68, valA8, 7, 0);
    int32_t valA10 = Script_SpawnNewTask_3();
    char v_50;
    Script_UndefinedParameterTy(g_a7a7b4, &v_b8, &v_50, valA10, 7, 0);
    int32_t valA12 = Script_FormatString_2();
    char v_1c;
    Script_UndefinedParameterTy(g_a7a7b4, &v_b8, &v_1c, valA12, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    char v_8;
    return Script_UndefinedParameterTy(g_a7a7b4, &v_b8, &v_8, valA14, 7, 0);
}

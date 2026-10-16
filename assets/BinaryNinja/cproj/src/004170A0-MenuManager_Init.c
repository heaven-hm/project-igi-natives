#include "gi_platform.h"
#include "004170A0-MenuManager_Init.h"
  int32_t* MenuManager_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x2898);
    Script_RegisterNamespace("MENUSYS:", "LOCAL:menusystem\");
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("MenuManager", 0x2898, QTask_OpenEvent_2(), 0);
    g_539824 = valA1;
    QTask_RemoveEventCallback(valA1, 0, MenuManager_LoadParameters);
    QTask_TriggerEvent(g_539824, 2, MenuManager_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_539824, valA3, sub_418070);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539824, valA4, MenuManager_Process);
    QTask_TriggerEvent(g_539824, 1, sub_418080);
    int32_t valA6 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_539824, valA6, MenuManager_Update);
    int32_t valA7 = Script_FormatString_5();
    QTask_TriggerEvent(g_539824, valA7, sub_418a80);
    int32_t valA8 = Script_SpawnNewTask_6();
    int32_t v_8_4 = valA8;
    valA8 = g_539824;
    QTask_TriggerEvent(valA8, v_8_4, sub_418aa0);
    g_57bae0 = Script_EvaluateCondition_7(5);
    int32_t valA10 = Script_SpawnNewTask_2();
    char arg_26bc;
    Script_UndefinedParameterTy(g_57bae0, &__return_addr, &arg_26bc, valA10, 6, 0);
    int32_t valA12 = Script_ParseEnumString_3();
    char arg_20;
    Script_UndefinedParameterTy(g_57bae0, &__return_addr, &arg_20, valA12, 7, 0);
    int32_t valA14 = Script_SpawnNewTask_4();
    char arg_d4;
    Script_UndefinedParameterTy(g_57bae0, &__return_addr, &arg_d4, valA14, 7, 0);
    int32_t valA16 = Script_SpawnNewTask_4();
    char arg_26c5;
    Script_UndefinedParameterTy(g_57bae0, &__return_addr, &arg_26c5, valA16, 6, 0);
    int32_t valA18 = Script_ParseEnumInt32_4();
    char arg_26c1;
    return Script_UndefinedParameterTy(g_57bae0, &__return_addr, &arg_26c1, valA18, 7, 0);
}

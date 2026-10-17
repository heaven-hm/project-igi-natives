// IGI native provenance: MenuManager_Init - 0x004170A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004170A0-MenuManager_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuManager_Init.h"
❓  int32_t* MenuManager_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x2898);
    Script_RegisterNamespace("MENUSYS:", "LOCAL:menusystem\");
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("MenuManager", 0x2898, QTask_OpenEvent_2(), 0);
    g_539824 = data_1;
    QTask_RemoveEventCallback(data_1, 0, MenuManager_LoadParameters);
    QTask_TriggerEvent(g_539824, 2, MenuManager_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_539824, data_3, sub_418070);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_539824, data_4, MenuManager_Process);
    QTask_TriggerEvent(g_539824, 1, sub_418080);
    int32_t data_6 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_539824, data_6, MenuManager_Update);
    int32_t data_7 = Script_FormatString_5();
    QTask_TriggerEvent(g_539824, data_7, sub_418a80);
    int32_t data_8 = Script_SpawnNewTask_6();
    int32_t item_8_4 = data_8;
    data_8 = g_539824;
    QTask_TriggerEvent(data_8, item_8_4, sub_418aa0);
    g_57bae0 = Script_EvaluateCondition_7(5);
    int32_t data_10 = Script_SpawnNewTask_2();
    void arg_26bc;
    Script_UndefinedParameterTy(g_57bae0, &return_addr, &arg_26bc, data_10, 6, 0);
    int32_t data_12 = Script_ParseEnumString_3();
    void arg_20;
    Script_UndefinedParameterTy(g_57bae0, &return_addr, &arg_20, data_12, 7, 0);
    int32_t data_14 = Script_SpawnNewTask_4();
    void arg_d4;
    Script_UndefinedParameterTy(g_57bae0, &return_addr, &arg_d4, data_14, 7, 0);
    int32_t data_16 = Script_SpawnNewTask_4();
    void arg_26c5;
    Script_UndefinedParameterTy(g_57bae0, &return_addr, &arg_26c5, data_16, 6, 0);
    int32_t data_18 = Script_ParseEnumInt32_4();
    void arg_26c1;
    return Script_UndefinedParameterTy(g_57bae0, &return_addr, &arg_26c1, data_18, 7, 0);
}

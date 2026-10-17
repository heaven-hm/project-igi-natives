// IGI native provenance: ModelViewBox_Init - 0x00422B40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422B40-ModelViewBox_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ModelViewBox_Init.h"
int32_t* ModelViewBox_Init()

{
    int32_t item_cc = 0;
    int16_t data_1 = TaskType_Register("ModelViewBox", 0xc8, Menu_PlayMusic_13(), 0);
    g_53b854 = data_1;
    QTask_TriggerEvent(data_1, 1, sub_422f10);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_d0 = data_2;
    data_2 = g_53b854;
    QTask_TriggerEvent(data_2, item_d0, ModelViewBox_LoadParameters);
    QTask_TriggerEvent(g_53b854, 2, ModelViewBox_Setup);
    QTask_RemoveEventCallback(g_53b854, 0, ModelViewBox_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_d0_1 = data_3;
    data_3 = g_53b854;
    QTask_RemoveEventCallback(data_3, item_d0_1, sub_422fb0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b854, data_4, ModelViewBox_Update);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b854, data_5, sub_422fc0);
    int32_t data_6 = Script_SpawnNewTask_6();
    int32_t item_d0_4 = data_6;
    data_6 = g_53b854;
    QTask_TriggerEvent(data_6, item_d0_4, ModelViewBox_OnEvent);
    g_57bc30 = 0;
    g_57bc34 = 0x280;
    g_57bc28 = Script_EvaluateCondition_7(2);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_c8;
    void item_a0;
    Script_UndefinedParameterTy(g_57bc28, &item_c8, &item_a0, data_8, 7, &g_57bc30);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_9c;
    return Script_UndefinedParameterTy(g_57bc28, &item_c8, &item_9c, data_10, 7, &g_57bc30);
}

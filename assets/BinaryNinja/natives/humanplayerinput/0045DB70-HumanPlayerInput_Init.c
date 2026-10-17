// Original IGI.EXE function: HumanPlayerInput_Init (VA 0x0045DB70; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayerInput_Init.h"
int32_t* HumanPlayerInput_Init()

{
    int32_t item_1e8 = 0;
    int16_t data_1 = TaskType_Register("HumanPlayerInput", 0x1e4, QTask_OpenEvent_2(), 0);
    g_5bdac4 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_45dcb0);
    QTask_TriggerEvent(g_5bdac4, 1, HumanPlayerInput_LoadParameters);
    QTask_TriggerEvent(g_5bdac4, 2, HumanPlayerInput_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5bdac4, data_3, sub_45df40);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_1ec_1 = data_4;
    data_4 = g_5bdac4;
    QTask_RemoveEventCallback(data_4, item_1ec_1, HumanPlayerInput_Process);
    g_5bdac8 = Script_EvaluateCondition_7(4);
    int32_t data_6 = Script_ParseEnumInt32_4();
    void item_1e4;
    void item_164;
    Script_UndefinedParameterTy(g_5bdac8, &item_1e4, &item_164, data_6, 7, 0);
    int32_t data_8 = Script_ParseEnumInt32_4();
    void item_163;
    Script_UndefinedParameterTy(g_5bdac8, &item_1e4, &item_163, data_8, 7, 0);
    int32_t data_10 = Script_SpawnNewTask_4();
    void item_162;
    Script_UndefinedParameterTy(g_5bdac8, &item_1e4, &item_162, data_10, 7, 0);
    int32_t data_12 = Script_CallNativeHandler_3();
    void item_50;
    return Script_UndefinedParameterTy(g_5bdac8, &item_1e4, &item_50, data_12, 7, 0);
}

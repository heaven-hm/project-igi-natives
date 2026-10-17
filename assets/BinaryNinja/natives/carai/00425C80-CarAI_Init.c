// Original IGI.EXE function: CarAI_Init (VA 0x00425C80; static CFG gate PASS, CFG score 1.000).
#include "CarAI_Init.h"
int32_t* CarAI_Init()

{
    int32_t item_88 = 0;
    int16_t data_1 = TaskType_Register("CarAI", 0x84, QTask_OpenEvent_2(), 0);
    g_53ba50 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_425d90);
    QTask_TriggerEvent(g_53ba50, 1, CarAI_Run);
    QTask_TriggerEvent(g_53ba50, 2, AIGraph_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53ba50, data_3, sub_426590);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_8c_1 = data_4;
    data_4 = g_53ba50;
    QTask_RemoveEventCallback(data_4, item_8c_1, CarAI_Process);
    g_57bc74 = Script_EvaluateCondition_7(3);
    int32_t data_6 = Script_ParseEnumString_3();
    void item_84;
    void item_5c;
    Script_UndefinedParameterTy(g_57bc74, &item_84, &item_5c, data_6, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_64;
    Script_UndefinedParameterTy(g_57bc74, &item_84, &item_64, data_8, 7, 0);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_60;
    return Script_UndefinedParameterTy(g_57bc74, &item_84, &item_60, data_10, 7, 0);
}

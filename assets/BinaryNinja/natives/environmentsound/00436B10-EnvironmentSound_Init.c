// Original IGI.EXE function: EnvironmentSound_Init (VA 0x00436B10; static CFG gate PASS, CFG score 1.000).
#include "EnvironmentSound_Init.h"
int32_t* EnvironmentSound_Init()

{
    int32_t item_60 = 0;
    int16_t data_1 = TaskType_Register("EnvironmentSound", 0x5c, QTask_OpenEvent_2(), 0);
    g_57bdb0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_436c60);
    QTask_TriggerEvent(g_57bdb0, 1, EnvironmentSound_LoadParameters);
    QTask_TriggerEvent(g_57bdb0, 2, AIGraph_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bdb0, data_3, sub_4374c0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_64_1 = data_4;
    data_4 = g_57bdb0;
    QTask_RemoveEventCallback(data_4, item_64_1, sub_4374d0);
    g_57bda8 = Script_EvaluateCondition_7(5);
    int32_t data_6 = Script_ParseEnumInt32_4();
    void item_5c;
    void item_3c;
    Script_UndefinedParameterTy(g_57bda8, &item_5c, &item_3c, data_6, 7, 0);
    int32_t data_8 = Script_ParseEnumInt32_4();
    void item_3b;
    Script_UndefinedParameterTy(g_57bda8, &item_5c, &item_3b, data_8, 7, 0);
    int32_t data_10 = Script_ParseEnumInt32_4();
    void item_3a;
    Script_UndefinedParameterTy(g_57bda8, &item_5c, &item_3a, data_10, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_4();
    void item_39;
    Script_UndefinedParameterTy(g_57bda8, &item_5c, &item_39, data_12, 7, 0);
    int32_t data_14 = Script_EvaluateCondition_3();
    void item_38;
    return Script_UndefinedParameterTy(g_57bda8, &item_5c, &item_38, data_14, 7, 0);
}

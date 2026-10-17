// Original IGI.EXE function: SimpointObjGenerator_Init (VA 0x0043B850; static CFG gate PASS, CFG score 1.000).
#include "SimpointObjGenerator_Init.h"
int32_t* SimpointObjGenerator_Init()

{
    int32_t item_15c = 0;
    int16_t data_1 = TaskType_Register("SimpointObjGenerator", 0x158, DynObj_LookupHashItem_5(), 0);
    g_53c31c = data_1;
    QTask_RemoveEventCallback(data_1, 0, SimpointObjGenerator_LoadParameters);
    QTask_TriggerEvent(g_53c31c, 1, SimpointObjGenerator_Setup);
    QTask_TriggerEvent(g_53c31c, 2, sub_426860);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c31c, data_3, sub_43be50);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_160_1 = data_4;
    data_4 = g_53c31c;
    QTask_RemoveEventCallback(data_4, item_160_1, SimpointObjGenerator_Process);
    g_57bf60 = Script_EvaluateCondition_7(0xd);
    g_57bf48 = 0;
    g_57bf4c = 0x3f800000;
    g_57bf68 = 0;
    g_57bf6c = 0x3f800000;
    g_57bf70 = 0;
    g_57bf74 = 0x447a0000;
    g_57bf58 = 0;
    g_57bf5c = 0x258;
    g_57bf50 = 0;
    g_57bf54 = 0x12c;
    int32_t data_6 = Script_ParseEnumReal32_4();
    void item_158;
    void item_138;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_138, data_6, 7, 0);
    int32_t data_8 = Script_SpawnNewTask_3();
    void item_e8;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_e8, data_8, 7, 0);
    int32_t data_10 = Script_EvaluateCondition_3();
    void item_64;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_64, data_10, 7, 0);
    int32_t data_12 = Script_EvaluateCondition_3();
    void item_54;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_54, data_12, 7, 0);
    int32_t data_14 = Script_EvaluateCondition_3();
    void item_44;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_44, data_14, 7, 0);
    int32_t data_16 = Script_ParseEnumString_3();
    void item_34;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_34, data_16, 7, &g_57bf58);
    int32_t data_18 = Script_ParseEnumString_3();
    void item_30;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_30, data_18, 7, &g_57bf50);
    int32_t data_20 = Script_EvaluateCondition_2();
    void item_2c;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_2c, data_20, 7, &g_57bf48);
    int32_t data_22 = Script_EvaluateCondition_2();
    void item_28;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_28, data_22, 7, &g_57bf68);
    int32_t data_24 = Script_EvaluateCondition_2();
    void item_24;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_24, data_24, 7, &g_57bf70);
    int32_t data_26 = Script_FormatString_2();
    void item_1c;
    Script_UndefinedParameterTy(g_57bf60, &item_158, &item_1c, data_26, 7, 0);
    int32_t data_28 = Script_FormatString_2();
    void item_10;
    return Script_UndefinedParameterTy(g_57bf60, &item_158, &item_10, data_28, 7, 0);
}

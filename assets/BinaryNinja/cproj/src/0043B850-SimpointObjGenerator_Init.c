#include "gi_platform.h"
#include "0043B850-SimpointObjGenerator_Init.h"
int32_t* SimpointObjGenerator_Init()

{
    int32_t v_15c = 0;
    int16_t valA1 = TaskType_Register("SimpointObjGenerator", 0x158, DynObj_LookupHashItem_5(), 0);
    g_53c31c = valA1;
    QTask_RemoveEventCallback(valA1, 0, SimpointObjGenerator_LoadParameters);
    QTask_TriggerEvent(g_53c31c, 1, SimpointObjGenerator_Setup);
    QTask_TriggerEvent(g_53c31c, 2, sub_426860);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c31c, valA3, sub_43be50);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_160_1 = valA4;
    valA4 = g_53c31c;
    QTask_RemoveEventCallback(valA4, v_160_1, SimpointObjGenerator_Process);
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
    int32_t valA6 = Script_ParseEnumReal32_4();
    char v_158;
    char v_138;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_138, valA6, 7, 0);
    int32_t valA8 = Script_SpawnNewTask_3();
    char v_e8;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_e8, valA8, 7, 0);
    int32_t valA10 = Script_EvaluateCondition_3();
    char v_64;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_64, valA10, 7, 0);
    int32_t valA12 = Script_EvaluateCondition_3();
    char v_54;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_54, valA12, 7, 0);
    int32_t valA14 = Script_EvaluateCondition_3();
    char v_44;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_44, valA14, 7, 0);
    int32_t valA16 = Script_ParseEnumString_3();
    char v_34;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_34, valA16, 7, &g_57bf58);
    int32_t valA18 = Script_ParseEnumString_3();
    char v_30;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_30, valA18, 7, &g_57bf50);
    int32_t valA20 = Script_EvaluateCondition_2();
    char v_2c;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_2c, valA20, 7, &g_57bf48);
    int32_t valA22 = Script_EvaluateCondition_2();
    char v_28;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_28, valA22, 7, &g_57bf68);
    int32_t valA24 = Script_EvaluateCondition_2();
    char v_24;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_24, valA24, 7, &g_57bf70);
    int32_t valA26 = Script_FormatString_2();
    char v_1c;
    Script_UndefinedParameterTy(g_57bf60, &v_158, &v_1c, valA26, 7, 0);
    int32_t valA28 = Script_FormatString_2();
    char v_10;
    return Script_UndefinedParameterTy(g_57bf60, &v_158, &v_10, valA28, 7, 0);
}

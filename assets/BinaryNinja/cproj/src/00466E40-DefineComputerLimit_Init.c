#include "gi_platform.h"
#include "00466E40-DefineComputerLimit_Init.h"
int32_t* DefineComputerLimit_Init()

{
    int32_t v_44 = 0;
    int16_t valA1 = TaskType_Register("DefineComputerLimit", 0x40, DynObj_LookupHashItem_5(), 0);
    g_5bdc60 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_466f10);
    QTask_TriggerEvent(g_5bdc60, 2, sub_466f20);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5bdc60, valA3, sub_466f30);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bdc60, valA4, AIGraph_LoadParameters);
    g_5bdc5c = Script_EvaluateCondition_7(2);
    int32_t valA6 = Script_ParseEnumReal32_4();
    char v_40;
    char v_20;
    Script_UndefinedParameterTy(g_5bdc5c, &v_40, &v_20, valA6, 7, 0);
    int32_t valA7 = Script_EvaluateCondition_2();
    char v_8;
    return Script_UndefinedParameterTy(g_5bdc5c, &v_40, &v_8, valA7, 7, 0);
}

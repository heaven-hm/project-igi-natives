// Original IGI.EXE function: PatrolPathCommand_Init (VA 0x004533B0; static CFG gate PASS, CFG score 1.000).
#include "PatrolPathCommand_Init.h"
int32_t* PatrolPathCommand_Init()

{
    int32_t v_2c = 0;
    int16_t valA1 = TaskType_Register("PatrolPathCommand", 0x28, QTask_OpenEvent_2(), 0);
    g_53dfcc = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_453470);
    int32_t valA2 = Script_ParseEnumInt32_8();
    int32_t v_30 = valA2;
    valA2 = g_53dfcc;
    QTask_RemoveEventCallback(valA2, v_30, sub_453480);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53dfcc, valA3, sub_453490);
    g_5bda68 = Script_EvaluateCondition_7(2);
    int32_t valA5 = Script_ParseEnumString_3();
    void v_28;
    void v_8;
    Script_UndefinedParameterTy(g_5bda68, &v_28, &v_8, valA5, 7, 0);
    int32_t valA6 = Script_ParseEnumString_3();
    void v_4;
    return Script_UndefinedParameterTy(g_5bda68, &v_28, &v_4, valA6, 7, 0);
}

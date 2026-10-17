// Original IGI.EXE function: ComputerHilight_Init (VA 0x004682F0; static CFG gate PASS, CFG score 1.000).
#include "ComputerHilight_Init.h"
int32_t* ComputerHilight_Init()

{
    g_5bdc90 = 0x13;
    int32_t v_4e4 = 0;
    g_5bdc94 = &g_5be260;
    int16_t valA1 = TaskType_Register("ComputerHilight", 0x4e0, EditorRigidObj_OnEvent(), 0);
    g_53f6d0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4684f0);
    QTask_TriggerEvent(g_53f6d0, 2, ComputerHilight_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53f6d0, valA3, sub_4685b0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53f6d0, valA4, sub_4685c0);
    int32_t valA5 = AI_CheckHearing_25();
    int32_t v_4e8_2 = valA5;
    valA5 = g_53f6d0;
    QTask_RemoveEventCallback(valA5, v_4e8_2, ComputerHilight_Setup);
    g_5bdc84 = Script_EvaluateCondition_7(8);
    int32_t valA7 = Script_ParseEnumReal32_4();
    void v_4e0;
    void v_4c0;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_4c0, valA7, 7, 0);
    int32_t valA9 = Script_CallNativeHandler_3();
    void v_4a8;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_4a8, valA9, 7, 0);
    int32_t valA11 = Script_SpawnNewTask_4();
    void v_454;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_454, valA11, 7, 0);
    int32_t valA13 = Script_ParseEnumInt32_2();
    void v_458;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_458, valA13, 7, &g_5bdc90);
    int32_t valA15 = Script_FormatString_3();
    void v_24c;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_24c, valA15, 7, 0);
    int32_t valA17 = Script_FormatString_3();
    void v_228;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_228, valA17, 7, 0);
    int32_t valA19 = Script_SpawnNewTask_4();
    void v_204;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_204, valA19, 7, 0);
    int32_t valA21 = Script_SpawnNewTask_4();
    void v_104;
    Script_UndefinedParameterTy(g_5bdc84, &v_4e0, &v_104, valA21, 7, 0);
    int32_t* result = Mem_Alloc8(0x20);
    g_5bdc80 = result;
    return result;
}

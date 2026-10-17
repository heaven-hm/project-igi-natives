// Original IGI.EXE function: ComputerHilight_Init (VA 0x004682F0; static CFG gate PASS, CFG score 1.000).
#include "ComputerHilight_Init.h"
int32_t* ComputerHilight_Init()

{
    g_5bdc90 = 0x13;
    int32_t item_4e4 = 0;
    g_5bdc94 = &g_5be260;
    int16_t data_1 = TaskType_Register("ComputerHilight", 0x4e0, EditorRigidObj_OnEvent(), 0);
    g_53f6d0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4684f0);
    QTask_TriggerEvent(g_53f6d0, 2, ComputerHilight_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53f6d0, data_3, sub_4685b0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53f6d0, data_4, sub_4685c0);
    int32_t data_5 = AI_CheckHearing_25();
    int32_t item_4e8_2 = data_5;
    data_5 = g_53f6d0;
    QTask_RemoveEventCallback(data_5, item_4e8_2, ComputerHilight_Setup);
    g_5bdc84 = Script_EvaluateCondition_7(8);
    int32_t data_7 = Script_ParseEnumReal32_4();
    void item_4e0;
    void item_4c0;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_4c0, data_7, 7, 0);
    int32_t data_9 = Script_CallNativeHandler_3();
    void item_4a8;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_4a8, data_9, 7, 0);
    int32_t data_11 = Script_SpawnNewTask_4();
    void item_454;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_454, data_11, 7, 0);
    int32_t data_13 = Script_ParseEnumInt32_2();
    void item_458;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_458, data_13, 7, &g_5bdc90);
    int32_t data_15 = Script_FormatString_3();
    void item_24c;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_24c, data_15, 7, 0);
    int32_t data_17 = Script_FormatString_3();
    void item_228;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_228, data_17, 7, 0);
    int32_t data_19 = Script_SpawnNewTask_4();
    void item_204;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_204, data_19, 7, 0);
    int32_t data_21 = Script_SpawnNewTask_4();
    void item_104;
    Script_UndefinedParameterTy(g_5bdc84, &item_4e0, &item_104, data_21, 7, 0);
    int32_t* result = Mem_Alloc8(0x20);
    g_5bdc80 = result;
    return result;
}

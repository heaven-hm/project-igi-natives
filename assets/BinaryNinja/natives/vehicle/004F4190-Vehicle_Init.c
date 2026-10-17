// Original IGI.EXE function: Vehicle_Init (VA 0x004F4190; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_Init.h"
int32_t Vehicle_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Vehicle", 0x748, Script_SpawnNewTask_28(), 0);
    g_54e200 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4f4160);
    QTask_TriggerEvent(g_54e200, 2, sub_4f4170);
    QTask_TriggerEvent(g_54e200, 1, sub_4f4180);
    QTask_RemoveEventCallback(g_54e200, 7, sub_4f42d0);
    QTask_RemoveEventCallback(g_54e200, 0xc, sub_4f4390);
    int32_t valA4 = Script_FormatString_15();
    QTask_RemoveEventCallback(g_54e200, valA4, Vehicle_LoadParameters);
    int32_t valA5 = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(g_54e200, valA5, sub_4f43b0);
    int32_t valA6 = SoundSys_SetMasterVolume_18();
    int32_t v_8_2 = valA6;
    valA6 = g_54e200;
    QTask_RemoveEventCallback(valA6, v_8_2, sub_4f43d0);
    int32_t valA7 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_54e200, valA7, Vehicle_Setup);
    int32_t valA8 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_54e200, valA8, sub_4f44a0);
    g_a76c48 = Physics_UnableToRegisterArea("CRITERIA_VEHICLE", sub_4f4560);
    g_54e202 = QTask_UnableToAllocateEvent(0);
    char result = QTask_UnableToAllocateEvent(0);
    g_54e203 = result;
    return result;
}

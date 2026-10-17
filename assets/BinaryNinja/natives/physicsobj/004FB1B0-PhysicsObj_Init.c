// Original IGI.EXE function: PhysicsObj_Init (VA 0x004FB1B0; static CFG gate PASS, CFG score 1.000).
#include "PhysicsObj_Init.h"
int32_t PhysicsObj_Init()

{
    int32_t item_4 = 0;
    g_a774b0 = TaskType_Register("PhysicsObj", 0x720, DynObj_LookupHashItem_5(), 0);
    g_54e4cc = QTask_UnableToAllocateEvent(0);
    g_54e4cd = QTask_UnableToAllocateEvent(0);
    g_54e4ce = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_a774b0, 0, sub_4fb290);
    QTask_TriggerEvent(g_a774b0, 2, sub_4fb2a0);
    QTask_TriggerEvent(g_a774b0, 1, sub_4fb2b0);
    QTask_RemoveEventCallback(g_a774b0, 0xc, sub_4f4390);
    int32_t data_6 = Script_ExecuteLevelScript_29();
    QTask_RemoveEventCallback(g_a774b0, data_6, PhysicsObj_LoadParameters);
    int32_t data_7 = SoundSys_SetFrequency_18();
    int32_t result = QTask_RemoveEventCallback(g_a774b0, data_7, PhysicsObj_Setup);
    g_a774b8 = 0;
    return result;
}

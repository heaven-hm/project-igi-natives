// Original IGI.EXE function: SoundSysMicrophone_Init (VA 0x004EBC60; static CFG gate PASS, CFG score 1.000).
#include "SoundSysMicrophone_Init.h"
int32_t SoundSysMicrophone_Init()

{
    int32_t item_4 = 0;
    g_54db68 = TaskType_Register("SoundSysMicrophone", 0x68, QTask_OpenEvent_2(), 0);
    g_54db6a = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_54db68, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_54db68, 1, SoundSysMicrophone_Setup);
    return QTask_TriggerEvent(g_54db68, 2, AIGraph_LoadParameters);
}

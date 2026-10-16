#include "SoundSysMicrophone_Init.h"
int32_t SoundSysMicrophone_Init()

{
    int32_t v_4 = 0;
    g_54db68 = TaskType_Register("SoundSysMicrophone", 0x68, QTask_OpenEvent_2(), 0);
    g_54db6a = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_54db68, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_54db68, 1, SoundSysMicrophone_Setup);
    return QTask_TriggerEvent(g_54db68, 2, AIGraph_LoadParameters);
}

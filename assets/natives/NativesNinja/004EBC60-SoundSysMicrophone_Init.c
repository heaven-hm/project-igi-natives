#include "004EBC60-SoundSysMicrophone_Init.h"
/* 0x004ebc60 SoundSysMicrophone_Init full linked: callers=1 callees=6 */
int32_t sub_4ebc60()

{
    int32_t var_4 = 0;
    g_54db68 = TaskType_Register("SoundSysMicrophone", 0x68, QTask_OpenEvent_2(), 0);
    g_54db6a = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_54db68, 0, sub_4d3710);
    QTask_TriggerEvent(g_54db68, 1, sub_4ebcd0);
    return QTask_TriggerEvent(g_54db68, 2, sub_4d3710);
}

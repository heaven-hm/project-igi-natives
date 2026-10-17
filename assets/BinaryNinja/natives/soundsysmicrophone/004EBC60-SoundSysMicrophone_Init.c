// IGI native provenance: SoundSysMicrophone_Init - 0x004EBC60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EBC60-SoundSysMicrophone_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

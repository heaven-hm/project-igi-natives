// IGI native provenance: AnimSound_Init - 0x0051B400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051B400-AnimSound_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSound_Init.h"
void* AnimSound_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("AnimSound", 4, QTask_OpenEvent_2(), 0);
    g_a83764 = data_1;
    QTask_RemoveEventCallback(data_1, 0, AnimSound_LoadParameters);
    QTask_TriggerEvent(g_a83764, 2, AnimSound_LoadParameters);
    int32_t data_3 = SoundSys_LoadSoundDef_15();
    QTask_RemoveEventCallback(g_a83764, data_3, sub_51b4b0);
    int32_t data_4 = SoundSys_StopSoundSample_15();
    QTask_RemoveEventCallback(g_a83764, data_4, sub_51b4e0);
    int32_t data_5 = SoundSys_SetFrequency_15();
    int32_t item_8_2 = data_5;
    data_5 = g_a83764;
    QTask_RemoveEventCallback(data_5, item_8_2, AnimSound_Process);
    return TaskType_Set("TASKTYPE_ANIMSOUND", *g_a83764);
}

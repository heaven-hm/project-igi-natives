// IGI native provenance: SoundDefGroup_Init - 0x004EB1D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EB1D0-SoundDefGroup_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundDefGroup_Init.h"
int32_t SoundDefGroup_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("SoundDefGroup", 0x60, QTask_OpenEvent_2(), 0x200);
    g_54db48 = data_1;
    g_54db4a = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4eb360);
    QTask_TriggerEvent(g_54db48, 1, SoundDefGroup_LoadParameters);
    QTask_TriggerEvent(g_54db48, 2, AIGraph_LoadParameters);
    int32_t data_3 = SoundSys_SetMasterVolume_5();
    QTask_RemoveEventCallback(g_54db48, data_3, SoundDefGroup_Process);
    int32_t data_4 = SoundSys_SetFrequency_5();
    int32_t item_8_1 = data_4;
    data_4 = g_54db48;
    QTask_RemoveEventCallback(data_4, item_8_1, SoundDefGroup_Update);
    int32_t data_5 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54db48, data_5, SoundDefGroup_OnEvent);
    int32_t data_6 = SoundSys_LoadSoundDef_5();
    QTask_RemoveEventCallback(g_54db48, data_6, sub_4eb740);
    int32_t data_7 = SoundSys_EvaluateTrigger_5();
    int32_t item_8_4 = data_7;
    data_7 = g_54db48;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_4eb760);
    int32_t data_8 = SoundSys_AttachLipsync_5();
    QTask_RemoveEventCallback(g_54db48, data_8, sub_4eb780);
    int32_t data_9 = SoundSys_InitSoundSys_6();
    QTask_RemoveEventCallback(g_54db48, data_9, sub_4eb810);
    int32_t data_10 = SoundSys_PlaySoundSample_6();
    int32_t item_8_7 = data_10;
    data_10 = g_54db48;
    QTask_RemoveEventCallback(data_10, item_8_7, sub_4eb8a0);
    int32_t data_11 = SoundSys_Update3DPosition_6();
    QTask_RemoveEventCallback(g_54db48, data_11, sub_4eb930);
    int32_t data_12 = SoundSys_SetMasterVolume_6();
    QTask_RemoveEventCallback(g_54db48, data_12, sub_4eb9c0);
    int32_t data_13 = SoundSys_SetFrequency_6();
    int32_t item_8_10 = data_13;
    data_13 = g_54db48;
    return QTask_TriggerEvent(data_13, item_8_10, sub_4eb460);
}

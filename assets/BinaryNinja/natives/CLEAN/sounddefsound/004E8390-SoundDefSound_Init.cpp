// IGI native provenance: SoundDefSound_Init - 0x004E8390 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8390-SoundDefSound_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundDefSound_Init.h"
int32_t SoundDefSound_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("SoundDefSound", 0x130, QTask_OpenEvent_2(), 0x200);
    g_54d9b4 = data_1;
    g_54d9b6 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4e85e0);
    QTask_TriggerEvent(g_54d9b4, 1, SoundDefSound_LoadParameters);
    QTask_TriggerEvent(g_54d9b4, 2, sub_4e88e0);
    int32_t data_3 = SoundSysMicrophone_Process();
    QTask_RemoveEventCallback(g_54d9b4, data_3, SoundDefSound_Setup);
    int32_t data_4 = SoundSys_SetMasterVolume_5();
    int32_t item_8_1 = data_4;
    data_4 = g_54d9b4;
    QTask_RemoveEventCallback(data_4, item_8_1, SoundDefSound_Process);
    int32_t data_5 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54d9b4, data_5, sub_4e8aa0);
    int32_t data_6 = SoundSys_LoadSoundDef_5();
    QTask_RemoveEventCallback(g_54d9b4, data_6, sub_4e8b00);
    int32_t data_7 = SoundSys_EvaluateTrigger_5();
    int32_t item_8_4 = data_7;
    data_7 = g_54d9b4;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_4eabb0);
    int32_t data_8 = SoundSys_AttachLipsync_5();
    QTask_RemoveEventCallback(g_54d9b4, data_8, sub_4e8b20);
    int32_t data_9 = SoundSys_InitSoundSys_6();
    QTask_RemoveEventCallback(g_54d9b4, data_9, sub_4e8b60);
    int32_t data_10 = SoundSys_PlaySoundSample_6();
    int32_t item_8_7 = data_10;
    data_10 = g_54d9b4;
    QTask_RemoveEventCallback(data_10, item_8_7, sub_4eac20);
    int32_t data_11 = SoundSys_Update3DPosition_6();
    QTask_RemoveEventCallback(g_54d9b4, data_11, SoundDefSound_Update);
    int32_t data_12 = SoundSys_SetMasterVolume_6();
    QTask_RemoveEventCallback(g_54d9b4, data_12, SoundDefSound_OnEvent);
    int32_t data_13 = SoundSys_SetFrequency_6();
    int32_t item_8_10 = data_13;
    data_13 = g_54d9b4;
    return QTask_TriggerEvent(data_13, item_8_10, sub_4e8900);
}

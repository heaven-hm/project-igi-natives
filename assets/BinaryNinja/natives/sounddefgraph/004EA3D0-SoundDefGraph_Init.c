// Original IGI.EXE function: SoundDefGraph_Init (VA 0x004EA3D0; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGraph_Init.h"
int32_t SoundDefGraph_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("SoundDefGraph", 0x188, QTask_OpenEvent_2(), 0x200);
    g_54dad8 = data_1;
    g_54dada = data_1;
    QTask_RemoveEventCallback(data_1, 0, SoundDefGraph_LoadParameters);
    QTask_TriggerEvent(g_54dad8, 1, sub_4ea880);
    QTask_TriggerEvent(g_54dad8, 2, sub_4ea8a0);
    int32_t data_3 = SoundSysMicrophone_Process();
    QTask_RemoveEventCallback(g_54dad8, data_3, SoundDefGraph_Setup);
    int32_t data_4 = SoundSys_SetMasterVolume_5();
    int32_t item_8_1 = data_4;
    data_4 = g_54dad8;
    QTask_RemoveEventCallback(data_4, item_8_1, SoundDefGraph_Process);
    int32_t data_5 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54dad8, data_5, sub_4eab30);
    int32_t data_6 = SoundSys_LoadSoundDef_5();
    QTask_RemoveEventCallback(g_54dad8, data_6, sub_4eab90);
    int32_t data_7 = SoundSys_EvaluateTrigger_5();
    int32_t item_8_4 = data_7;
    data_7 = g_54dad8;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_4eabb0);
    int32_t data_8 = SoundSys_AttachLipsync_5();
    QTask_RemoveEventCallback(g_54dad8, data_8, sub_4eabd0);
    int32_t data_9 = SoundSys_InitSoundSys_6();
    QTask_RemoveEventCallback(g_54dad8, data_9, sub_4eac10);
    int32_t data_10 = SoundSys_PlaySoundSample_6();
    int32_t item_8_7 = data_10;
    data_10 = g_54dad8;
    QTask_RemoveEventCallback(data_10, item_8_7, sub_4eac20);
    int32_t data_11 = SoundSys_Update3DPosition_6();
    QTask_RemoveEventCallback(g_54dad8, data_11, SoundDefGraph_Update);
    int32_t data_12 = SoundSys_SetMasterVolume_6();
    QTask_RemoveEventCallback(g_54dad8, data_12, SoundDefGraph_OnEvent);
    int32_t data_13 = SoundSys_SetFrequency_6();
    int32_t item_8_10 = data_13;
    data_13 = g_54dad8;
    return QTask_TriggerEvent(data_13, item_8_10, sub_4ea8c0);
}

// Original IGI.EXE function: SoundDefGraph_Init (VA 0x004EA3D0; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGraph_Init.h"
int32_t SoundDefGraph_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("SoundDefGraph", 0x188, QTask_OpenEvent_2(), 0x200);
    g_54dad8 = valA1;
    g_54dada = valA1;
    QTask_RemoveEventCallback(valA1, 0, SoundDefGraph_LoadParameters);
    QTask_TriggerEvent(g_54dad8, 1, sub_4ea880);
    QTask_TriggerEvent(g_54dad8, 2, sub_4ea8a0);
    int32_t valA3 = SoundSysMicrophone_Process();
    QTask_RemoveEventCallback(g_54dad8, valA3, SoundDefGraph_Setup);
    int32_t valA4 = SoundSys_SetMasterVolume_5();
    int32_t v_8_1 = valA4;
    valA4 = g_54dad8;
    QTask_RemoveEventCallback(valA4, v_8_1, SoundDefGraph_Process);
    int32_t valA5 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54dad8, valA5, sub_4eab30);
    int32_t valA6 = SoundSys_LoadSoundDef_5();
    QTask_RemoveEventCallback(g_54dad8, valA6, sub_4eab90);
    int32_t valA7 = SoundSys_EvaluateTrigger_5();
    int32_t v_8_4 = valA7;
    valA7 = g_54dad8;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_4eabb0);
    int32_t valA8 = SoundSys_AttachLipsync_5();
    QTask_RemoveEventCallback(g_54dad8, valA8, sub_4eabd0);
    int32_t valA9 = SoundSys_InitSoundSys_6();
    QTask_RemoveEventCallback(g_54dad8, valA9, sub_4eac10);
    int32_t valA10 = SoundSys_PlaySoundSample_6();
    int32_t v_8_7 = valA10;
    valA10 = g_54dad8;
    QTask_RemoveEventCallback(valA10, v_8_7, sub_4eac20);
    int32_t valA11 = SoundSys_Update3DPosition_6();
    QTask_RemoveEventCallback(g_54dad8, valA11, SoundDefGraph_Update);
    int32_t valA12 = SoundSys_SetMasterVolume_6();
    QTask_RemoveEventCallback(g_54dad8, valA12, SoundDefGraph_OnEvent);
    int32_t valA13 = SoundSys_SetFrequency_6();
    int32_t v_8_10 = valA13;
    valA13 = g_54dad8;
    return QTask_TriggerEvent(valA13, v_8_10, sub_4ea8c0);
}

#include "gi_platform.h"
#include "004EB1D0-SoundDefGroup_Init.h"
int32_t SoundDefGroup_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("SoundDefGroup", 0x60, QTask_OpenEvent_2(), 0x200);
    g_54db48 = valA1;
    g_54db4a = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4eb360);
    QTask_TriggerEvent(g_54db48, 1, SoundDefGroup_LoadParameters);
    QTask_TriggerEvent(g_54db48, 2, AIGraph_LoadParameters);
    int32_t valA3 = SoundSys_SetMasterVolume_5();
    QTask_RemoveEventCallback(g_54db48, valA3, SoundDefGroup_Process);
    int32_t valA4 = SoundSys_SetFrequency_5();
    int32_t v_8_1 = valA4;
    valA4 = g_54db48;
    QTask_RemoveEventCallback(valA4, v_8_1, SoundDefGroup_Update);
    int32_t valA5 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54db48, valA5, SoundDefGroup_OnEvent);
    int32_t valA6 = SoundSys_LoadSoundDef_5();
    QTask_RemoveEventCallback(g_54db48, valA6, sub_4eb740);
    int32_t valA7 = SoundSys_EvaluateTrigger_5();
    int32_t v_8_4 = valA7;
    valA7 = g_54db48;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_4eb760);
    int32_t valA8 = SoundSys_AttachLipsync_5();
    QTask_RemoveEventCallback(g_54db48, valA8, sub_4eb780);
    int32_t valA9 = SoundSys_InitSoundSys_6();
    QTask_RemoveEventCallback(g_54db48, valA9, sub_4eb810);
    int32_t valA10 = SoundSys_PlaySoundSample_6();
    int32_t v_8_7 = valA10;
    valA10 = g_54db48;
    QTask_RemoveEventCallback(valA10, v_8_7, sub_4eb8a0);
    int32_t valA11 = SoundSys_Update3DPosition_6();
    QTask_RemoveEventCallback(g_54db48, valA11, sub_4eb930);
    int32_t valA12 = SoundSys_SetMasterVolume_6();
    QTask_RemoveEventCallback(g_54db48, valA12, sub_4eb9c0);
    int32_t valA13 = SoundSys_SetFrequency_6();
    int32_t v_8_10 = valA13;
    valA13 = g_54db48;
    return QTask_TriggerEvent(valA13, v_8_10, sub_4eb460);
}

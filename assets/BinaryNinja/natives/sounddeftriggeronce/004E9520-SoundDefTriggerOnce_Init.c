// Original IGI.EXE function: SoundDefTriggerOnce_Init (VA 0x004E9520; static CFG gate PASS, CFG score 1.000).
#include "SoundDefTriggerOnce_Init.h"
int32_t SoundDefTriggerOnce_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("SoundDefTriggerOnce", 0x138, QTask_OpenEvent_2(), 0x200);
    g_54da60 = data_1;
    g_54da62 = data_1;
    QTask_RemoveEventCallback(data_1, 0, SoundDefTriggerOnce_LoadParameters);
    QTask_TriggerEvent(g_54da60, 1, SoundDefTriggerOnce_Setup);
    QTask_TriggerEvent(g_54da60, 2, sub_4e9b60);
    int32_t data_3 = SoundSysMicrophone_Process();
    QTask_RemoveEventCallback(g_54da60, data_3, SoundDefTriggerOnce_Process);
    int32_t data_4 = SoundSys_SetMasterVolume_5();
    int32_t item_8_1 = data_4;
    data_4 = g_54da60;
    QTask_RemoveEventCallback(data_4, item_8_1, SoundDefTriggerOnce_Update);
    int32_t data_5 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54da60, data_5, sub_4e9d30);
    int32_t data_6 = SoundSys_LoadSoundDef_5();
    QTask_RemoveEventCallback(g_54da60, data_6, sub_4e9d90);
    int32_t data_7 = SoundSys_EvaluateTrigger_5();
    int32_t item_8_4 = data_7;
    data_7 = g_54da60;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_4eabb0);
    int32_t data_8 = SoundSys_AttachLipsync_5();
    QTask_RemoveEventCallback(g_54da60, data_8, sub_4eabd0);
    int32_t data_9 = SoundSys_InitSoundSys_6();
    QTask_RemoveEventCallback(g_54da60, data_9, sub_4e9db0);
    int32_t data_10 = SoundSys_PlaySoundSample_6();
    int32_t item_8_7 = data_10;
    data_10 = g_54da60;
    QTask_RemoveEventCallback(data_10, item_8_7, sub_4eac20);
    int32_t data_11 = SoundSys_Update3DPosition_6();
    QTask_RemoveEventCallback(g_54da60, data_11, SoundDefTriggerOnce_OnEvent);
    int32_t data_12 = SoundSys_SetMasterVolume_6();
    QTask_RemoveEventCallback(g_54da60, data_12, SoundDefTriggerOnce_Action);
    int32_t data_13 = SoundSys_SetFrequency_6();
    int32_t item_8_10 = data_13;
    data_13 = g_54da60;
    QTask_TriggerEvent(data_13, item_8_10, sub_4e9e70);
    int32_t data_14 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_54da60, data_14, 0);
    QTask_RemoveEventCallback(g_54da60, 9, 0);
    QTask_RemoveEventCallback(g_54da60, 8, 0);
    QTask_RemoveEventCallback(g_54da60, 0xa, 0);
    QTask_RemoveEventCallback(g_54da60, 0xb, 0);
    QTask_RemoveEventCallback(g_54da60, 0xc, 0);
    QTask_RemoveEventCallback(g_54da60, 4, 0);
    int32_t data_17 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_54da60, data_17, 0);
    int32_t data_18 = DynObj_UpdateDynTree_12();
    int32_t item_8_13 = data_18;
    data_18 = g_54da60;
    return QTask_RemoveEventCallback(data_18, item_8_13, 0);
}

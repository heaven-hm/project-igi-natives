// Original IGI.EXE function: SoundDefTriggerOnce_Init (VA 0x004E9520; static CFG gate PASS, CFG score 1.000).
#include "SoundDefTriggerOnce_Init.h"
int32_t SoundDefTriggerOnce_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("SoundDefTriggerOnce", 0x138, QTask_OpenEvent_2(), 0x200);
    g_54da60 = valA1;
    g_54da62 = valA1;
    QTask_RemoveEventCallback(valA1, 0, SoundDefTriggerOnce_LoadParameters);
    QTask_TriggerEvent(g_54da60, 1, SoundDefTriggerOnce_Setup);
    QTask_TriggerEvent(g_54da60, 2, sub_4e9b60);
    int32_t valA3 = SoundSysMicrophone_Process();
    QTask_RemoveEventCallback(g_54da60, valA3, SoundDefTriggerOnce_Process);
    int32_t valA4 = SoundSys_SetMasterVolume_5();
    int32_t v_8_1 = valA4;
    valA4 = g_54da60;
    QTask_RemoveEventCallback(valA4, v_8_1, SoundDefTriggerOnce_Update);
    int32_t valA5 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54da60, valA5, sub_4e9d30);
    int32_t valA6 = SoundSys_LoadSoundDef_5();
    QTask_RemoveEventCallback(g_54da60, valA6, sub_4e9d90);
    int32_t valA7 = SoundSys_EvaluateTrigger_5();
    int32_t v_8_4 = valA7;
    valA7 = g_54da60;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_4eabb0);
    int32_t valA8 = SoundSys_AttachLipsync_5();
    QTask_RemoveEventCallback(g_54da60, valA8, sub_4eabd0);
    int32_t valA9 = SoundSys_InitSoundSys_6();
    QTask_RemoveEventCallback(g_54da60, valA9, sub_4e9db0);
    int32_t valA10 = SoundSys_PlaySoundSample_6();
    int32_t v_8_7 = valA10;
    valA10 = g_54da60;
    QTask_RemoveEventCallback(valA10, v_8_7, sub_4eac20);
    int32_t valA11 = SoundSys_Update3DPosition_6();
    QTask_RemoveEventCallback(g_54da60, valA11, SoundDefTriggerOnce_OnEvent);
    int32_t valA12 = SoundSys_SetMasterVolume_6();
    QTask_RemoveEventCallback(g_54da60, valA12, SoundDefTriggerOnce_Action);
    int32_t valA13 = SoundSys_SetFrequency_6();
    int32_t v_8_10 = valA13;
    valA13 = g_54da60;
    QTask_TriggerEvent(valA13, v_8_10, sub_4e9e70);
    int32_t valA14 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_54da60, valA14, 0);
    QTask_RemoveEventCallback(g_54da60, 9, 0);
    QTask_RemoveEventCallback(g_54da60, 8, 0);
    QTask_RemoveEventCallback(g_54da60, 0xa, 0);
    QTask_RemoveEventCallback(g_54da60, 0xb, 0);
    QTask_RemoveEventCallback(g_54da60, 0xc, 0);
    QTask_RemoveEventCallback(g_54da60, 4, 0);
    int32_t valA17 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_54da60, valA17, 0);
    int32_t valA18 = DynObj_UpdateDynTree_12();
    int32_t v_8_13 = valA18;
    valA18 = g_54da60;
    return QTask_RemoveEventCallback(valA18, v_8_13, 0);
}

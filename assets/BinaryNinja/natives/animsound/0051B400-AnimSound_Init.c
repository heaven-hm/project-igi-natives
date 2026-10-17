// Original IGI.EXE function: AnimSound_Init (VA 0x0051B400; static CFG gate PASS, CFG score 1.000).
#include "AnimSound_Init.h"
void* AnimSound_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("AnimSound", 4, QTask_OpenEvent_2(), 0);
    g_a83764 = valA1;
    QTask_RemoveEventCallback(valA1, 0, AnimSound_LoadParameters);
    QTask_TriggerEvent(g_a83764, 2, AnimSound_LoadParameters);
    int32_t valA3 = SoundSys_LoadSoundDef_15();
    QTask_RemoveEventCallback(g_a83764, valA3, sub_51b4b0);
    int32_t valA4 = SoundSys_StopSoundSample_15();
    QTask_RemoveEventCallback(g_a83764, valA4, sub_51b4e0);
    int32_t valA5 = SoundSys_SetFrequency_15();
    int32_t v_8_2 = valA5;
    valA5 = g_a83764;
    QTask_RemoveEventCallback(valA5, v_8_2, AnimSound_Process);
    return TaskType_Set("TASKTYPE_ANIMSOUND", *g_a83764);
}

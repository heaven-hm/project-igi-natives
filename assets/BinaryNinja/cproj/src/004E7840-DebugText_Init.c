#include "gi_platform.h"
#include "004E7840-DebugText_Init.h"
int32_t* DebugText_Init()

{
    g_a5ebcc = 1;
    int32_t** valA = SoundSys_AttachLipsync_9(nullptr, 0x50, 0x3c);
    g_a5ebd0 = valA;
    SoundSys_EvaluateTrigger_10(valA, 1);
    g_a5ea74 = 0;
    g_a5ea75 = 0;
    g_a5ebd4 = 0;
    g_a5ea70 = 0;
    Display_SetDisplayMode_3(sub_4e7900);
    int32_t v_8 = 0;
    int16_t valA2 = TaskType_Register("DebugText", 0x20, QTask_OpenEvent_2(), 0);
    g_a5ea76 = valA2;
    QTask_RemoveEventCallback(valA2, 0, sub_4e7950);
    QTask_TriggerEvent(g_a5ea76, 2, sub_4e7a60);
    int32_t valA4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_a5ea76, valA4, sub_4e7960);
    return Sys_DispatchOpcode_16("LOCAL:debug.fnt", 0x507c, "ILFF|P");
}

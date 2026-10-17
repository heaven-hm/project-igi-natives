// Original IGI.EXE function: DebugText_Init (VA 0x004E7840; static CFG gate PASS, CFG score 1.000).
#include "DebugText_Init.h"
int32_t* DebugText_Init()

{
    g_a5ebcc = 1;
    int32_t** data_val = SoundSys_AttachLipsync_9(nullptr, 0x50, 0x3c);
    g_a5ebd0 = data_val;
    SoundSys_EvaluateTrigger_10(data_val, 1);
    g_a5ea74 = 0;
    g_a5ea75 = 0;
    g_a5ebd4 = 0;
    g_a5ea70 = 0;
    Display_SetDisplayMode_3(sub_4e7900);
    int32_t item_8 = 0;
    int16_t data_2 = TaskType_Register("DebugText", 0x20, QTask_OpenEvent_2(), 0);
    g_a5ea76 = data_2;
    QTask_RemoveEventCallback(data_2, 0, sub_4e7950);
    QTask_TriggerEvent(g_a5ea76, 2, sub_4e7a60);
    int32_t data_4 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_a5ea76, data_4, sub_4e7960);
    return Sys_DispatchOpcode_16("LOCAL:debug.fnt", 0x507c, "ILFF|P");
}

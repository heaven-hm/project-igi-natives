// Original IGI.EXE function: StatusScreen_Init (VA 0x00486900; static CFG gate PASS, CFG score 0.967).
#include "StatusScreen_Init.h"
int32_t StatusScreen_Init()

{
    int32_t item_c = 0;
    g_5c8a74 = TaskType_Register("StatusScreen", 0x4f0, QTask_OpenEvent_2(), 0);
    g_540b5c = QTask_UnableToAllocateEvent(0x181);
    QTask_RemoveEventCallback(g_5c8a74, 0, StatusScreen_OnLoad);
    QTask_TriggerEvent(g_5c8a74, 1, StatusScreen_OnEvent1);
    QTask_TriggerEvent(g_5c8a74, 2, StatusScreen_OnEvent2);
    int32_t data_3 = StatusScreen_GetEvent();
    int32_t item_10 = data_3;
    data_3 = g_5c8a74;
    QTask_TriggerEvent(data_3, item_10, StatusScreen_OnEvent3);
    int32_t result = Script_RegisterNamespace("STATUSSCREEN:", "LOCAL:screens/game/status/");
    memcpy(&g_5c8a4c, &g_540b70, 0x28);
    return result;
}

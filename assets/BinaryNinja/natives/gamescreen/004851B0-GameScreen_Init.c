// Original IGI.EXE function: GameScreen_Init (VA 0x004851B0; static CFG gate PASS, CFG score 1.000).
#include "GameScreen_Init.h"
int32_t GameScreen_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("GameScreen", 0x28, QTask_OpenEvent_2(), 0);
    g_5c8a28 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_485220);
    QTask_TriggerEvent(g_5c8a28, 1, sub_488700);
    QTask_TriggerEvent(g_5c8a28, 2, AIGraph_LoadParameters);
    int32_t data_3 = StatusScreen_GetEvent();
    return QTask_TriggerEvent(g_5c8a28, data_3, sub_424280);
}

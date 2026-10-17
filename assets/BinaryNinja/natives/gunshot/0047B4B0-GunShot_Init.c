// Original IGI.EXE function: GunShot_Init (VA 0x0047B4B0; static CFG gate PASS, CFG score 1.000).
#include "GunShot_Init.h"
void* GunShot_Init()

{
    int32_t item_4 = 0;
    g_5be3ce = TaskType_Register("GunShot", 0xc38, QTask_OpenEvent_2(), 0);
    g_5be3cc = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_5be3ce, 0, GunShot_LoadParameters);
    QTask_TriggerEvent(g_5be3ce, 1, GunShot_Setup);
    QTask_TriggerEvent(g_5be3ce, 2, GunShot_Process);
    QTask_RemoveEventCallback(g_5be3ce, 4, GunShot_Update);
    int32_t data_4 = HumanPlayer_UpdateHealth_10();
    QTask_RemoveEventCallback(g_5be3ce, data_4, GunShot_Unpack);
    int32_t temp_1 = 0;
    temp_1 = g_5be3ce;
    return TaskType_Set("TASKTYPE_GUNSHOT", temp_1);
}

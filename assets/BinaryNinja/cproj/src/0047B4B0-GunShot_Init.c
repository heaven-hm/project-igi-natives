#include "gi_platform.h"
#include "0047B4B0-GunShot_Init.h"
void GunShot_Init(void)

{
    int32_t v_4 = 0;
    g_5be3ce = TaskType_Register("GunShot", 0xc38, QTask_OpenEvent_2(), 0);
    g_5be3cc = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_5be3ce, 0, GunShot_LoadParameters);
    QTask_TriggerEvent(g_5be3ce, 1, GunShot_Setup);
    QTask_TriggerEvent(g_5be3ce, 2, GunShot_Process);
    QTask_RemoveEventCallback(g_5be3ce, 4, GunShot_Update);
    int32_t valA4 = HumanPlayer_UpdateHealth_10();
    QTask_RemoveEventCallback(g_5be3ce, valA4, GunShot_Unpack);
    int32_t tmpD1 = 0;
    tmpD1 = g_5be3ce;
    TaskType_Set("TASKTYPE_GUNSHOT", tmpD1);
    return;
}

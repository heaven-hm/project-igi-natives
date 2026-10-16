#include "0046F2B0-AIStationaryGun_Init.h"
/* 0x0046f2b0 AIStationaryGun_Init full linked: callers=1 callees=14 */
void* sub_46f2b0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("AIStationaryGun", 0x1e8, MagicObj_GetTypeId(), 0);
    g_53fec0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_46eae0);
    QTask_TriggerEvent(g_53fec0, 1, sub_46f390);
    QTask_TriggerEvent(g_53fec0, 2, sub_426860);
    int32_t eax_3 = sub_4c56d0();
    QTask_RemoveEventCallback(g_53fec0, eax_3, sub_46fa50);
    int32_t eax_4 = sub_4c56e0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_53fec0;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_46fb50);
    int32_t eax_5 = sub_489610();
    QTask_RemoveEventCallback(g_53fec0, eax_5, sub_46fb60);
    int32_t eax_6 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53fec0, eax_6, sub_46fba0);
    return TaskType_Set("TASKTYPE_AISTATIONARYGUN", *g_53fec0);
}

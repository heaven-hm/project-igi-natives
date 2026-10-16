#include "004272A0-HeliDoor_Init.h"
/* 0x004272a0 HeliDoor_Init full linked: callers=1 callees=18 */
void* HeliDoor_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("HeliDoor", 0x148, MagicObj_GetTypeId(), 0);
    g_53bb18 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, CarDoor_LoadParameters);
    QTask_TriggerEvent(g_53bb18, 1, sub_4273b0);
    QTask_TriggerEvent(g_53bb18, 2, sub_426860);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb18, eax_3, HeliDoor_Setup);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_8_1 = eax_4;
    eax_4 = g_53bb18;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_42d9b0);
    int32_t eax_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb18, eax_5, 0);
    int32_t eax_6 = sub_4c56d0();
    QTask_RemoveEventCallback(g_53bb18, eax_6, sub_4277c0);
    int32_t eax_7 = sub_4c56e0();
    int32_t var_8_4 = eax_7;
    eax_7 = g_53bb18;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_51baa0);
    int32_t eax_8 = sub_489610();
    QTask_RemoveEventCallback(g_53bb18, eax_8, sub_426d30);
    return TaskType_Set("TASKTYPE_HELIDOOR", *g_53bb18);
}

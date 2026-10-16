#include "00426630-CarDoor_Init.h"
/* 0x00426630 CarDoor_Init full linked: callers=1 callees=18 */
void* CarDoor_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("CarDoor", 0x148, MagicObj_GetTypeId(), 0);
    g_53babc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, CarDoor_LoadParameters);
    QTask_TriggerEvent(g_53babc, 1, sub_4273b0);
    QTask_TriggerEvent(g_53babc, 2, sub_426860);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53babc, eax_3, CarDoor_Setup);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_8_1 = eax_4;
    eax_4 = g_53babc;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_42d9b0);
    int32_t eax_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53babc, eax_5, 0);
    int32_t eax_6 = sub_4c56d0();
    QTask_RemoveEventCallback(g_53babc, eax_6, sub_426cd0);
    int32_t eax_7 = sub_4c56e0();
    int32_t var_8_4 = eax_7;
    eax_7 = g_53babc;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_51baa0);
    int32_t eax_8 = sub_489610();
    QTask_RemoveEventCallback(g_53babc, eax_8, sub_426d30);
    return TaskType_Set("TASKTYPE_CARDOOR", *g_53babc);
}

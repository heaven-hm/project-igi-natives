#include "00465BC0-DeathZone_Init.h"
/* 0x00465bc0 DeathZone_Init full linked: callers=1 callees=18 */
int32_t sub_465bc0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("DeathZone", 0x138, MagicObj_GetTypeId(), 0);
    g_53f4fc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_465cd0);
    QTask_TriggerEvent(g_53f4fc, 1, sub_465de0);
    QTask_TriggerEvent(g_53f4fc, 2, sub_426860);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53f4fc, eax_3, sub_465f50);
    int32_t eax_4 = Level_LoadLevel_3();
    int32_t var_8_1 = eax_4;
    eax_4 = g_53f4fc;
    QTask_RemoveEventCallback(eax_4, var_8_1, 0);
    int32_t eax_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53f4fc, eax_5, 0);
    int32_t eax_6 = sub_4d14d0();
    QTask_RemoveEventCallback(g_53f4fc, eax_6, 0);
    QTask_RemoveEventCallback(g_53f4fc, 9, 0);
    int32_t eax_8 = sub_489610();
    QTask_RemoveEventCallback(g_53f4fc, eax_8, sub_45f920);
    TaskType_Set("TASKTYPE_DEATHZONE", *g_53f4fc);
    char result = QTask_UnableToAllocateEven(0);
    g_53f4fe = result;
    return result;
}

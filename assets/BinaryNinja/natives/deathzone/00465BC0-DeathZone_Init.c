#include "DeathZone_Init.h"
int32_t DeathZone_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("DeathZone", 0x138, MagicObj_GetTypeId(), 0);
    g_53f4fc = valA1;
    QTask_RemoveEventCallback(valA1, 0, DeathZone_LoadParameters);
    QTask_TriggerEvent(g_53f4fc, 1, DeathZone_Setup);
    QTask_TriggerEvent(g_53f4fc, 2, sub_426860);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53f4fc, valA3, DeathZone_Process);
    int32_t valA4 = Level_LoadLevel_3();
    int32_t v_8_1 = valA4;
    valA4 = g_53f4fc;
    QTask_RemoveEventCallback(valA4, v_8_1, 0);
    int32_t valA5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53f4fc, valA5, 0);
    int32_t valA6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_53f4fc, valA6, 0);
    QTask_RemoveEventCallback(g_53f4fc, 9, 0);
    int32_t valA8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53f4fc, valA8, sub_45f920);
    TaskType_Set("TASKTYPE_DEATHZONE", *g_53f4fc);
    char result = QTask_UnableToAllocateEvent(0);
    g_53f4fe = result;
    return result;
}

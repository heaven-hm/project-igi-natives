// Original IGI.EXE function: DeathZone_Init (VA 0x00465BC0; static CFG gate PASS, CFG score 1.000).
#include "DeathZone_Init.h"
int32_t DeathZone_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("DeathZone", 0x138, MagicObj_GetTypeId(), 0);
    g_53f4fc = data_1;
    QTask_RemoveEventCallback(data_1, 0, DeathZone_LoadParameters);
    QTask_TriggerEvent(g_53f4fc, 1, DeathZone_Setup);
    QTask_TriggerEvent(g_53f4fc, 2, sub_426860);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53f4fc, data_3, DeathZone_Process);
    int32_t data_4 = Level_LoadLevel_3();
    int32_t item_8_1 = data_4;
    data_4 = g_53f4fc;
    QTask_RemoveEventCallback(data_4, item_8_1, 0);
    int32_t data_5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53f4fc, data_5, 0);
    int32_t data_6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_53f4fc, data_6, 0);
    QTask_RemoveEventCallback(g_53f4fc, 9, 0);
    int32_t data_8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53f4fc, data_8, sub_45f920);
    TaskType_Set("TASKTYPE_DEATHZONE", *g_53f4fc);
    char result = QTask_UnableToAllocateEvent(0);
    g_53f4fe = result;
    return result;
}

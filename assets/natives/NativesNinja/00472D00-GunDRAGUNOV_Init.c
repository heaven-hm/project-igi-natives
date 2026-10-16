#include "00472D00-GunDRAGUNOV_Init.h"
/* 0x00472d00 GunDRAGUNOV_Init full linked: callers=1 callees=18 */
char* sub_472d00()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("GunDRAGUNOV", 0x1b8, sub_477bf0(), 0);
    g_5be358 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_472e10);
    QTask_TriggerEvent(g_5be358, 2, sub_4754a0);
    int32_t eax_3 = sub_460bf0();
    QTask_RemoveEventCallback(g_5be358, eax_3, sub_472e50);
    int32_t eax_4 = sub_487190();
    QTask_RemoveEventCallback(g_5be358, eax_4, sub_473040);
    int32_t eax_5 = HumanPlayer_ApplyPhysics_10();
    int32_t var_8_2 = eax_5;
    eax_5 = g_5be358;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_4732f0);
    int32_t eax_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be358, eax_6, sub_427d70);
    int32_t eax_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be358, eax_7, sub_473330);
    TaskType_Set("TASKTYPE_GUNDRAGUNOV", *g_5be358);
    g_5be360 = Level_LoadObjects_6("snipersight.spr");
    g_5be364 = Level_LoadObjects_6("snipersight_x.spr");
    char* result = Level_LoadObjects_6("snipersight_y.spr");
    g_5be35c = result;
    return result;
}

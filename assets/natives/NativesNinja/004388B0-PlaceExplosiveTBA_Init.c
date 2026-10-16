#include "004388B0-PlaceExplosiveTBA_Init.h"
/* 0x004388b0 PlaceExplosiveTBA_Init full linked: callers=1 callees=15 */
int32_t* PlaceExplosiveTBA_Init()

{
    int32_t var_2b4 = 0;
    int16_t eax_1 = TaskType_Register("PlaceExplosiveTBA", 0x2b0, sub_448550(), 0);
    g_53c1dc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4389a0);
    int32_t eax_2 = sub_4f1a60();
    int32_t var_2b8 = eax_2;
    eax_2 = g_53c1dc;
    QTask_RemoveEventCallback(eax_2, var_2b8, sub_438c00);
    int32_t eax_3 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_53c1dc, eax_3, PlaceExplosiveTBA_LoadParameters);
    int32_t eax_4 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c1dc, eax_4, sub_438bf0);
    g_57be8c = sub_4f1980(sub_448560(), 2);
    int32_t eax_7 = sub_4f0f50();
    void var_2b0;
    void var_8;
    sub_4f1a80(g_57be8c, &var_2b0, &var_8, eax_7, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void var_4;
    return sub_4f1a80(g_57be8c, &var_2b0, &var_4, eax_8, 7, 0);
}

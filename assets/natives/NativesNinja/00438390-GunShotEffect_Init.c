#include "00438390-GunShotEffect_Init.h"
/* 0x00438390 GunShotEffect_Init full linked: callers=1 callees=11 */
char* GunShotEffect_Init()

{
    int32_t var_4 = 0;
    g_57be78 = TaskType_Register("GunShotEffect", 0x20, QTask_OpenEvent_2(), 0);
    int32_t eax_2 = HumanPlayer_UpdateStamina();
    int32_t var_8 = eax_2;
    eax_2 = g_57be78;
    QTask_RemoveEventCallback(eax_2, var_8, GunShotEffect_LoadParameters);
    int32_t eax_3 = HumanPlayer_CheckGround();
    QTask_RemoveEventCallback(g_57be78, eax_3, sub_4387b0);
    int32_t eax_4 = HumanPlayer_UpdateMotion();
    QTask_RemoveEventCallback(g_57be78, eax_4, sub_46fb50);
    TaskType_Set("TASKTYPE_GUNSHOTEFFECT", *g_57be78);
    g_57be7c = Level_LoadObjects_6("concrete1.spr");
    char* result = Level_LoadObjects_6("concrete2.spr");
    g_57be80 = result;
    return result;
}

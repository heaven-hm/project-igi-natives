// Original IGI.EXE function: GunShotEffect_Init (VA 0x00438390; static CFG gate PASS, CFG score 1.000).
#include "GunShotEffect_Init.h"
char* GunShotEffect_Init()

{
    int32_t v_4 = 0;
    g_57be78 = TaskType_Register("GunShotEffect", 0x20, QTask_OpenEvent_2(), 0);
    int32_t valA2 = HumanPlayer_UpdateStamina();
    int32_t v_8 = valA2;
    valA2 = g_57be78;
    QTask_RemoveEventCallback(valA2, v_8, GunShotEffect_LoadParameters);
    int32_t valA3 = HumanPlayer_CheckGround();
    QTask_RemoveEventCallback(g_57be78, valA3, sub_4387b0);
    int32_t valA4 = HumanPlayer_UpdateMotion();
    QTask_RemoveEventCallback(g_57be78, valA4, sub_46fb50);
    TaskType_Set("TASKTYPE_GUNSHOTEFFECT", *g_57be78);
    g_57be7c = Level_LoadObjects_6("concrete1.spr");
    char* result = Level_LoadObjects_6("concrete2.spr");
    g_57be80 = result;
    return result;
}

// Original IGI.EXE function: BoneMagicObj_Init (VA 0x005317D0; static CFG gate PASS, CFG score 1.000).
#include "BoneMagicObj_Init.h"
void* BoneMagicObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("BoneMagicObj", 0x130, Render_DrawRigidMesh_12(), 0);
    g_54f848 = valA1;
    QTask_RemoveEventCallback(valA1, 4, 0);
    int32_t valA2 = DynObj_FindSymbol_6();
    int32_t v_8 = valA2;
    valA2 = g_54f848;
    QTask_RemoveEventCallback(valA2, v_8, sub_5316f0);
    QTask_TriggerEvent(g_54f848, 1, BoneMagicObj_LoadParameters);
    QTask_RemoveEventCallback(g_54f848, 0, BoneMagicObj_Setup);
    int32_t valA3 = MagicObj_GetEventId();
    int32_t v_8_1 = valA3;
    valA3 = g_54f848;
    QTask_RemoveEventCallback(valA3, v_8_1, BoneMagicObj_Process);
    QTask_RemoveEventCallback(g_54f848, 0xc, sub_531ca0);
    int32_t valA4 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_54f848, valA4, BoneMagicObj_Update);
    int32_t valA5 = DynObj_RegisterSymbol_6();
    int32_t v_8_3 = valA5;
    valA5 = g_54f848;
    QTask_RemoveEventCallback(valA5, v_8_3, sub_427f80);
    QTask_TriggerEvent(g_54f848, 2, BoneMagicObj_OnEvent);
    return TaskType_Set("TASKTYPE_BONEMAGICOBJ", *g_54f848);
}

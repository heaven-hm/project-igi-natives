#include "0042D2B0-Rotor_Init.h"
/* 0x0042d2b0 Rotor_Init full linked: callers=1 callees=27 */
void* Rotor_Init()

{
    int32_t var_4 = 0;
    g_57bd10 = TaskType_Register("Rotor", 0x140, MagicObj_GetTypeId(), 0);
    int32_t eax_2 = sub_4978d0("RotorPrimitive");
    g_57bd14 = eax_2;
    sub_4978f0(eax_2, Rotor_LoadParameters);
    QTask_RemoveEventCallback(g_57bd10, 0, Rotor_Setup);
    QTask_TriggerEvent(g_57bd10, 1, Rotor_Tick);
    QTask_TriggerEvent(g_57bd10, 2, sub_51b940);
    int32_t eax_4 = MagicObj_GetEventId();
    int32_t var_8 = eax_4;
    eax_4 = g_57bd10;
    QTask_RemoveEventCallback(eax_4, var_8, Rotor_Update);
    int32_t eax_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bd10, eax_5, sub_42d9b0);
    int32_t eax_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bd10, eax_6, 0);
    int32_t eax_7 = sub_4ee0e0();
    int32_t var_8_3 = eax_7;
    eax_7 = g_57bd10;
    QTask_RemoveEventCallback(eax_7, var_8_3, sub_42d9f0);
    int32_t eax_8 = sub_4ee0f0();
    QTask_RemoveEventCallback(g_57bd10, eax_8, sub_42da60);
    QTask_RemoveEventCallback(g_57bd10, 4, Rotor_OnEvent);
    int32_t eax_9 = sub_4e7530();
    int32_t var_8_5 = eax_9;
    eax_9 = g_57bd10;
    QTask_TriggerEvent(eax_9, var_8_5, 0);
    int32_t eax_10 = sub_4c56f0();
    QTask_RemoveEventCallback(g_57bd10, eax_10, 0);
    int32_t eax_11 = sub_4ee100();
    QTask_RemoveEventCallback(g_57bd10, eax_11, PhysicsObj_Setup);
    int32_t eax_12 = sub_47e6f0();
    int32_t var_8_8 = eax_12;
    eax_12 = g_57bd10;
    QTask_RemoveEventCallback(eax_12, var_8_8, 0);
    return TaskType_Set("TASKTYPE_ROTOR", *g_57bd10);
}

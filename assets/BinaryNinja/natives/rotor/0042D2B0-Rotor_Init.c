// Original IGI.EXE function: Rotor_Init (VA 0x0042D2B0; static CFG gate PASS, CFG score 1.000).
#include "Rotor_Init.h"
void* Rotor_Init()

{
    int32_t v_4 = 0;
    g_57bd10 = TaskType_Register("Rotor", 0x140, MagicObj_GetTypeId(), 0);
    int32_t valA2 = Display_RestoreDevice_14("RotorPrimitive");
    g_57bd14 = valA2;
    Display_SetGammaRamp_14(valA2, Rotor_LoadParameters);
    QTask_RemoveEventCallback(g_57bd10, 0, Rotor_Setup);
    QTask_TriggerEvent(g_57bd10, 1, Rotor_Tick);
    QTask_TriggerEvent(g_57bd10, 2, sub_51b940);
    int32_t valA4 = MagicObj_GetEventId();
    int32_t v_8 = valA4;
    valA4 = g_57bd10;
    QTask_RemoveEventCallback(valA4, v_8, Rotor_Update);
    int32_t valA5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bd10, valA5, sub_42d9b0);
    int32_t valA6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bd10, valA6, 0);
    int32_t valA7 = SoundSys_Update3DPosition_18();
    int32_t v_8_3 = valA7;
    valA7 = g_57bd10;
    QTask_RemoveEventCallback(valA7, v_8_3, sub_42d9f0);
    int32_t valA8 = SoundSys_SetMasterVolume_18();
    QTask_RemoveEventCallback(g_57bd10, valA8, sub_42da60);
    QTask_RemoveEventCallback(g_57bd10, 4, Rotor_OnEvent);
    int32_t valA9 = StatusScreen_GetEvent();
    int32_t v_8_5 = valA9;
    valA9 = g_57bd10;
    QTask_TriggerEvent(valA9, v_8_5, 0);
    int32_t valA10 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_57bd10, valA10, 0);
    int32_t valA11 = SoundSys_SetFrequency_18();
    QTask_RemoveEventCallback(g_57bd10, valA11, PhysicsObj_Setup);
    int32_t valA12 = Weapon_CheckAmmo_8();
    int32_t v_8_8 = valA12;
    valA12 = g_57bd10;
    QTask_RemoveEventCallback(valA12, v_8_8, 0);
    return TaskType_Set("TASKTYPE_ROTOR", *g_57bd10);
}

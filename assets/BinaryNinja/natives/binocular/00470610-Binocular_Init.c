#include "Binocular_Init.h"
void* Binocular_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Binocular", 0x1c8, Weapon_ComputeAccuracy_5(), 0);
    g_5be33c = valA1;
    QTask_RemoveEventCallback(valA1, 0, Binocular_LoadParameters);
    QTask_TriggerEvent(g_5be33c, 2, Binocular_Setup);
    int32_t valA3 = Script_ParseEnumString_11();
    QTask_RemoveEventCallback(g_5be33c, valA3, Binocular_Process_2);
    int32_t valA4 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be33c, valA4, Binocular_Update);
    int32_t valA5 = AI_SelectTarget_17();
    int32_t v_8_2 = valA5;
    valA5 = g_5be33c;
    QTask_RemoveEventCallback(valA5, v_8_2, AIGraph_LoadParameters);
    int32_t valA6 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5be33c, valA6, Binocular_Action);
    int32_t valA7 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be33c, valA7, sub_470c80);
    int32_t valA8 = HumanPlayer_ApplyPhysics_10();
    int32_t v_8_5 = valA8;
    valA8 = g_5be33c;
    QTask_RemoveEventCallback(valA8, v_8_5, Binocular_Cleanup_2);
    int32_t valA9 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be33c, valA9, sub_51baa0);
    int32_t valA10 = Script_SpawnNewTask_12();
    QTask_TriggerEvent(g_5be33c, valA10, Binocular_Cleanup);
    int32_t valA11 = AIConfig_LoadSettings();
    int32_t v_8_8 = valA11;
    valA11 = g_5be33c;
    QTask_RemoveEventCallback(valA11, v_8_8, Binocular_Cleanup_3);
    return TaskType_Set("TASKTYPE_BINOCULAR", *g_5be33c);
}

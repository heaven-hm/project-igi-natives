// IGI native provenance: Binocular_Init - 0x00470610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470610-Binocular_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Binocular_Init.h"
void* Binocular_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Binocular", 0x1c8, Weapon_ComputeAccuracy_5(), 0);
    g_5be33c = data_1;
    QTask_RemoveEventCallback(data_1, 0, Binocular_LoadParameters);
    QTask_TriggerEvent(g_5be33c, 2, Binocular_Setup);
    int32_t data_3 = Script_ParseEnumString_11();
    QTask_RemoveEventCallback(g_5be33c, data_3, Binocular_Process_2);
    int32_t data_4 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be33c, data_4, Binocular_Update);
    int32_t data_5 = AI_SelectTarget_17();
    int32_t item_8_2 = data_5;
    data_5 = g_5be33c;
    QTask_RemoveEventCallback(data_5, item_8_2, AIGraph_LoadParameters);
    int32_t data_6 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5be33c, data_6, Binocular_Action);
    int32_t data_7 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be33c, data_7, sub_470c80);
    int32_t data_8 = HumanPlayer_ApplyPhysics_10();
    int32_t item_8_5 = data_8;
    data_8 = g_5be33c;
    QTask_RemoveEventCallback(data_8, item_8_5, Binocular_Cleanup_2);
    int32_t data_9 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be33c, data_9, sub_51baa0);
    int32_t data_10 = Script_SpawnNewTask_12();
    QTask_TriggerEvent(g_5be33c, data_10, Binocular_Cleanup);
    int32_t data_11 = AIConfig_LoadSettings();
    int32_t item_8_8 = data_11;
    data_11 = g_5be33c;
    QTask_RemoveEventCallback(data_11, item_8_8, Binocular_Cleanup_3);
    return TaskType_Set("TASKTYPE_BINOCULAR", *g_5be33c);
}

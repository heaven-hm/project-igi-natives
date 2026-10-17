// Original IGI.EXE function: Grenade_Init (VA 0x00476730; static CFG gate PASS, CFG score 1.000).
#include "Grenade_Init.h"
void* Grenade_Init()

{
    int32_t v_4 = 0;
    g_54066c = TaskType_Register("Grenade", 0x738, Script_SpawnNewTask_28(), 0);
    g_5be3b8 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_54066c, 0, Grenade_LoadParameters);
    QTask_TriggerEvent(g_54066c, 1, Grenade_Setup);
    QTask_TriggerEvent(g_54066c, 2, Grenade_Process);
    int32_t valA3 = Level_LoadLevel_3();
    int32_t v_8 = valA3;
    valA3 = g_54066c;
    QTask_RemoveEventCallback(valA3, v_8, sub_476ea0);
    int32_t valA4 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_54066c, valA4, Grenade_Update);
    int32_t valA5 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_54066c, valA5, sub_45f920);
    int32_t valA6 = Level_CheckQTaskID_3();
    int32_t v_8_3 = valA6;
    valA6 = g_54066c;
    QTask_RemoveEventCallback(valA6, v_8_3, sub_45f920);
    int32_t valA7 = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(g_54066c, valA7, sub_476f70);
    int32_t valA8 = SoundSys_SetMasterVolume_18();
    QTask_RemoveEventCallback(g_54066c, valA8, sub_427f80);
    int32_t valA9 = HumanPlayer_UpdateHealth_10();
    int32_t v_8_6 = valA9;
    valA9 = g_54066c;
    QTask_RemoveEventCallback(valA9, v_8_6, Grenade_OnEvent);
    int32_t valA10 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_54066c, valA10, Grenade_Action);
    TaskType_Set("TASKTYPE_GRENADE", *g_54066c);
    TaskType_Set("GRENADE_EXPLOSIONTYPE_NORMAL", 0);
    return TaskType_Set("GRENADE_EXPLOSIONTYPE_FLASHBANG", 1);
}

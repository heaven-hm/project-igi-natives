#include "00476730-Grenade_Init.h"
/* 0x00476730 Grenade_Init full linked: callers=1 callees=25 */
void* sub_476730()

{
    int32_t var_4 = 0;
    g_54066c = TaskType_Register("Grenade", 0x738, sub_4fb5e0(), 0);
    g_5be3b8 = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_54066c, 0, sub_4769b0);
    QTask_TriggerEvent(g_54066c, 1, sub_476ac0);
    QTask_TriggerEvent(g_54066c, 2, sub_476e50);
    int32_t eax_3 = Level_LoadLevel_3();
    int32_t var_8 = eax_3;
    eax_3 = g_54066c;
    QTask_RemoveEventCallback(eax_3, var_8, sub_476ea0);
    int32_t eax_4 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_54066c, eax_4, sub_476eb0);
    int32_t eax_5 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_54066c, eax_5, sub_45f920);
    int32_t eax_6 = Level_CheckQTaskID_3();
    int32_t var_8_3 = eax_6;
    eax_6 = g_54066c;
    QTask_RemoveEventCallback(eax_6, var_8_3, sub_45f920);
    int32_t eax_7 = sub_4ee0e0();
    QTask_RemoveEventCallback(g_54066c, eax_7, sub_476f70);
    int32_t eax_8 = sub_4ee0f0();
    QTask_RemoveEventCallback(g_54066c, eax_8, sub_427f80);
    int32_t eax_9 = HumanPlayer_UpdateHealth_10();
    int32_t var_8_6 = eax_9;
    eax_9 = g_54066c;
    QTask_RemoveEventCallback(eax_9, var_8_6, sub_476fa0);
    int32_t eax_10 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_54066c, eax_10, sub_4768a0);
    TaskType_Set("TASKTYPE_GRENADE", *g_54066c);
    TaskType_Set("GRENADE_EXPLOSIONTYPE_NORMAL", 0);
    return TaskType_Set("GRENADE_EXPLOSIONTYPE_FLASHBANG", 1);
}

#include "00456AD0-HumanSoldierRPG_Init.h"
/* 0x00456ad0 HumanSoldierRPG_Init full linked: callers=1 callees=26 */
int32_t* sub_456ad0()

{
    int32_t var_d44 = 0;
    int16_t eax_1 = TaskType_Register("HumanSoldierRPG", 0xd40, sub_460be0(), 0);
    g_5bda94 = eax_1;
    QTask_RegisterEventCallback_3(eax_1, 1);
    QTask_RemoveEventCallback(g_5bda94, 0, sub_456c70);
    QTask_TriggerEvent(g_5bda94, 1, sub_454ee0);
    QTask_TriggerEvent(g_5bda94, 2, sub_459ec0);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_d48 = eax_3;
    eax_3 = g_5bda94;
    QTask_RemoveEventCallback(eax_3, var_d48, sub_456e40);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5bda94, eax_4, sub_456e50);
    int32_t eax_5 = sub_4f40d0();
    QTask_RemoveEventCallback(g_5bda94, eax_5, sub_456fb0);
    int32_t eax_6 = Level_LoadLevel_3();
    int32_t var_d48_3 = eax_6;
    eax_6 = g_5bda94;
    QTask_RemoveEventCallback(eax_6, var_d48_3, sub_4572d0);
    int32_t eax_7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bda94, eax_7, sub_457430);
    int32_t eax_8 = sub_460c40();
    QTask_RemoveEventCallback(g_5bda94, eax_8, sub_457620);
    int32_t eax_9 = sub_47e990();
    int32_t var_d48_6 = eax_9;
    eax_9 = g_5bda94;
    QTask_RemoveEventCallback(eax_9, var_d48_6, sub_4d3710);
    g_5bda98 = sub_4f1980(sub_460c50(), 2);
    int32_t eax_12 = sub_4f0fa0();
    void var_d40;
    void var_48;
    sub_4f1a80(g_5bda98, &var_d40, &var_48, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fa0();
    void var_44;
    int32_t* result = sub_4f1a80(g_5bda98, &var_d40, &var_44, eax_14, 7, 0);
    g_5bdaa0 = 0;
    return result;
}

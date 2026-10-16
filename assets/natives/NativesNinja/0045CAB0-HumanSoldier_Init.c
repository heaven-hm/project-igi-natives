#include "0045CAB0-HumanSoldier_Init.h"
/* 0x0045cab0 HumanSoldier_Init full linked: callers=1 callees=26 */
int32_t* sub_45cab0()

{
    int32_t var_d54 = 0;
    int16_t eax_1 = TaskType_Register("HumanSoldier", 0xd50, sub_460be0(), 0);
    g_5bdabc = eax_1;
    QTask_RegisterEventCallback_3(eax_1, 1);
    QTask_RemoveEventCallback(g_5bdabc, 0, sub_45cc50);
    QTask_TriggerEvent(g_5bdabc, 1, sub_45cf90);
    QTask_TriggerEvent(g_5bdabc, 2, sub_459ec0);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_d58 = eax_3;
    eax_3 = g_5bdabc;
    QTask_RemoveEventCallback(eax_3, var_d58, sub_45d030);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5bdabc, eax_4, sub_456e50);
    int32_t eax_5 = sub_4f40d0();
    QTask_RemoveEventCallback(g_5bdabc, eax_5, sub_45d040);
    int32_t eax_6 = Level_LoadLevel_3();
    int32_t var_d58_3 = eax_6;
    eax_6 = g_5bdabc;
    QTask_RemoveEventCallback(eax_6, var_d58_3, sub_45d3c0);
    int32_t eax_7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bdabc, eax_7, sub_45a3d0);
    int32_t eax_8 = sub_460c40();
    QTask_RemoveEventCallback(g_5bdabc, eax_8, sub_45a5e0);
    int32_t eax_9 = sub_47e990();
    int32_t var_d58_6 = eax_9;
    eax_9 = g_5bdabc;
    QTask_RemoveEventCallback(eax_9, var_d58_6, sub_4d3710);
    g_5bdab4 = sub_4f1980(sub_460c50(), 2);
    int32_t eax_12 = sub_4f0fa0();
    void var_d50;
    void var_58;
    sub_4f1a80(g_5bdab4, &var_d50, &var_58, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fa0();
    void var_54;
    int32_t* result = sub_4f1a80(g_5bdab4, &var_d50, &var_54, eax_14, 7, 0);
    g_5bdac0 = 0;
    return result;
}

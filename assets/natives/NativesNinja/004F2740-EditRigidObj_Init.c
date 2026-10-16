#include "004F2740-EditRigidObj_Init.h"
/* 0x004f2740 EditRigidObj_Init full linked: callers=1 callees=30 */
void* sub_4f2740()

{
    int32_t var_1a4 = 0;
    int16_t eax_1 = TaskType_Register("EditRigidObj", 0x1a0, sub_4e0830(), 0);
    g_54e1ac = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4f2930);
    QTask_TriggerEvent(g_54e1ac, 1, sub_4f2ac0);
    QTask_TriggerEvent(g_54e1ac, 2, sub_4f2b50);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54e1ac, eax_3, sub_4f2b80);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_1a8_1 = eax_4;
    eax_4 = g_54e1ac;
    QTask_RemoveEventCallback(eax_4, var_1a8_1, sub_4f2b90);
    int32_t eax_5 = sub_4c5800();
    QTask_RemoveEventCallback(g_54e1ac, eax_5, sub_4f2400);
    QTask_RemoveEventCallback(g_54e1ac, 6, sub_4d3710);
    int32_t eax_6 = sub_4cea20();
    int32_t var_1a8_3 = eax_6;
    eax_6 = g_54e1ac;
    QTask_RemoveEventCallback(eax_6, var_1a8_3, sub_4f3240);
    int32_t eax_7 = sub_4cea10();
    QTask_RemoveEventCallback(g_54e1ac, eax_7, sub_4f30a0);
    g_a76c14 = sub_4f1950(5);
    int32_t eax_9 = sub_4f1010();
    void var_1a0;
    void var_b0;
    sub_4f1a80(g_a76c14, &var_1a0, &var_b0, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0f70();
    void var_98;
    sub_4f1a80(g_a76c14, &var_1a0, &var_98, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fd0();
    void var_70;
    sub_4f1a80(g_a76c14, &var_1a0, &var_70, eax_11, 7, 0);
    sub_4f1c90();
    int32_t eax_12 = sub_4f0f40();
    void var_60;
    sub_4f1a80(g_a76c14, &var_1a0, &var_60, eax_12, 7, &g_a76bf0);
    sub_4f1c90();
    int32_t eax_13 = sub_4f0f40();
    void var_54;
    sub_4f1a80(g_a76c14, &var_1a0, &var_54, eax_13, 7, &g_a76bf0);
    return TaskType_Set("TASKTYPE_EDITRIGIDOBJ", *g_54e1ac);
}

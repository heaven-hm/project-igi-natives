#include "00423FC0-MenuWindow_Init.h"
/* 0x00423fc0 MenuWindow_Init full linked: callers=1 callees=30 */
void* MenuWindow_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("MenuWindow", 0x54, QTask_OpenEvent_2(), 0);
    g_53b90c = eax_1;
    int32_t eax_2 = QTask_UnableToAllocateEven_2(eax_1);
    g_53b910 = eax_2;
    eax_2 = g_53b90c;
    char eax_3 = QTask_UnableToAllocateEven(eax_2);
    int16_t ecx = g_53b90c;
    g_53b920 = eax_3;
    char eax_4 = QTask_UnableToAllocateEven(ecx);
    int16_t edx = g_53b90c;
    g_53b921 = eax_4;
    int32_t eax_5 = QTask_UnableToAllocateEven_2(edx);
    g_53b914 = eax_5;
    eax_5 = g_53b90c;
    int32_t eax_6 = QTask_UnableToAllocateEven_2(eax_5);
    int16_t ecx_1 = g_53b90c;
    g_53b918 = eax_6;
    int32_t eax_7 = QTask_UnableToAllocateEven_2(ecx_1);
    int16_t edx_1 = g_53b90c;
    g_53b91c = eax_7;
    QTask_RemoveEventCallback(edx_1, 0, sub_4241c0);
    int32_t eax_8 = sub_4f1a70();
    int32_t var_8 = eax_8;
    eax_8 = g_53b90c;
    int32_t ecx_2 = QTask_RemoveEventCallback(eax_8, var_8, sub_424260);
    ecx_2 = g_53b920;
    int32_t eax_9 = QTask_RemoveEventCallback(g_53b90c, ecx_2, sub_424420);
    eax_9 = g_53b921;
    QTask_RemoveEventCallback(g_53b90c, eax_9, sub_424400);
    QTask_TriggerEvent(g_53b90c, 2, sub_4d3710);
    QTask_TriggerEvent(g_53b90c, g_53b910, MenuWindow_Setup);
    int32_t eax_11 = sub_4e7530();
    QTask_TriggerEvent(g_53b90c, eax_11, sub_424280);
    QTask_TriggerEvent(g_53b90c, 1, sub_488700);
    QTask_TriggerEvent(g_53b90c, g_53b914, sub_424300);
    QTask_TriggerEvent(g_53b90c, g_53b918, sub_41a120);
    QTask_TriggerEvent(g_53b90c, g_53b91c, sub_424380);
    TaskType_Set("LINEUPMODE_NONE", 0);
    TaskType_Set("LINEUPMODE_VERT_TOP", 1);
    TaskType_Set("LINEUPMODE_VERT_CENTRE", 2);
    TaskType_Set("LINEUPMODE_VERT_BOTTOM", 3);
    TaskType_Set("LINEUPMODE_VERT_FILLOUT", 7);
    TaskType_Set("LINEUPMODE_HOR_LEFT", 4);
    TaskType_Set("LINEUPMODE_HOR_CENTRE", 5);
    TaskType_Set("LINEUPMODE_HOR_RIGHT", 6);
    return TaskType_Set("LINEUPMODE_HOR_FILLOUT", 8);
}

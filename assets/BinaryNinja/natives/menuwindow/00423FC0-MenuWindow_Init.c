#include "MenuWindow_Init.h"
void* MenuWindow_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("MenuWindow", 0x54, QTask_OpenEvent_2(), 0);
    g_53b90c = valA1;
    int32_t valA2 = QTask_UnableToAllocateEven_2(valA1);
    g_53b910 = valA2;
    valA2 = g_53b90c;
    char valA3 = QTask_UnableToAllocateEvent(valA2);
    int16_t objC = g_53b90c;
    g_53b920 = valA3;
    char valA4 = QTask_UnableToAllocateEvent(objC);
    int16_t tmpD = g_53b90c;
    g_53b921 = valA4;
    int32_t valA5 = QTask_UnableToAllocateEven_2(tmpD);
    g_53b914 = valA5;
    valA5 = g_53b90c;
    int32_t valA6 = QTask_UnableToAllocateEven_2(valA5);
    int16_t objC1 = g_53b90c;
    g_53b918 = valA6;
    int32_t valA7 = QTask_UnableToAllocateEven_2(objC1);
    int16_t tmpD1 = g_53b90c;
    g_53b91c = valA7;
    QTask_RemoveEventCallback(tmpD1, 0, sub_4241c0);
    int32_t valA8 = Script_ParseEnumReal32_8();
    int32_t v_8 = valA8;
    valA8 = g_53b90c;
    int32_t objC2 = QTask_RemoveEventCallback(valA8, v_8, sub_424260);
    objC2 = g_53b920;
    int32_t valA9 = QTask_RemoveEventCallback(g_53b90c, objC2, sub_424420);
    valA9 = g_53b921;
    QTask_RemoveEventCallback(g_53b90c, valA9, sub_424400);
    QTask_TriggerEvent(g_53b90c, 2, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_53b90c, g_53b910, MenuWindow_Setup);
    int32_t valA11 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_53b90c, valA11, sub_424280);
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

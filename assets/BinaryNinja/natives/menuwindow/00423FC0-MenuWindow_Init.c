// Original IGI.EXE function: MenuWindow_Init (VA 0x00423FC0; static CFG gate PASS, CFG score 1.000).
#include "MenuWindow_Init.h"
void* MenuWindow_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("MenuWindow", 0x54, QTask_OpenEvent_2(), 0);
    g_53b90c = data_1;
    int32_t data_2 = QTask_UnableToAllocateEven_2(data_1);
    g_53b910 = data_2;
    data_2 = g_53b90c;
    char data_3 = QTask_UnableToAllocateEvent(data_2);
    int16_t entity_val = g_53b90c;
    g_53b920 = data_3;
    char data_4 = QTask_UnableToAllocateEvent(entity_val);
    int16_t temp_val = g_53b90c;
    g_53b921 = data_4;
    int32_t data_5 = QTask_UnableToAllocateEven_2(temp_val);
    g_53b914 = data_5;
    data_5 = g_53b90c;
    int32_t data_6 = QTask_UnableToAllocateEven_2(data_5);
    int16_t entity_1 = g_53b90c;
    g_53b918 = data_6;
    int32_t data_7 = QTask_UnableToAllocateEven_2(entity_1);
    int16_t temp_1 = g_53b90c;
    g_53b91c = data_7;
    QTask_RemoveEventCallback(temp_1, 0, sub_4241c0);
    int32_t data_8 = Script_ParseEnumReal32_8();
    int32_t item_8 = data_8;
    data_8 = g_53b90c;
    int32_t entity_2 = QTask_RemoveEventCallback(data_8, item_8, sub_424260);
    entity_2 = g_53b920;
    int32_t data_9 = QTask_RemoveEventCallback(g_53b90c, entity_2, sub_424420);
    data_9 = g_53b921;
    QTask_RemoveEventCallback(g_53b90c, data_9, sub_424400);
    QTask_TriggerEvent(g_53b90c, 2, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_53b90c, g_53b910, MenuWindow_Setup);
    int32_t data_11 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_53b90c, data_11, sub_424280);
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

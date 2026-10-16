#include "004FE7C0-TagItem_Init.h"
/* 0x004fe7c0 TagItem_Init full linked: callers=1 callees=39 */
int32_t* sub_4fe7c0()

{
    g_a7a4f4 = QTask_UnableToAllocateEven(0);
    int32_t var_4 = 0;
    int16_t eax_2 = TaskType_Register("TagItem", 0x124, QTask_OpenEvent_2(), 0);
    g_a7a4fc = eax_2;
    QTask_RemoveEventCallback(eax_2, 0, sub_4d3710);
    QTask_TriggerEvent(g_a7a4fc, 1, sub_4d3710);
    QTask_TriggerEvent(g_a7a4fc, 2, sub_4d3710);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a7a4fc, eax_4, sub_4fea60);
    g_a7a4ec = sub_4f1950(1);
    int32_t eax_6 = sub_4f0ff0();
    sub_4f1a80(g_a7a4ec, 0, 0x20, eax_6, 7, 0);
    int32_t var_1c = 0;
    int16_t eax_8 = TaskType_Register("TagItemInt32", 0x128, g_a7a4fc, 0);
    g_a7a4f6 = eax_8;
    QTask_RemoveEventCallback(eax_8, 0, sub_4feaa0);
    int32_t eax_9 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a7a4f6, eax_9, sub_4feae0);
    g_a7a4f8 = sub_4f1980(g_a7a4ec, 2);
    int32_t eax_12 = sub_4f0fa0();
    sub_4f1a80(g_a7a4f8, 0, 0x124, eax_12, 7, 0);
    int32_t var_1c_1 = 0;
    int16_t eax_13 = TaskType_Register("TagItemReal32", 0x128, g_a7a4fc, 0);
    g_a7a4e0 = eax_13;
    QTask_RemoveEventCallback(eax_13, 0, sub_4feaf0);
    int32_t eax_14 = sub_4f1a60();
    int32_t var_8_2 = eax_14;
    eax_14 = g_a7a4e0;
    QTask_RemoveEventCallback(eax_14, var_8_2, sub_4feb10);
    g_a7a4f0 = sub_4f1980(g_a7a4ec, 2);
    int32_t eax_16 = sub_4f0f50();
    sub_4f1a80(g_a7a4f0, 0, 0x124, eax_16, 7, 0);
    int32_t var_1c_2 = 0;
    int16_t eax_18 = TaskType_Register("TagItemString16", 0x134, g_a7a4fc, 0);
    g_a7a4fe = eax_18;
    QTask_RemoveEventCallback(eax_18, 0, sub_4feb20);
    int32_t eax_19 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a7a4fe, eax_19, sub_4feb40);
    g_a7a4e4 = sub_4f1980(g_a7a4ec, 2);
    int32_t eax_21 = sub_4f0fd0();
    sub_4f1a80(g_a7a4e4, 0, 0x124, eax_21, 7, 0);
    int32_t var_1c_3 = 0;
    int16_t eax_23 = TaskType_Register("TagItemString256", 0x224, g_a7a4fc, 0);
    g_a7a4e8 = eax_23;
    QTask_RemoveEventCallback(eax_23, 0, sub_4feb50);
    int32_t eax_24 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a7a4e8, eax_24, sub_4feb70);
    g_a7a500 = sub_4f1980(g_a7a4ec, 2);
    int32_t eax_27 = sub_4f0ff0();
    return sub_4f1a80(g_a7a500, 0, 0x124, eax_27, 7, 0);
}

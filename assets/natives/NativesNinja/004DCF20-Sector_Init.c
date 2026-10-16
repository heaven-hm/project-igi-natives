#include "004DCF20-Sector_Init.h"
/* 0x004dcf20 Sector_Init full linked: callers=1 callees=42 */
int32_t sub_4dcf20()

{
    int32_t var_4_1 = 0;
    int16_t eax_1 = TaskType_Register("Sector", 0x148, sub_4c48c0(), 0);
    g_548694 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, sub_4dd1c0);
    QTask_RemoveEventCallback(g_548694, 0, sub_4de6b0);
    QTask_TriggerEvent(g_548694, 2, sub_4de740);
    int32_t eax_3 = sub_4cea10();
    QTask_RemoveEventCallback(g_548694, eax_3, sub_4de770);
    int32_t eax_4 = sub_4cea20();
    int32_t var_8_1 = eax_4;
    eax_4 = g_548694;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_4de800);
    int32_t var_10 = 0;
    int16_t eax_5 = TaskType_Register("SectorObject", 0x1a0, g_548694, 0);
    g_548696 = eax_5;
    QTask_RemoveEventCallback(eax_5, 4, sub_4dd310);
    int32_t eax_6 = sub_4e55b0();
    QTask_RemoveEventCallback(g_548696, eax_6, sub_4d3710);
    QTask_RemoveEventCallback(g_548696, 0, sub_4ddf60);
    QTask_TriggerEvent(g_548696, 2, sub_4ddff0);
    QTask_RemoveEventCallback(g_548696, 0xa, sub_4de240);
    QTask_RemoveEventCallback(g_548696, 9, sub_4de2d0);
    QTask_RemoveEventCallback(g_548696, 8, sub_4de360);
    QTask_RemoveEventCallback(g_548696, 0xb, sub_4de3f0);
    int32_t eax_9 = sub_4d14c0();
    int32_t var_8_3 = eax_9;
    eax_9 = g_548696;
    QTask_RemoveEventCallback(eax_9, var_8_3, sub_4dbcc0);
    QTask_TriggerEvent(g_548696, 1, sub_4de4e0);
    int32_t eax_10 = sub_4cfc70();
    QTask_RemoveEventCallback(g_548696, eax_10, sub_4dc3d0);
    int32_t eax_11 = sub_4cfc80();
    int32_t var_8_5 = eax_11;
    eax_11 = g_548696;
    QTask_RemoveEventCallback(eax_11, var_8_5, sub_4dcc20);
    int32_t eax_12 = sub_4cfc90();
    QTask_RemoveEventCallback(g_548696, eax_12, sub_4dbf00);
    int32_t eax_13 = sub_4d14d0();
    QTask_RemoveEventCallback(g_548696, eax_13, sub_4de8a0);
    int32_t eax_14 = sub_4cea10();
    int32_t var_8_8 = eax_14;
    eax_14 = g_548696;
    QTask_RemoveEventCallback(eax_14, var_8_8, sub_4de970);
    int32_t eax_15 = sub_4cea20();
    QTask_RemoveEventCallback(g_548696, eax_15, sub_4dea80);
    sub_4b0b00(&g_a5e338, 0x20, 0x14, 0);
    sub_4b0b00(&g_a5e318, 0xc, 0x3e8, 0);
    int32_t var_4 = 0;
    g_548698 = TaskType_Register("SectorInteriorObject", 0xf0, sub_4c48c0(), 0);
    int32_t eax_18 = sub_4cea10();
    QTask_RemoveEventCallback(g_548698, eax_18, sub_4deb90);
    int32_t eax_19 = sub_4cea20();
    int32_t var_8_11 = eax_19;
    eax_19 = g_548698;
    return QTask_RemoveEventCallback(eax_19, var_8_11, sub_4ded30);
}

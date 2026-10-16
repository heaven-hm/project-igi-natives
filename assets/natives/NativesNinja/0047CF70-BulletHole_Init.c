#include "0047CF70-BulletHole_Init.h"
/* 0x0047cf70 BulletHole_Init full linked: callers=1 callees=16 */
int32_t sub_47cf70()

{
    int32_t eax = QTask_UnableToAllocateEven(0);
    g_540904 = eax;
    int32_t eax_2 = QTask_RemoveEventCallback(sub_4c48c0(), eax, sub_47d380);
    eax_2 = g_540904;
    QTask_RemoveEventCallback(sub_4e5350(), eax_2, sub_47e0c0);
    int32_t var_4 = 0;
    g_5c1138 = TaskType_Register("BulletHole", 0xe148, QTask_OpenEvent_2(), 0);
    int32_t eax_6 = sub_4c56f0();
    QTask_RemoveEventCallback(g_5c1138, eax_6, sub_47d0b0);
    QTask_TriggerEvent(g_5c1138, 2, sub_47d320);
    int32_t eax_7 = sub_4d0d80();
    int32_t var_8_3 = eax_7;
    eax_7 = g_5c1138;
    QTask_TriggerEvent(eax_7, var_8_3, sub_5188c0);
    int32_t eax_8 = sub_4d97e0();
    QTask_RemoveEventCallback(g_5c1138, eax_8, sub_47d060);
    sub_4b0b00(&g_5c1108, 4, 0x64, 4);
    return sub_4b0b00(&g_5c1120, 0x40, 0x64, 4);
}

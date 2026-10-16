#include "005033F0-EditorRigidObj_Init.h"
/* 0x005033f0 EditorRigidObj_Init full linked: callers=1 callees=14 */
int32_t sub_5033f0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("EditorRigidObj", 0x20, QTask_OpenEvent_2(), 0);
    g_54e634 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, 0);
    QTask_RemoveEventCallback(g_54e634, 9, 0);
    QTask_RemoveEventCallback(g_54e634, 0xa, 0);
    QTask_RemoveEventCallback(g_54e634, 0xb, 0);
    int32_t eax_3 = sub_4d14d0();
    int32_t var_8 = eax_3;
    eax_3 = g_54e634;
    QTask_RemoveEventCallback(eax_3, var_8, 0);
    QTask_RemoveEventCallback(g_54e634, 7, 0);
    int32_t eax_4 = sub_4cea20();
    QTask_RemoveEventCallback(g_54e634, eax_4, 0);
    int32_t eax_5 = sub_4cea10();
    int32_t var_8_2 = eax_5;
    eax_5 = g_54e634;
    QTask_RemoveEventCallback(eax_5, var_8_2, 0);
    return QTask_RemoveEventCallback(g_54e634, 8, 0);
}

#include "004EA3D0-SoundDefGraph_Init.h"
/* 0x004ea3d0 SoundDefGraph_Init full linked: callers=1 callees=27 */
int32_t sub_4ea3d0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("SoundDefGraph", 0x188, QTask_OpenEvent_2(), 0x200);
    g_54dad8 = eax_1;
    g_54dada = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4ea600);
    QTask_TriggerEvent(g_54dad8, 1, sub_4ea880);
    QTask_TriggerEvent(g_54dad8, 2, sub_4ea8a0);
    int32_t eax_3 = sub_4ebdd0();
    QTask_RemoveEventCallback(g_54dad8, eax_3, sub_4ea560);
    int32_t eax_4 = sub_4e65f0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_54dad8;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_4ea8d0);
    int32_t eax_5 = sub_4e6630();
    QTask_RemoveEventCallback(g_54dad8, eax_5, sub_4eab30);
    int32_t eax_6 = sub_4e6650();
    QTask_RemoveEventCallback(g_54dad8, eax_6, sub_4eab90);
    int32_t eax_7 = sub_4e6670();
    int32_t var_8_4 = eax_7;
    eax_7 = g_54dad8;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_4eabb0);
    int32_t eax_8 = sub_4e6690();
    QTask_RemoveEventCallback(g_54dad8, eax_8, sub_4eabd0);
    int32_t eax_9 = sub_4e66b0();
    QTask_RemoveEventCallback(g_54dad8, eax_9, sub_4eac10);
    int32_t eax_10 = sub_4e66d0();
    int32_t var_8_7 = eax_10;
    eax_10 = g_54dad8;
    QTask_RemoveEventCallback(eax_10, var_8_7, sub_4eac20);
    int32_t eax_11 = sub_4e66f0();
    QTask_RemoveEventCallback(g_54dad8, eax_11, sub_4eac40);
    int32_t eax_12 = sub_4e6710();
    QTask_RemoveEventCallback(g_54dad8, eax_12, sub_4eac90);
    int32_t eax_13 = sub_4e6730();
    int32_t var_8_10 = eax_13;
    eax_13 = g_54dad8;
    return QTask_TriggerEvent(eax_13, var_8_10, sub_4ea8c0);
}

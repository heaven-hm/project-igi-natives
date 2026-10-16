#include "004E8390-SoundDefSound_Init.h"
/* 0x004e8390 SoundDefSound_Init full linked: callers=1 callees=27 */
int32_t sub_4e8390()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("SoundDefSound", 0x130, QTask_OpenEvent_2(), 0x200);
    g_54d9b4 = eax_1;
    g_54d9b6 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4e85e0);
    QTask_TriggerEvent(g_54d9b4, 1, sub_4e8840);
    QTask_TriggerEvent(g_54d9b4, 2, sub_4e88e0);
    int32_t eax_3 = sub_4ebdd0();
    QTask_RemoveEventCallback(g_54d9b4, eax_3, sub_4e8520);
    int32_t eax_4 = sub_4e65f0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_54d9b4;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_4e8910);
    int32_t eax_5 = sub_4e6630();
    QTask_RemoveEventCallback(g_54d9b4, eax_5, sub_4e8aa0);
    int32_t eax_6 = sub_4e6650();
    QTask_RemoveEventCallback(g_54d9b4, eax_6, sub_4e8b00);
    int32_t eax_7 = sub_4e6670();
    int32_t var_8_4 = eax_7;
    eax_7 = g_54d9b4;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_4eabb0);
    int32_t eax_8 = sub_4e6690();
    QTask_RemoveEventCallback(g_54d9b4, eax_8, sub_4e8b20);
    int32_t eax_9 = sub_4e66b0();
    QTask_RemoveEventCallback(g_54d9b4, eax_9, sub_4e8b60);
    int32_t eax_10 = sub_4e66d0();
    int32_t var_8_7 = eax_10;
    eax_10 = g_54d9b4;
    QTask_RemoveEventCallback(eax_10, var_8_7, sub_4eac20);
    int32_t eax_11 = sub_4e66f0();
    QTask_RemoveEventCallback(g_54d9b4, eax_11, sub_4e8b80);
    int32_t eax_12 = sub_4e6710();
    QTask_RemoveEventCallback(g_54d9b4, eax_12, sub_4e8bd0);
    int32_t eax_13 = sub_4e6730();
    int32_t var_8_10 = eax_13;
    eax_13 = g_54d9b4;
    return QTask_TriggerEvent(eax_13, var_8_10, sub_4e8900);
}

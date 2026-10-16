#include "004E9520-SoundDefTriggerOnce_Init.h"
/* 0x004e9520 SoundDefTriggerOnce_Init full linked: callers=1 callees=39 */
int32_t sub_4e9520()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("SoundDefTriggerOnce", 0x138, QTask_OpenEvent_2(), 0x200);
    g_54da60 = eax_1;
    g_54da62 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4e9830);
    QTask_TriggerEvent(g_54da60, 1, sub_4e9aa0);
    QTask_TriggerEvent(g_54da60, 2, sub_4e9b60);
    int32_t eax_3 = sub_4ebdd0();
    QTask_RemoveEventCallback(g_54da60, eax_3, sub_4e9760);
    int32_t eax_4 = sub_4e65f0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_54da60;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_4e9b80);
    int32_t eax_5 = sub_4e6630();
    QTask_RemoveEventCallback(g_54da60, eax_5, sub_4e9d30);
    int32_t eax_6 = sub_4e6650();
    QTask_RemoveEventCallback(g_54da60, eax_6, sub_4e9d90);
    int32_t eax_7 = sub_4e6670();
    int32_t var_8_4 = eax_7;
    eax_7 = g_54da60;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_4eabb0);
    int32_t eax_8 = sub_4e6690();
    QTask_RemoveEventCallback(g_54da60, eax_8, sub_4eabd0);
    int32_t eax_9 = sub_4e66b0();
    QTask_RemoveEventCallback(g_54da60, eax_9, sub_4e9db0);
    int32_t eax_10 = sub_4e66d0();
    int32_t var_8_7 = eax_10;
    eax_10 = g_54da60;
    QTask_RemoveEventCallback(eax_10, var_8_7, sub_4eac20);
    int32_t eax_11 = sub_4e66f0();
    QTask_RemoveEventCallback(g_54da60, eax_11, sub_4e9dd0);
    int32_t eax_12 = sub_4e6710();
    QTask_RemoveEventCallback(g_54da60, eax_12, sub_4e9e20);
    int32_t eax_13 = sub_4e6730();
    int32_t var_8_10 = eax_13;
    eax_13 = g_54da60;
    QTask_TriggerEvent(eax_13, var_8_10, sub_4e9e70);
    int32_t eax_14 = sub_4d14d0();
    QTask_RemoveEventCallback(g_54da60, eax_14, 0);
    QTask_RemoveEventCallback(g_54da60, 9, 0);
    QTask_RemoveEventCallback(g_54da60, 8, 0);
    QTask_RemoveEventCallback(g_54da60, 0xa, 0);
    QTask_RemoveEventCallback(g_54da60, 0xb, 0);
    QTask_RemoveEventCallback(g_54da60, 0xc, 0);
    QTask_RemoveEventCallback(g_54da60, 4, 0);
    int32_t eax_17 = sub_4cea20();
    QTask_RemoveEventCallback(g_54da60, eax_17, 0);
    int32_t eax_18 = sub_4cea10();
    int32_t var_8_13 = eax_18;
    eax_18 = g_54da60;
    return QTask_RemoveEventCallback(eax_18, var_8_13, 0);
}

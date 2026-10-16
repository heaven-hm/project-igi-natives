#include "004EB1D0-SoundDefGroup_Init.h"
/* 0x004eb1d0 SoundDefGroup_Init full linked: callers=1 callees=27 */
int32_t sub_4eb1d0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("SoundDefGroup", 0x60, QTask_OpenEvent_2(), 0x200);
    g_54db48 = eax_1;
    g_54db4a = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4eb360);
    QTask_TriggerEvent(g_54db48, 1, sub_4eb3d0);
    QTask_TriggerEvent(g_54db48, 2, sub_4d3710);
    int32_t eax_3 = sub_4e65f0();
    QTask_RemoveEventCallback(g_54db48, eax_3, sub_4eb470);
    int32_t eax_4 = sub_4e6610();
    int32_t var_8_1 = eax_4;
    eax_4 = g_54db48;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_4eb620);
    int32_t eax_5 = sub_4e6630();
    QTask_RemoveEventCallback(g_54db48, eax_5, sub_4eb670);
    int32_t eax_6 = sub_4e6650();
    QTask_RemoveEventCallback(g_54db48, eax_6, sub_4eb740);
    int32_t eax_7 = sub_4e6670();
    int32_t var_8_4 = eax_7;
    eax_7 = g_54db48;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_4eb760);
    int32_t eax_8 = sub_4e6690();
    QTask_RemoveEventCallback(g_54db48, eax_8, sub_4eb780);
    int32_t eax_9 = sub_4e66b0();
    QTask_RemoveEventCallback(g_54db48, eax_9, sub_4eb810);
    int32_t eax_10 = sub_4e66d0();
    int32_t var_8_7 = eax_10;
    eax_10 = g_54db48;
    QTask_RemoveEventCallback(eax_10, var_8_7, sub_4eb8a0);
    int32_t eax_11 = sub_4e66f0();
    QTask_RemoveEventCallback(g_54db48, eax_11, sub_4eb930);
    int32_t eax_12 = sub_4e6710();
    QTask_RemoveEventCallback(g_54db48, eax_12, sub_4eb9c0);
    int32_t eax_13 = sub_4e6730();
    int32_t var_8_10 = eax_13;
    eax_13 = g_54db48;
    return QTask_TriggerEvent(eax_13, var_8_10, sub_4eb460);
}

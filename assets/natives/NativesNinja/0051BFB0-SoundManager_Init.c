#include "0051BFB0-SoundManager_Init.h"
/* 0x0051bfb0 SoundManager_Init full linked: callers=1 callees=14 */
int32_t* sub_51bfb0()

{
    int32_t var_48 = 0;
    int16_t eax_1 = TaskType_Register("SoundManager", 0x44, QTask_OpenEvent_2(), 0);
    g_54ee3c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_51c090);
    QTask_TriggerEvent(g_54ee3c, 1, sub_488700);
    QTask_TriggerEvent(g_54ee3c, 2, sub_51c0a0);
    int32_t eax_3 = sub_4e6610();
    QTask_RemoveEventCallback(g_54ee3c, eax_3, sub_51c0c0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_4c_1 = eax_4;
    eax_4 = g_54ee3c;
    QTask_RemoveEventCallback(eax_4, var_4c_1, sub_51c100);
    int32_t eax_5 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54ee3c, eax_5, sub_51c280);
    g_a83780 = sub_4f1950(1);
    int32_t eax_7 = sub_4f0fe0();
    void var_44;
    void var_24;
    return sub_4f1a80(g_a83780, &var_44, &var_24, eax_7, 7, 0);
}

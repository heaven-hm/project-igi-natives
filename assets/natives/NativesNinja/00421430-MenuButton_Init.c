#include "00421430-MenuButton_Init.h"
/* 0x00421430 MenuButton_Init full linked: callers=1 callees=14 */
int32_t* MenuButton_Init()

{
    int32_t var_9c = 0;
    int16_t eax_1 = TaskType_Register("MenuButton", 0x98, Menu_PlayMusic_13(), 0);
    g_53b7f0 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_4215d0);
    int32_t eax_2 = sub_4e7530();
    int32_t var_a0 = eax_2;
    eax_2 = g_53b7f0;
    QTask_TriggerEvent(eax_2, var_a0, MenuButton_LoadParameters);
    QTask_TriggerEvent(g_53b7f0, 2, sub_4d3710);
    QTask_RemoveEventCallback(g_53b7f0, 0, sub_421510);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_a0_1 = eax_3;
    eax_3 = g_53b7f0;
    QTask_RemoveEventCallback(eax_3, var_a0_1, sub_4216f0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b7f0, eax_4, MenuButton_Process);
    g_57bbfc = sub_4f1950(1);
    int32_t eax_6 = sub_4f0fe0();
    void var_98;
    void var_44;
    return sub_4f1a80(g_57bbfc, &var_98, &var_44, eax_6, 7, 0);
}

#include "00420CC0-MenuText_Init.h"
/* 0x00420cc0 MenuText_Init full linked: callers=1 callees=28 */
void* MenuText_Init()

{
    int32_t var_174 = 0;
    int16_t eax_1 = TaskType_Register("MenuText", 0x170, Menu_PlayMusic_13(), 0);
    g_53b770 = eax_1;
    QTask_TriggerEvent(eax_1, 1, MenuText_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_178 = eax_2;
    eax_2 = g_53b770;
    QTask_TriggerEvent(eax_2, var_178, MenuText_Setup);
    QTask_TriggerEvent(g_53b770, 2, MenuText_Process);
    QTask_RemoveEventCallback(g_53b770, 0, sub_420e90);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_178_1 = eax_3;
    eax_3 = g_53b770;
    QTask_RemoveEventCallback(eax_3, var_178_1, sub_4213d0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b770, eax_4, sub_420f40);
    int32_t eax_5 = Menu_LeaveMenus_14();
    QTask_TriggerEvent(g_53b770, eax_5, MenuText_Update);
    g_57bbf4 = sub_4f1950(5);
    int32_t eax_7 = sub_4f0fe0();
    void var_170;
    void var_11c;
    sub_4f1a80(g_57bbf4, &var_170, &var_11c, eax_7, 7, 0);
    int32_t eax_8 = sub_4f0fe0();
    void var_dc;
    sub_4f1a80(g_57bbf4, &var_170, &var_dc, eax_8, 7, 0);
    int32_t eax_9 = sub_4f0fa0();
    void var_58;
    sub_4f1a80(g_57bbf4, &var_170, &var_58, eax_9, 7, 0);
    int32_t eax_10 = sub_4f0fc0();
    void var_54;
    sub_4f1a80(g_57bbf4, &var_170, &var_54, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0fe0();
    void var_9c;
    sub_4f1a80(g_57bbf4, &var_170, &var_9c, eax_11, 7, 0);
    TaskType_Set("TEXT_BLACK", 0);
    TaskType_Set("TEXT_WHITE", 1);
    TaskType_Set("TEXT_GREEN", 2);
    return TaskType_Set("TEXT_ORANGE", 3);
}

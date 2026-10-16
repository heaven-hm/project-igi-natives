#include "004170A0-MenuManager_Init.h"
/* 0x004170a0 MenuManager_Init full linked: callers=1 callees=28 */
❓  int32_t* MenuManager_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x2898);
    sub_4b12f0("MENUSYS:", "LOCAL:menusystem\");
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("MenuManager", 0x2898, QTask_OpenEvent_2(), 0);
    g_539824 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, MenuManager_LoadParameters);
    QTask_TriggerEvent(g_539824, 2, MenuManager_Setup);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_539824, eax_3, sub_418070);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_539824, eax_4, MenuManager_Process);
    QTask_TriggerEvent(g_539824, 1, sub_418080);
    int32_t eax_6 = sub_4e7530();
    QTask_TriggerEvent(g_539824, eax_6, MenuManager_Update);
    int32_t eax_7 = sub_4f1210();
    QTask_TriggerEvent(g_539824, eax_7, sub_418a80);
    int32_t eax_8 = sub_4f1220();
    int32_t var_8_4 = eax_8;
    eax_8 = g_539824;
    QTask_TriggerEvent(eax_8, var_8_4, sub_418aa0);
    g_57bae0 = sub_4f1950(5);
    int32_t eax_10 = sub_4f0ef0();
    void arg_26bc;
    sub_4f1a80(g_57bae0, &__return_addr, &arg_26bc, eax_10, 6, 0);
    int32_t eax_12 = sub_4f0fa0();
    void arg_20;
    sub_4f1a80(g_57bae0, &__return_addr, &arg_20, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0ff0();
    void arg_d4;
    sub_4f1a80(g_57bae0, &__return_addr, &arg_d4, eax_14, 7, 0);
    int32_t eax_16 = sub_4f0ff0();
    void arg_26c5;
    sub_4f1a80(g_57bae0, &__return_addr, &arg_26c5, eax_16, 6, 0);
    int32_t eax_18 = sub_4f1000();
    void arg_26c1;
    return sub_4f1a80(g_57bae0, &__return_addr, &arg_26c1, eax_18, 7, 0);
}

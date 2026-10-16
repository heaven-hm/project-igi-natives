#include "004733F0-GunM16A2_Init.h"
/* 0x004733f0 GunM16A2_Init full linked: callers=1 callees=15 */
void* sub_4733f0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("GunM16A2", 0x1b0, sub_477bf0(), 0);
    g_5be36c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4734d0);
    QTask_TriggerEvent(g_5be36c, 2, sub_4754a0);
    int32_t eax_3 = sub_460bf0();
    QTask_RemoveEventCallback(g_5be36c, eax_3, sub_473510);
    int32_t eax_4 = sub_487190();
    QTask_RemoveEventCallback(g_5be36c, eax_4, sub_473620);
    int32_t eax_5 = HumanPlayer_ApplyPhysics_10();
    int32_t var_8_2 = eax_5;
    eax_5 = g_5be36c;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_473790);
    int32_t eax_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be36c, eax_6, sub_4737e0);
    int32_t eax_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be36c, eax_7, sub_4737f0);
    return TaskType_Set("TASKTYPE_GUNM16A2", *g_5be36c);
}

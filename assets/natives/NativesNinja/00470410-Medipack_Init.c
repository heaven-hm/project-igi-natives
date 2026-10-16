#include "00470410-Medipack_Init.h"
/* 0x00470410 Medipack_Init full linked: callers=1 callees=16 */
void* sub_470410()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Medipack", 0x1b0, sub_477bf0(), 0);
    g_5be334 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_470500);
    int32_t eax_2 = sub_4f1fe0();
    int32_t var_8 = eax_2;
    eax_2 = g_5be334;
    QTask_RemoveEventCallback(eax_2, var_8, sub_4754c0);
    int32_t eax_3 = sub_460bf0();
    QTask_RemoveEventCallback(g_5be334, eax_3, sub_4d3710);
    int32_t eax_4 = sub_460c10();
    QTask_RemoveEventCallback(g_5be334, eax_4, sub_4d3710);
    int32_t eax_5 = HumanPlayer_ApplyPhysics_10();
    int32_t var_8_3 = eax_5;
    eax_5 = g_5be334;
    QTask_RemoveEventCallback(eax_5, var_8_3, sub_470540);
    int32_t eax_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be334, eax_6, sub_427d70);
    int32_t eax_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be334, eax_7, sub_470570);
    return TaskType_Set("TASKTYPE_MEDIPACK", *g_5be334);
}

#include "00470610-Binocular_Init.h"
/* 0x00470610 Binocular_Init full linked: callers=1 callees=23 */
void* sub_470610()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Binocular", 0x1c8, sub_477bf0(), 0);
    g_5be33c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_470760);
    QTask_TriggerEvent(g_5be33c, 2, sub_4707d0);
    int32_t eax_3 = sub_4f1fe0();
    QTask_RemoveEventCallback(g_5be33c, eax_3, sub_4754c0);
    int32_t eax_4 = sub_460bf0();
    QTask_RemoveEventCallback(g_5be33c, eax_4, sub_470890);
    int32_t eax_5 = sub_460c10();
    int32_t var_8_2 = eax_5;
    eax_5 = g_5be33c;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_4d3710);
    int32_t eax_6 = sub_487190();
    QTask_RemoveEventCallback(g_5be33c, eax_6, sub_470bc0);
    int32_t eax_7 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5be33c, eax_7, sub_470c80);
    int32_t eax_8 = HumanPlayer_ApplyPhysics_10();
    int32_t var_8_5 = eax_8;
    eax_8 = g_5be33c;
    QTask_RemoveEventCallback(eax_8, var_8_5, sub_470ce0);
    int32_t eax_9 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be33c, eax_9, sub_51baa0);
    int32_t eax_10 = sub_4f2030();
    QTask_TriggerEvent(g_5be33c, eax_10, sub_470840);
    int32_t eax_11 = AIConfig_LoadSettings();
    int32_t var_8_8 = eax_11;
    eax_11 = g_5be33c;
    QTask_RemoveEventCallback(eax_11, var_8_8, sub_470d70);
    return TaskType_Set("TASKTYPE_BINOCULAR", *g_5be33c);
}

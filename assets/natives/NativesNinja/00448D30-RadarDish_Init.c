#include "00448D30-RadarDish_Init.h"
/* 0x00448d30 RadarDish_Init full linked: callers=1 callees=16 */
void* sub_448d30()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("RadarDish", 0x180, MagicObj_GetTypeId(), 0);
    g_57c20c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_448b70);
    QTask_TriggerEvent(g_57c20c, 1, sub_448e30);
    QTask_TriggerEvent(g_57c20c, 2, sub_448cf0);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_57c20c, eax_3, sub_449180);
    int32_t eax_4 = sub_4c56d0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57c20c;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_449220);
    int32_t eax_5 = sub_4c56e0();
    QTask_RemoveEventCallback(g_57c20c, eax_5, sub_4efcd0);
    int32_t eax_6 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c20c, eax_6, sub_449260);
    int32_t eax_7 = sub_4e6610();
    int32_t var_8_4 = eax_7;
    eax_7 = g_57c20c;
    QTask_RemoveEventCallback(eax_7, var_8_4, sub_449270);
    return TaskType_Set("TASKTYPE_RADARDISH", *g_57c20c);
}

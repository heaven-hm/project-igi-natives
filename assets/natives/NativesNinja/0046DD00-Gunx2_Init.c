#include "0046DD00-Gunx2_Init.h"
/* 0x0046dd00 Gunx2_Init full linked: callers=1 callees=12 */
void* sub_46dd00()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Gunx2", 0x138, MagicObj_GetTypeId(), 0);
    g_53fe68 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_46ddc0);
    QTask_TriggerEvent(g_53fe68, 1, sub_46de70);
    QTask_TriggerEvent(g_53fe68, 2, sub_46dee0);
    int32_t eax_3 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53fe68, eax_3, sub_4d3710);
    int32_t eax_4 = sub_4c56f0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_53fe68;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_472880);
    int32_t eax_5 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_53fe68, eax_5, sub_45e3d0);
    return TaskType_Set("TASKTYPE_GUNX2", *g_53fe68);
}

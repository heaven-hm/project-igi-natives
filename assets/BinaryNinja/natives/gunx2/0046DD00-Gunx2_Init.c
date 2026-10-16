#include "Gunx2_Init.h"
void* Gunx2_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Gunx2", 0x138, MagicObj_GetTypeId(), 0);
    g_53fe68 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_46ddc0);
    QTask_TriggerEvent(g_53fe68, 1, sub_46de70);
    QTask_TriggerEvent(g_53fe68, 2, sub_46dee0);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53fe68, valA3, AIGraph_LoadParameters);
    int32_t valA4 = DynObj_FindSymbol_6();
    int32_t v_8_1 = valA4;
    valA4 = g_53fe68;
    QTask_RemoveEventCallback(valA4, v_8_1, GunCABarrel_Update);
    int32_t valA5 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_53fe68, valA5, sub_45e3d0);
    return TaskType_Set("TASKTYPE_GUNX2", *g_53fe68);
}

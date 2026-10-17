// Original IGI.EXE function: Gunx2_Init (VA 0x0046DD00; static CFG gate PASS, CFG score 1.000).
#include "Gunx2_Init.h"
void* Gunx2_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Gunx2", 0x138, MagicObj_GetTypeId(), 0);
    g_53fe68 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_46ddc0);
    QTask_TriggerEvent(g_53fe68, 1, sub_46de70);
    QTask_TriggerEvent(g_53fe68, 2, sub_46dee0);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53fe68, data_3, AIGraph_LoadParameters);
    int32_t data_4 = DynObj_FindSymbol_6();
    int32_t item_8_1 = data_4;
    data_4 = g_53fe68;
    QTask_RemoveEventCallback(data_4, item_8_1, GunCABarrel_Update);
    int32_t data_5 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_53fe68, data_5, sub_45e3d0);
    return TaskType_Set("TASKTYPE_GUNX2", *g_53fe68);
}

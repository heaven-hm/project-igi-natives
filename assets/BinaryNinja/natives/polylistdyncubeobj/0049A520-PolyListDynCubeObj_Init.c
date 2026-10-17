// Original IGI.EXE function: PolyListDynCubeObj_Init (VA 0x0049A520; static CFG gate PASS, CFG score 1.000).
#include "PolyListDynCubeObj_Init.h"
int32_t PolyListDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("PolyListDynCubeObj", 0xb8, g_54875c, 0);
    g_543c64 = data_1;
    QTask_RemoveEventCallback(data_1, 4, PolyListDynCubeObj_LoadParameters);
    QTask_TriggerEvent(g_543c64, 2, PolyListDynCubeObj_Setup);
    int32_t data_2 = Display_RestoreDevice_14("PolyListDynCubeObjPrimitive");
    g_c311bc = data_2;
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_2, PolyListDynCubeObj_Process);
    g_72057c = Sys_DispatchOpcode_19(g_bcade8, sub_49a5e0);
    int32_t data_6 = Sys_DispatchOpcode_19(g_bcad7c, AIGraph_LoadParameters);
    void* entity_1 = g_bcadac;
    g_7205a4 = data_6;
    int32_t data_7 = Sys_DispatchOpcode_19(entity_1, PolyListDynCubeObj_OnEvent);
    void* temp_1 = g_bcadc4;
    g_7205a8 = data_7;
    int32_t result = Sys_DispatchOpcode_19(temp_1, AIGraph_LoadParameters);
    g_7205a0 = result;
    return result;
}

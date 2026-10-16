#include "PolyListDynCubeObj_Init.h"
int32_t PolyListDynCubeObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("PolyListDynCubeObj", 0xb8, g_54875c, 0);
    g_543c64 = valA1;
    QTask_RemoveEventCallback(valA1, 4, PolyListDynCubeObj_LoadParameters);
    QTask_TriggerEvent(g_543c64, 2, PolyListDynCubeObj_Setup);
    int32_t valA2 = Display_RestoreDevice_14("PolyListDynCubeObjPrimitive");
    g_c311bc = valA2;
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA2, PolyListDynCubeObj_Process);
    g_72057c = Sys_DispatchOpcode_19(g_bcade8, sub_49a5e0);
    int32_t valA6 = Sys_DispatchOpcode_19(g_bcad7c, AIGraph_LoadParameters);
    void* objC1 = g_bcadac;
    g_7205a4 = valA6;
    int32_t valA7 = Sys_DispatchOpcode_19(objC1, PolyListDynCubeObj_OnEvent);
    void* tmpD1 = g_bcadc4;
    g_7205a8 = valA7;
    int32_t result = Sys_DispatchOpcode_19(tmpD1, AIGraph_LoadParameters);
    g_7205a0 = result;
    return result;
}

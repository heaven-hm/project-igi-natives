// IGI native provenance: TransparencyList_Init - 0x00531FA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531FA0-TransparencyList_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TransparencyList_Init.h"
int32_t TransparencyList_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("TransparencyList", 0x80, g_54875c, 0);
    g_54f884 = data_1;
    QTask_RemoveEventCallback(data_1, 4, sub_532140);
    QTask_TriggerEvent(g_54f884, 2, TransparencyList_LoadParameters);
    g_c28f90 = Display_RestoreDevice_14("TransparencyListPrimitive");
    int32_t data_3 = Display_RestoreDevice_14("TransparencyListStartPrimitive");
    g_c28f94 = data_3;
    Display_SetGammaRamp_14(data_3, sub_532100);
    return Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_c28f90, TransparencyList_Setup);
}

// IGI native provenance: DynCubeObj_Init - 0x004E5370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E5370-DynCubeObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynCubeObj_Init.h"
int32_t DynCubeObj_Init()

{
    int32_t item_4 = 0;
    g_54875c = TaskType_Register("DynCubeObj", 0x68, g_548638, 0);
    char result = QTask_UnableToAllocateEvent(0x181);
    g_54875e = result;
    return result;
}

// IGI native provenance: ComputerTextItem_OnEvent - 0x0046B960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B960-ComputerTextItem_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerTextItem_OnEvent.h"
uint32_t ComputerTextItem_OnEvent()

{
    int32_t data_val;
    data_val = g_5be2bc;
    return QTask_CloseEvent_2(data_val);
}

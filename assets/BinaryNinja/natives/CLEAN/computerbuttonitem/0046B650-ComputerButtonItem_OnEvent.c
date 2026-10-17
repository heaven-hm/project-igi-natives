// IGI native provenance: ComputerButtonItem_OnEvent - 0x0046B650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B650-ComputerButtonItem_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerButtonItem_OnEvent.h"
uint32_t ComputerButtonItem_OnEvent()

{
    int32_t data_val;
    data_val = g_5be2b4;
    return QTask_CloseEvent_2(data_val);
}

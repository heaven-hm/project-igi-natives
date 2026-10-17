// IGI native provenance: PushButton_OnEvent - 0x0052CB20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052CB20-PushButton_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PushButton_OnEvent.h"
uint32_t PushButton_OnEvent()

{
    int32_t data_val;
    data_val = g_54f718;
    return QTask_CloseEvent_2(data_val);
}

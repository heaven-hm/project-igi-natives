// IGI native provenance: InputPort_OnEvent - 0x004ED5B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ED5B0-InputPort_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "InputPort_OnEvent.h"
uint32_t InputPort_OnEvent()

{
    int32_t data_val;
    data_val = g_a5efa0;
    return QTask_CloseEvent_2(data_val);
}

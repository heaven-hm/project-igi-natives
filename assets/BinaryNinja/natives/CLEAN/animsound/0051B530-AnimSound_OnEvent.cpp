// IGI native provenance: AnimSound_OnEvent - 0x0051B530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051B530-AnimSound_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSound_OnEvent.h"
uint32_t AnimSound_OnEvent()

{
    int32_t data_val;
    data_val = g_a83764;
    return QTask_CloseEvent_2(data_val);
}

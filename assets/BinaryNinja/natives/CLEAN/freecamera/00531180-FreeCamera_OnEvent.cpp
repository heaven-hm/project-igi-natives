// IGI native provenance: FreeCamera_OnEvent - 0x00531180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531180-FreeCamera_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FreeCamera_OnEvent.h"
uint32_t FreeCamera_OnEvent()

{
    int32_t data_val;
    data_val = g_54f7d0;
    return QTask_CloseEvent_2(data_val);
}

// IGI native provenance: HumanAttach_OnEvent - 0x00465BB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465BB0-HumanAttach_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAttach_OnEvent.h"
uint32_t HumanAttach_OnEvent()

{
    int32_t data_val;
    data_val = g_5bdc48;
    return QTask_CloseEvent_2(data_val);
}

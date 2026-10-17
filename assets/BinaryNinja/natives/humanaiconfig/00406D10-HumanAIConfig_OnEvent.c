// IGI native provenance: HumanAIConfig_OnEvent - 0x00406D10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406D10-HumanAIConfig_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAIConfig_OnEvent.h"
int32_t HumanAIConfig_OnEvent(void* context)

{
    *(context + 0x24) = Sys_CheckHeap_22(context + 0x128);
    *(context + 0x20) = Sys_CheckHeap_22(context + 0x28);
    return AIConfig_RegisterConfig(context);
}

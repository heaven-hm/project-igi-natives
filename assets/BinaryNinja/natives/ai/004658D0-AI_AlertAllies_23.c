// IGI native provenance: AI_AlertAllies_23 - 0x004658D0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004658D0-AI_AlertAllies_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_23.h"
void* AI_AlertAllies_23(void* context, int32_t param_2, int32_t param_3)

{
    *(context + 0x13a) = 1;
    memcpy(context + 0x140, param_2, 0x18);
    memcpy(context + 0x158, param_3, 0x28);
    return context;
}

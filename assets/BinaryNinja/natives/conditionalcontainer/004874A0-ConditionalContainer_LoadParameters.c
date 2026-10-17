// IGI native provenance: ConditionalContainer_LoadParameters - 0x004874A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004874A0-ConditionalContainer_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalContainer_LoadParameters.h"
int32_t* ConditionalContainer_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x20);
    Script_ExecuteLevelScript_6(context + 0x70);
    int32_t* result = Script_ExecuteLevelScript_6(context + 0xc0);
    result = 0;
    *(context + 0x110) = 0;
    *(context + 0x112) = 1;
    *(context + 0x111) = 0;
    return result;
}

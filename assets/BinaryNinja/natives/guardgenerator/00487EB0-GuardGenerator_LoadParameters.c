// IGI native provenance: GuardGenerator_LoadParameters - 0x00487EB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00487EB0-GuardGenerator_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GuardGenerator_LoadParameters.h"
int32_t GuardGenerator_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x20);
    *(context + 0x70) = 0;
    *(context + 0x71) = 0;
    *(context + 0x74) = 0;
    *(context + 0x78) = 0;
    *(context + 0x72) = 0;
    *(context + 0x7c) = 0;
    return 0;
}

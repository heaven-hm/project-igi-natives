// IGI native provenance: EditVariable_LoadParameters - 0x00488980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488980-EditVariable_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditVariable_LoadParameters.h"
int32_t EditVariable_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x38);
    Script_ExecuteLevelScript_6(context + 0x88);
    *(context + 0xd8) = 0;
    *(context + 0xdc) = 0;
    return 0;
}

// IGI native provenance: HumanAI_GetContext_45DCB0 - 0x0045DCB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045DCB0-HumanAI_GetContext_45DCB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_GetContext_45DCB0.h"

int32_t* HumanAI_GetContext_45DCB0(void* arg1)

{
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x81) = 0;
    *(arg1 + 0x82) = 0;
    *(arg1 + 0x184) = 0;
    *(arg1 + 0x188) = 0;
    *(arg1 + 0x18c) = 0;
    *(arg1 + 0x190) = 0;
    return Script_ExecuteLevelScript_6(arg1 + 0x194);
}

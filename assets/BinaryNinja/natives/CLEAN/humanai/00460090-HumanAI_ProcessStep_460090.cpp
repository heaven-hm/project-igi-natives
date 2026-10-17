// IGI native provenance: HumanAI_ProcessStep_460090 - 0x00460090 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460090-HumanAI_ProcessStep_460090.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_ProcessStep_460090.h"

int32_t* HumanAI_ProcessStep_460090(void* arg1, int32_t* arg2)

{
    if (*arg2 && *(*(arg1 + 0x4ec) + 0xd9))
    {
        *arg2 = 1;
        return arg2;
    }

    *arg2 = 0;
    return arg2;
}

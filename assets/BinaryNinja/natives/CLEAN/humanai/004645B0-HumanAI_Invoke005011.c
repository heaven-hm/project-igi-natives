// IGI native provenance: HumanAI_Invoke005011 - 0x004645B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004645B0-HumanAI_Invoke005011.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke005011.h"

int32_t* HumanAI_Invoke005011(int32_t* arg1)

{
    int32_t* result = arg1;

    if (result[0x36])
        result = AI_005011(result);

    return result;
}

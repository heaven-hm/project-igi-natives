// IGI native provenance: HumanAI_CompleteAnimation - 0x0045C740 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045C740-HumanAI_CompleteAnimation.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_CompleteAnimation.h"

void* HumanAI_CompleteAnimation(void* pThis )

{
    *(pThis + 0x33c) = 1;
    return pThis;
}

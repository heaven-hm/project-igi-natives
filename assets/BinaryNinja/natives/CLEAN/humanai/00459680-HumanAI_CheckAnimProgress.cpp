// IGI native provenance: HumanAI_CheckAnimProgress - 0x00459680 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459680-HumanAI_CheckAnimProgress.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_CheckAnimProgress.h"

void* HumanAI_CheckAnimProgress(void* pThis, void* param)

{
    *(param + 0x20) = *(param + 0xd38) + *(param + 0x20);
    *(param + 0x28) = *(param + 0xd40) + *(param + 0x28);
    *(param + 0x30) = *(param + 0xd48) + *(param + 0x30);

    if (*(pThis + 8) & 1)
        *(pThis + 0x14) = HumanAI_CompleteAnimation;

    return pThis;
}

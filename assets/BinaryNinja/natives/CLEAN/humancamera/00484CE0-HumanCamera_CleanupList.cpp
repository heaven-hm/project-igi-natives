// IGI native provenance: HumanCamera_CleanupList - 0x00484CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00484CE0-HumanCamera_CleanupList.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanCamera_CleanupList.h"

void* HumanCamera_CleanupList(void* pThis)

{
    *(pThis + 0x68) = 0;
    return pThis;
}

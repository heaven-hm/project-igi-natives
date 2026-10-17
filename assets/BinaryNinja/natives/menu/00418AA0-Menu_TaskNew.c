// IGI native provenance: Menu_TaskNew - 0x00418AA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418AA0-Menu_TaskNew.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_TaskNew.h"

void* Menu_TaskNew(void* pThis)

{
    if (*(pThis + 0x26bd))
        *(pThis + 0x26bd) = 0;

    return pThis;
}

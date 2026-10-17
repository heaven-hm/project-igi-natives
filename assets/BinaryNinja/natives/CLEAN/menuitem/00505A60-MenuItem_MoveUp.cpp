// IGI native provenance: MenuItem_MoveUp - 0x00505A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505A60-MenuItem_MoveUp.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuItem_MoveUp.h"

void* MenuItem_MoveUp(void* pThis, void* param)

{
    if (*(pThis + 0x4e))
        *(param + 4) = pThis;

    return pThis;
}

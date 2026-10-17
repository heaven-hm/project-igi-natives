// IGI native provenance: MenuItem_Move - 0x00505A10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505A10-MenuItem_Move.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuItem_Move.h"

void* MenuItem_Move(void* pThis, int32_t* param)

{
    if (*(pThis + 0x38) == *param)
        param[1] = pThis;

    return pThis;
}

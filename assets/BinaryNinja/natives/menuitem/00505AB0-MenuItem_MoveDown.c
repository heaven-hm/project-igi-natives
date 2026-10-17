// IGI native provenance: MenuItem_MoveDown - 0x00505AB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505AB0-MenuItem_MoveDown.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuItem_MoveDown.h"

void* MenuItem_MoveDown(int32_t pThis, void* param)

{
    if (!*(param + 4))
        *(param + 4) = pThis;

    return param;
}

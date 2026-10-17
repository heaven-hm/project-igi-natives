// IGI native provenance: PatrolPath_Create - 0x00453470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453470-PatrolPath_Create.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPath_Create.h"

void* PatrolPath_Create(void* pThis)

{
    *(pThis + 0x20) = 0xffffffff;
    *(pThis + 0x24) = 0xffffffff;
    return pThis;
}

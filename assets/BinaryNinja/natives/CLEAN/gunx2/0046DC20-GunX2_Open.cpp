// IGI native provenance: GunX2_Open - 0x0046DC20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046DC20-GunX2_Open.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunX2_Open.h"

void* GunX2_Open(void* pThis)

{
    *(pThis + 0x20) = 0;
    *(pThis + 0x24) = 0;
    *(pThis + 0x44) = 0;
    return pThis;
}

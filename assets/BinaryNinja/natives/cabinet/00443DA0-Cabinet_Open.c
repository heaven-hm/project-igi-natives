// IGI native provenance: Cabinet_Open - 0x00443DA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00443DA0-Cabinet_Open.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Cabinet_Open.h"

int32_t Cabinet_Open(int32_t* pThis )

{
    void* result_val = *pThis;
    return FX_FireBallUpdate_9(result_val, result_val + 0x404);
}

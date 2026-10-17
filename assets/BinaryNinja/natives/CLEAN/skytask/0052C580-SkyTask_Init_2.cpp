// IGI native provenance: SkyTask_Init_2 - 0x0052C580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052C580-SkyTask_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SkyTask_Init_2.h"

void* SkyTask_Init_2(void* pThis, int32_t* param)

{
    return DynObj_RegisterSymbol_9(*param, pThis);
}

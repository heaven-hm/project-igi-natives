// IGI native provenance: FX_FireBallUpdate_18 - 0x0048AE70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048AE70-FX_FireBallUpdate_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_18.h"
void* FX_FireBallUpdate_18(int32_t context, void* param_2, int32_t param_3, int32_t param_4)

{
    *(param_2 + 0x24) = param_4;

    if (!param_3)
        return param_2;

    return param_3(context, param_2);
}

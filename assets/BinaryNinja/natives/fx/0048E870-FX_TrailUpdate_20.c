// IGI native provenance: FX_TrailUpdate_20 - 0x0048E870 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048E870-FX_TrailUpdate_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_TrailUpdate_20.h"
int32_t* FX_TrailUpdate_20(void* context)

{
    void* data_val = *(context + 0x3ab0);

    if (data_val)
    {
        AI_CombatTarget_5(data_val);
        *(context + 0x3ab0) = 0;
    }

    int32_t* result = *(context + 0x3ab4);

    if (result)
    {
        result = AI_CombatTarget_5(result);
        *(context + 0x3ab4) = 0;
    }

    return result;
}

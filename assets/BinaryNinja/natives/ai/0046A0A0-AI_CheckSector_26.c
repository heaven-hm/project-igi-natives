// IGI native provenance: AI_CheckSector_26 - 0x0046A0A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046A0A0-AI_CheckSector_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector_26.h"
int32_t* AI_CheckSector_26(void* context)

{
    int32_t* result = *(context + 0x90);

    if (result)
    {
        result = Qtask_UpdateList(result);
        *(context + 0x90) = 0;
    }

    return result;
}

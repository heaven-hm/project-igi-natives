// IGI native provenance: AI_CheckSector - 0x00450EE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450EE0-AI_CheckSector.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector.h"
int32_t* AI_CheckSector(void* context)

{
    int32_t* result = *(context + 0x8fc);
    int32_t* result_1 = *result;

    if (result_1)
    {
        while (!(result[4] & 1))
        {
            AI_CombatTarget_2(context, result);
            result = result_1;
            result_1 = *result_1;

            if (!result_1)
                break;
        }
    }

    return result;
}

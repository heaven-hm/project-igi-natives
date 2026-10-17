// IGI native provenance: AI_CombatTarget_2 - 0x00450FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450FF0-AI_CombatTarget_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_2.h"
int32_t* AI_CombatTarget_2(void* context, int32_t* param_2)

{
    int32_t data_val = param_2[8];

    if (data_val)
        data_val(context, param_2);

    int32_t* result = Camera_ApplyHandiCam_33(param_2);
    param_2[0xb] = 0;
    int32_t* source_1 = param_2[0xa];

    if (!source_1)
        return result;

    return AI_CheckHearing_2(context, source_1);
}

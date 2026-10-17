// IGI native provenance: AI_TakeCover_23 - 0x00465880 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00465880-AI_TakeCover_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_23.h"
int32_t AI_TakeCover_23(int32_t context, int32_t param_2)

{
    memcpy(context, param_2 + 0xf8, 0x28);
    return param_2;
}

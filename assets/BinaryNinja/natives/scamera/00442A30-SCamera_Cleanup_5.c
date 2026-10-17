// IGI native provenance: SCamera_Cleanup_5 - 0x00442A30 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00442A30-SCamera_Cleanup_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Cleanup_5.h"
void* SCamera_Cleanup_5(void* context, int32_t* param_2)

{
    *param_2 = Env_InitLadder_3();
    param_2[8] = 1;
    bool context_val = *(context + 0x170);
    *(param_2 + 0x25) = 1;
    param_2[9] = !context_val;
    memcpy(&param_2[2], context + 0x20, 0x18);
    return context;
}

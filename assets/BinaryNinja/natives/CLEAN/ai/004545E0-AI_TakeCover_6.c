// IGI native provenance: AI_TakeCover_6 - 0x004545E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004545E0-AI_TakeCover_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_6.h"
void* AI_TakeCover_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 1;
    Bones_PlayAnimation(param_2 + 0x68, 0, *(FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8)) + 4), 0, 0.0f);
    void* result = FX_TrailUpdate_15(param_2);
    *(context + 0x14) = AI_UpdateOrders_6;
    return result;
}

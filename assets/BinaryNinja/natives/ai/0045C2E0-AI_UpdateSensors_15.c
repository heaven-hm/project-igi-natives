// IGI native provenance: AI_UpdateSensors_15 - 0x0045C2E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045C2E0-AI_UpdateSensors_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateSensors_15.h"
void* AI_UpdateSensors_15(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 1;
    Bones_PlayAnimation(param_2 + 0x68, 0, *(FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8)) + 4), 0, 0.0f);
    void* result = FX_TrailUpdate_15(param_2);
    *(context + 0x14) = AI_CombatTarget_12;
    return result;
}

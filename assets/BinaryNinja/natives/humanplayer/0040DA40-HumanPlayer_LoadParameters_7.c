// IGI native provenance: HumanPlayer_LoadParameters_7 - 0x0040DA40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040DA40-HumanPlayer_LoadParameters_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_LoadParameters_7.h"
void** HumanPlayer_LoadParameters_7(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    *(context + 0x14) = HumanPlayer_UpdateMotion_6;
    return result;
}

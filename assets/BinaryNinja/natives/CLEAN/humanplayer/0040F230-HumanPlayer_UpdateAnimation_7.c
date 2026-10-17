// IGI native provenance: HumanPlayer_UpdateAnimation_7 - 0x0040F230 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F230-HumanPlayer_UpdateAnimation_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateAnimation_7.h"
void* HumanPlayer_UpdateAnimation_7(void* context, void* param_2)

{
    HumanPlayer_CheckCollision_9(param_2, 1.26116862e-44.0f);
    void* result = AI_SelectTarget_22(*(param_2 + 0x4ec), -0.610865235f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    *(param_2 + 0x4d0) = 0;
    *(context + 0x14) = HumanPlayer_CheckCollision_7;
    return result;
}

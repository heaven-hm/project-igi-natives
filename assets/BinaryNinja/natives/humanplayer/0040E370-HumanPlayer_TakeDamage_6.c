// IGI native provenance: HumanPlayer_TakeDamage_6 - 0x0040E370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040E370-HumanPlayer_TakeDamage_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_TakeDamage_6.h"
struct status_msg* HumanPlayer_TakeDamage_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    HumanPlayer_ApplyRecoil_9(param_2, 4);
    AI_MoveToNode_22(*(param_2 + 0x4ec));
    AI_TakeCover_20(param_2);
    struct status_msg* result = AI_CheckSector_28(param_2);
    *(context + 0x14) = HumanPlayer_UpdateAnimation_6;
    return result;
}

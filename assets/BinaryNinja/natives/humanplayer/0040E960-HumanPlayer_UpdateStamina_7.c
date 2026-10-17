// IGI native provenance: HumanPlayer_UpdateStamina_7 - 0x0040E960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040E960-HumanPlayer_UpdateStamina_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateStamina_7.h"
void** HumanPlayer_UpdateStamina_7(void* context, void* param_2)

{
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    *(context + 0x14) = sub_40e980;
    return result;
}

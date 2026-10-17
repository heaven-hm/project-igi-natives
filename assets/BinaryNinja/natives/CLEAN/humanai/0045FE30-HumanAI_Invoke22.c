// IGI native provenance: HumanAI_Invoke22 - 0x0045FE30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045FE30-HumanAI_Invoke22.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke22.h"

int32_t HumanAI_Invoke22(void* arg1, int32_t* arg2)

{
    *arg2 = AI_CombatTarget_22();
    arg2[8] = *(arg1 + 0xfc);
    arg2[9] = !*(arg1 + 0xcf5);
    *(arg2 + 0x25) = *(arg1 + 0xcf6);
    return AI_MoveToNode_23(&arg2[2], arg1);
}

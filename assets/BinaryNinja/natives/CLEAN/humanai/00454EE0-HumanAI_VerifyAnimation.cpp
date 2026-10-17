// IGI native provenance: HumanAI_VerifyAnimation - 0x00454EE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00454EE0-HumanAI_VerifyAnimation.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_VerifyAnimation.h"

int32_t HumanAI_VerifyAnimation(int32_t pThis)

{
    return (*((AI_UpdateOrders_17() << 2) + &g_a970e0))(pThis);
}

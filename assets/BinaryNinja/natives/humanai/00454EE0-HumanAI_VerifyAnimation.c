// Original IGI.EXE function: HumanAI_VerifyAnimation (VA 0x00454EE0; static CFG gate PASS, CFG score 1.000).
#include "HumanAI_VerifyAnimation.h"

int32_t HumanAI_VerifyAnimation(int32_t pThis)

{
    return (*((AI_UpdateOrders_17() << 2) + &g_a970e0))(pThis);
}

// Original IGI.EXE function: HumanPlayer_UpdateStamina_7 (VA 0x0040E960; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateStamina_7.h"
void** HumanPlayer_UpdateStamina_7(void* context, void* param_2)

{
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    *(context + 0x14) = sub_40e980;
    return result;
}

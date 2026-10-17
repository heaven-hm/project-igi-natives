// Original IGI.EXE function: HumanPlayer_UpdateStamina_6 (VA 0x0040DCA0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateStamina_6.h"
void** HumanPlayer_UpdateStamina_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    long double fpu_val_7_1 = Env_UpdateCameraLens() * 30.0f;
    *(param_2 + 0xd64) = 0;
    *(param_2 + 0xd60) = fpu_val_7_1;
    *(context + 0x14) = sub_40dd00;
    return result;
}

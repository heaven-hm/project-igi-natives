#include "HumanPlayer_UpdateStamina_6.h"
void** HumanPlayer_UpdateStamina_6(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    void** result = HumanPlayer_CheckCollision_9(a2, 0f);
    long double x87_r7_1 = Env_UpdateCameraLens() * 30f;
    *(a2 + 0xd64) = 0;
    *(a2 + 0xd60) = x87_r7_1;
    *(a1 + 0x14) = sub_40dd00;
    return result;
}

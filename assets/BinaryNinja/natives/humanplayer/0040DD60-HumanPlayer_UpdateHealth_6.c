#include "HumanPlayer_UpdateHealth_6.h"
void** HumanPlayer_UpdateHealth_6(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    void** result = HumanPlayer_CheckCollision_9(a2, 0f);
    *(a2 + 0xd98) = 0xbf800000;
    *(a1 + 0x14) = sub_40dda0;
    return result;
}

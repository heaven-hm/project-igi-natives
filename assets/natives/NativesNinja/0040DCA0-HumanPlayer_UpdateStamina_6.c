#include "0040DCA0-HumanPlayer_UpdateStamina_6.h"
/* 0x0040dca0 HumanPlayer_UpdateStamina_6 full linked: callers=0 callees=3 */
void* HumanPlayer_UpdateStamina_6(void* a1, struct human_player* a2)

{
    a2->pad0[0x33d] = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    void* result = HumanPlayer_CheckCollision_9(a2, 0f);
    long double x87_r7_1 = sub_440270() * 30f;
    *(a2 + 0xd64) = 0;
    *(a2 + 0xd60) = x87_r7_1;
    *(a1 + 0x14) = sub_40dd00;
    return result;
}

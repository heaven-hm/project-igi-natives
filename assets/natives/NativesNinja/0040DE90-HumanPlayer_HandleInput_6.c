#include "0040DE90-HumanPlayer_HandleInput_6.h"
/* 0x0040de90 HumanPlayer_HandleInput_6 full linked: callers=0 callees=3 */
void* HumanPlayer_HandleInput_6(void* a1, struct human_player* a2)

{
    a2->pad0[0x33d] = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    void* result = HumanPlayer_CheckCollision_9(a2, 0f);
    __builtin_memset(&a2->pad2[0x174], 0, 0x18);
    *(a1 + 0x14) = HumanPlayer_ApplyPhysics_6;
    return result;
}

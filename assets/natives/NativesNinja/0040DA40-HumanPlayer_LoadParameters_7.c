#include "0040DA40-HumanPlayer_LoadParameters_7.h"
/* 0x0040da40 HumanPlayer_LoadParameters_7 full linked: callers=0 callees=2 */
void* HumanPlayer_LoadParameters_7(void* a1, struct human_player* a2)

{
    a2->pad0[0x33d] = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    void* result = HumanPlayer_CheckCollision_9(a2, 0f);
    *(a1 + 0x14) = HumanPlayer_UpdateMotion_6;
    return result;
}

#include "00408C30-HumanPlayer_CheckCollision.h"
/* 0x00408c30 HumanPlayer_CheckCollision full linked: callers=0 callees=3 */
int32_t HumanPlayer_CheckCollision(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    sub_4d6520(a2 + 0x68, 0f);
    sub_489e70(a2, *(a1 + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 3);
    *(a1 + 0x14) = HumanPlayer_ApplyRecoil;
    return result;
}

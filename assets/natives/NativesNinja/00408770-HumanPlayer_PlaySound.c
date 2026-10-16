#include "00408770-HumanPlayer_PlaySound.h"
/* 0x00408770 HumanPlayer_PlaySound full linked: callers=0 callees=2 */
int32_t HumanPlayer_PlaySound(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    sub_489e70(a2, *(a1 + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 1);
    *(a1 + 0x14) = sub_4087b0;
    return result;
}

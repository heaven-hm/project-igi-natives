#include "00409220-HumanPlayer_UpdateHealth_2.h"
/* 0x00409220 HumanPlayer_UpdateHealth_2 full linked: callers=0 callees=5 */
int32_t HumanPlayer_UpdateHealth_2(void* a1, float a2)

{
    float esi = a2;
    *(esi + 0x33d) = 0;
    a2 = sub_4d6520(esi + 0x68, 0f);
    sub_489e70(esi, *(a1 + 0x10), 0.200000003f);
    int32_t eax_1 = *(a1 + 0xc);

    if (eax_1 == 4 || eax_1 == 0xd || eax_1 == 0x18)
        sub_4d65b0(esi + 0x68, 0, sub_4d64e0(esi + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(esi, 3);
    *(a1 + 0x14) = HumanPlayer_HandleInput_2;
    return result;
}

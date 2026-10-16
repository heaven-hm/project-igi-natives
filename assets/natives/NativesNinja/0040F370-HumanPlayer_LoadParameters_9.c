#include "0040F370-HumanPlayer_LoadParameters_9.h"
/* 0x0040f370 HumanPlayer_LoadParameters_9 full linked: callers=0 callees=3 */
void* HumanPlayer_LoadParameters_9(void* a1, struct human_player* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.40129846e-45f);
    sub_463610(a2);
    int32_t eax;
    eax = a2->pad0[0x2fc];
    *(&eax + 1) = a2->pad0[0x2fd];
    *(&eax + 2) = a2->pad0[0x2fe];
    *(&eax + 3) = a2->pad0[0x2ff];
    void* ecx;
    ecx = a2->pad0[0x2f0];
    *(&ecx + 1) = a2->pad0[0x2f1];
    *(&ecx + 2) = a2->pad0[0x2f2];
    *(&ecx + 3) = a2->pad0[0x2f3];
    a2->pad0[0x2f8] = eax;
    a2->pad0[0x2f9] = *(&eax + 1);
    a2->pad0[0x2fa] = *(&eax + 2);
    a2->pad0[0x2fb] = *(&eax + 3);
    a2->pad0[0x2fc] = 0x2c;
    a2->pad0[0x2fd] = 0;
    a2->pad0[0x2fe] = 0;
    a2->pad0[0x2ff] = 0;
    int32_t eax_1 = *(ecx + 0xb0);
    a2->pad0[0x300] = eax_1;
    a2->pad0[0x301] = *(&eax_1 + 1);
    a2->pad0[0x302] = *(&eax_1 + 2);
    a2->pad0[0x303] = *(&eax_1 + 3);
    eax_1(&a2->pad0[0x2ec], a2);
    void* result = sub_464770(a2->pad4ec, -0.610865235f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    *(a1 + 0x14) = sub_40f3f0;
    return result;
}

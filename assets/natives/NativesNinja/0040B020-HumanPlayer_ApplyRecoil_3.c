#include "0040B020-HumanPlayer_ApplyRecoil_3.h"
/* 0x0040b020 HumanPlayer_ApplyRecoil_3 full linked: callers=0 callees=5 */
int32_t HumanPlayer_ApplyRecoil_3(void* a1, float a2)

{
    float esi = a2;
    *(esi + 0x33d) = 1;
    a2 = sub_4d6520(esi + 0x68, 0f);
    sub_489e70(esi, *(a1 + 0x10), 0.200000003f);
    int32_t eax_1 = *(a1 + 0xc);

    if (eax_1 == 3 || eax_1 == 0x14 || eax_1 == 0x1b)
        sub_4d65b0(esi + 0x68, 0, sub_4d64e0(esi + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(esi, 5);
    *(a1 + 0x14) = sub_40b0a0;
    return result;
}

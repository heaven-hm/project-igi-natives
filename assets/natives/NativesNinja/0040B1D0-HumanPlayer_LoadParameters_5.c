#include "0040B1D0-HumanPlayer_LoadParameters_5.h"
/* 0x0040b1d0 HumanPlayer_LoadParameters_5 full linked: callers=0 callees=5 */
int32_t HumanPlayer_LoadParameters_5(void* a1, float a2)

{
    float esi = a2;
    *(esi + 0x33d) = 1;
    a2 = sub_4d6520(esi + 0x68, 0f);
    sub_489e70(esi, *(a1 + 0x10), 0.200000003f);

    if (*(a1 + 0xc) == 0xc)
        sub_4d65b0(esi + 0x68, 0, sub_4d64e0(esi + 0x68, 0) * a2);

    int32_t result = HumanPlayer_ApplyRecoil_9(esi, 5);
    *(a1 + 0x14) = sub_40b240;
    return result;
}

#include "0040E4D0-HumanPlayer_ApplyRecoil_6.h"
/* 0x0040e4d0 HumanPlayer_ApplyRecoil_6 full linked: callers=0 callees=1 */
int32_t HumanPlayer_ApplyRecoil_6(void* a1, void* a2)

{
    int32_t result = *(a1 + 8);

    if (result & 0x20000)
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2f;
        int32_t eax_1 = *(ecx_1 + 0xbc);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (result & 0x10000)
    {
        void* ecx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2e;
        int32_t eax_4 = *(ecx_2 + 0xb8);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (!(result & 1))
        return result;

    HumanPlayer_LoadParameters_6(a2);
    int32_t* ecx_3 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_7 = *ecx_3;
    *(a1 + 0x14) = eax_7;
    return eax_7(a1, a2);
}

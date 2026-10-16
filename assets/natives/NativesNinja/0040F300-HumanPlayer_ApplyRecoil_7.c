#include "0040F300-HumanPlayer_ApplyRecoil_7.h"
/* 0x0040f300 HumanPlayer_ApplyRecoil_7 full linked: callers=0 callees=1 */
int32_t HumanPlayer_ApplyRecoil_7(void* a1, void* a2)

{
    if (*(a2 + 0xd4c) != 0xffffffff)
    {
        void* edx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 4;
        int32_t ecx_2 = *(edx_1 + 0x10);
        *(a1 + 0x14) = ecx_2;
        return ecx_2(a1, a2);
    }

    char result = sub_4647d0(*(a2 + 0x4ec));

    if (!result)
        return result;

    *(a2 + 0x4d0) = 1;
    int32_t edx_2 = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    void* ecx_3 = *(a1 + 4);
    *(a1 + 0xc) = edx_2;
    int32_t ecx_4 = *(ecx_3 + 4);
    *(a1 + 0x14) = ecx_4;
    return ecx_4(a1, a2);
}

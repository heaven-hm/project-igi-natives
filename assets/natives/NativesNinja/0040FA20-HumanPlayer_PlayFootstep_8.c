#include "0040FA20-HumanPlayer_PlayFootstep_8.h"
/* 0x0040fa20 HumanPlayer_PlayFootstep_8 full linked: callers=0 callees=1 */
int32_t HumanPlayer_PlayFootstep_8(void* a1, void* a2)

{
    char result = sub_4647d0(*(a2 + 0x4ec));

    if (!result)
        return result;

    void* edx_1 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    int32_t ecx_2 = *(edx_1 + 4);
    *(a1 + 0x14) = ecx_2;
    return ecx_2(a1, a2);
}

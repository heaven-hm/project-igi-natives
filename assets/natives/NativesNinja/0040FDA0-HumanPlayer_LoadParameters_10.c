#include "0040FDA0-HumanPlayer_LoadParameters_10.h"
/* 0x0040fda0 HumanPlayer_LoadParameters_10 full linked: callers=0 callees=0 */
void* HumanPlayer_LoadParameters_10(void* a1, void* a2)

{
    void* edx = *(a2 + 0x2f0);
    *(a2 + 0x2f8) = *(a2 + 0x2fc);
    *(a2 + 0x2fc) = 0x2d;
    int32_t ecx_1 = *(edx + 0xb4);
    *(a2 + 0x300) = ecx_1;
    ecx_1(a2 + 0x2ec, a2);
    *(a2 + 0x4d0) = 0;
    *(a1 + 0x14) = sub_40fdf0;
    return a1;
}

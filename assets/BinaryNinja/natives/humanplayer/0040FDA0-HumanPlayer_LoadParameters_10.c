// Original IGI.EXE function: HumanPlayer_LoadParameters_10 (VA 0x0040FDA0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_LoadParameters_10.h"
void* HumanPlayer_LoadParameters_10(void* a1, void* a2)

{
    void* tmpD = *(a2 + 0x2f0);
    *(a2 + 0x2f8) = *(a2 + 0x2fc);
    *(a2 + 0x2fc) = 0x2d;
    int32_t objC1 = *(tmpD + 0xb4);
    *(a2 + 0x300) = objC1;
    objC1(a2 + 0x2ec, a2);
    *(a2 + 0x4d0) = 0;
    *(a1 + 0x14) = sub_40fdf0;
    return a1;
}

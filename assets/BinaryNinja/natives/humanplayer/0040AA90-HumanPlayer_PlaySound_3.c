// Original IGI.EXE function: HumanPlayer_PlaySound_3 (VA 0x0040AA90; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlaySound_3.h"
int32_t HumanPlayer_PlaySound_3(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0.200000003f);
    *(a1 + 0x14) = sub_40aac0;
    return result;
}

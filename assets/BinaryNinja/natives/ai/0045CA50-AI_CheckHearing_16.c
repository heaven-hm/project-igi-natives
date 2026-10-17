// Original IGI.EXE function: AI_CheckHearing_16 (VA 0x0045CA50; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_16.h"
int32_t AI_CheckHearing_16(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45ca80;
    return result;
}

// Original IGI.EXE function: AI_CheckHearing_21 (VA 0x00463740; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_21.h"
int32_t AI_CheckHearing_21(void* a1)

{
    int32_t* objC = *(a1 + 0x7b0);

    if (!objC)
        return 0;

    return *objC;
}

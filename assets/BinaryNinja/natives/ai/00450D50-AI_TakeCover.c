// Original IGI.EXE function: AI_TakeCover (VA 0x00450D50; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover.h"
int32_t AI_TakeCover(void* a1, int32_t a2)

{
    uint32_t valA = AI_CheckHearing();
    int32_t tmpD = 0;
    tmpD = *(a1 + 0x1c);
    return (*(((valA * 0x180 + tmpD) << 2) + &g_a96ae0))(a1, a2);
}

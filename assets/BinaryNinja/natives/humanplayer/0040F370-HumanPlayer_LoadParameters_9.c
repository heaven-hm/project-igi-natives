// Original IGI.EXE function: HumanPlayer_LoadParameters_9 (VA 0x0040F370; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_LoadParameters_9.h"
void* HumanPlayer_LoadParameters_9(void* a1, void* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.40129846e-45f);
    AI_AlertAllies_20(a2);
    void* objC = *(a2 + 0x2f0);
    *(a2 + 0x2f8) = *(a2 + 0x2fc);
    *(a2 + 0x2fc) = 0x2c;
    int32_t valA1 = *(objC + 0xb0);
    *(a2 + 0x300) = valA1;
    valA1(a2 + 0x2ec, a2);
    void* result = AI_SelectTarget_22(*(a2 + 0x4ec), -0.610865235f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    *(a1 + 0x14) = sub_40f3f0;
    return result;
}

// Original IGI.EXE function: HumanPlayer_CheckGround_8 (VA 0x0040F4F0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckGround_8.h"
int32_t HumanPlayer_CheckGround_8(void* a1, void* a2)

{
    int32_t flagP = *(a2 + 0x4ec);
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    void* valA2 = HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    Bones_PlayAnimation(flagP + 0x68, 0, *(valA2 + 0x684), 0, 0f);
    long double x87_r7_1 = **(SoundSys_EvaluateTrigger_18(valA2 + 0x61c) + 0x2d4) * 30f;
    *(a2 + 0x4d8) = 0;
    *(a2 + 0x4e0) = 0;
    *(a2 + 0x4e4) = 0;
    int32_t result = x87_r7_1;
    *(a2 + 0x4dc) = result;
    *(a1 + 0x14) = HumanPlayer_GrenadeTick1;
    return result;
}
